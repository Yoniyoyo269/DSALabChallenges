#include <iostream>
#include <unordered_map>

int longestPalindrome(const std::string& s) {
    std::unordered_map<char, int> freq;
    
    for (char c : s) {
        freq[c]++;
    }
    
    int length = 0;
    bool hasOdd = false;

    for (const auto& pair : freq) {
        if (pair.second % 2 == 0) {
            length += pair.second;  
        } else {
            length += pair.second - 1; 
            hasOdd = true;  
        }
    }
    
    if (hasOdd) {
        length++;
    }

    return length;
}

int main() {
    std::string s = "abccccdd";
    std::cout << "Longest palindrome length: " << longestPalindrome(s) << std::endl;
    return 0;
}
