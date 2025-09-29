#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include <string>

class StringReform {
public:
    static std::string ReplaceChar(const std::string& text, int n, 
                                      char oldValue, char newValue);
};

#endif
