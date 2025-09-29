#include <iostream>
#include "../include/string_utils.h"

int main() {
    std::string text;
    int n;
    char oldValue, newValue;
    
    std::cout << "Enter the text: ";
    std::getline(std::cin, text);
    
    std::cout << "Enter n: ";
    std::cin >> n;
    
    std::cout << "Enter oldValue: ";
    std::cin >> oldValue;
    
    std::cout << "Enter newValue: ";
    std::cin >> newValue;
    
    std::string result = StringReform::ReplaceChar(text, n, oldValue, newValue);
    std::cout << "REsult: " << result << std::endl;
    return 0;
}
