//  palindrome number 

class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers and numbers ending in 0 (except 0 itself) can't be palindrome
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;

        int reversed = 0;
        while (x > reversed) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }

        // For even digits: x == reversed
        // For odd digits: x == reversed/10
        return (x == reversed || x == reversed / 10);
    }
};
