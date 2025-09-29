#include "string_utils.h"

std::string StringReform::ReplaceChar(const std::string& text, int n, 
                                        char oldValue, char newValue) {
    if (n <= 0) return text;
    
    std::string result = text;
    int count = 0;
    int replaced = 0;
    
    for (int i = 0; i < result.length(); ++i) {
        if (result[i] == oldValue) {
            count++;
            if (count % n == 0) {
                result[i] = newValue;
                replaced++;
            }
        }
    }
    
    return (replaced > 0) ? result : text;
}
