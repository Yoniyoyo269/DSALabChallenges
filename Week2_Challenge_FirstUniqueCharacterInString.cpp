#include <iostream>
#include <unordered_map>

int firstUniqChar(const std::string& s) {
    std::unordered_map<char, int> freq;

    for (char c : s) {
        freq[c]++;
    }

    for (int i = 0; i < s.size(); i++) {
        if (freq[s[i]] == 1) {
            return i;
        }
    }

    return -1; 
}

int main() {
    std::string s = "leetcode";
    std::cout << "Index of first non-repeating character: " << firstUniqChar(s) << std::endl;
    return 0;
}
