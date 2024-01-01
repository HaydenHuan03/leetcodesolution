//check whether if the number is same as reversed
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
        return false;

        int digit;
        long long reversed = 0;
        int temp = x;

        do{
            digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /=10;
        }while(temp!=0);
        
        return reversed == x;
    }
};
