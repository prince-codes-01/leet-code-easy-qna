//  palindrome number 

#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        // Step 1: Negative numbers and numbers ending in 0 (except 0) can't be palindrome
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;

        int reversedHalf = 0;
        
        // Step 2: Reverse half of the number
        while (x > reversedHalf) {
            int lastDigit = x % 10;
            reversedHalf = reversedHalf * 10 + lastDigit;
            x /= 10;
        }

        // Step 3: Check for palindrome
        // For even length: x == reversedHalf
        // For odd length: x == reversedHalf / 10
        return (x == reversedHalf || x == reversedHalf / 10);
    }
};

int main() {
    Solution solution;

    // Test cases
    int num1 = 121;
    int num2 = -121;
    int num3 = 10;
    int num4 = 12321;

    cout << "Is " << num1 << " a palindrome? " << (solution.isPalindrome(num1) ? "Yes" : "No") << endl;
    cout << "Is " << num2 << " a palindrome? " << (solution.isPalindrome(num2) ? "Yes" : "No") << endl;
    cout << "Is " << num3 << " a palindrome? " << (solution.isPalindrome(num3) ? "Yes" : "No") << endl;
    cout << "Is " << num4 << " a palindrome? " << (solution.isPalindrome(num4) ? "Yes" : "No") << endl;

    return 0;
}

