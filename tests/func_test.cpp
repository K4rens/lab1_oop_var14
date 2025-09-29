#include <gtest/gtest.h>
#include "../include/string_utils.h"

TEST(StringReformTest, ReplaceChar_Base) {
    std::string input = "a-a-a-a";
    std::string result = StringReform::ReplaceChar(input, 2, 'a', 'b');
    EXPECT_EQ(result, "a-b-a-b");
}

TEST(StringReformTest, ReplaceChar_NoMatches) {
    std::string input = "hello world";
    std::string result = StringReform::ReplaceChar(input, 2, 'x', 'y');
    EXPECT_EQ(result, "hello world");
}

TEST(StringReformTest, ReplaceChar_BadN) {
    std::string input = "test";
    std::string result = StringReform::ReplaceChar(input, 0, 't', 'x');
    EXPECT_EQ(result, "test");
}

TEST(StringReformTest, ReplaceChar_AllReplaces) {
    std::string input = "aaa";
    std::string result = StringReform::ReplaceChar(input, 1, 'a', 'b');
    EXPECT_EQ(result, "bbb");
}

TEST(StringReformTest, ReplaceChar_PartialReplacement) {
    std::string input = "abc-abc-abc";
    std::string result = StringReform::ReplaceChar(input, 2, 'c', 'x');
    EXPECT_EQ(result, "abc-abx-abc");
}

TEST(StringReformTest, ReplaceChar_NBiggerThanText) {
    std::string input = "a-a-a";
    std::string result = StringReform::ReplaceChar(input, 5, 'a', 'b');
    EXPECT_EQ(result, "a-a-a");
}
