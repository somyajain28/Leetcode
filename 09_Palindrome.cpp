class Solution {
public:
    bool isPalindrome(int x) {
        int n = x;
        long v=0;
        while(n>0){
            v = (v * 10) + (n % 10);
            n = n/10;
        }
        if(v == x)
            return true;
        else
            return false;
    }
};
