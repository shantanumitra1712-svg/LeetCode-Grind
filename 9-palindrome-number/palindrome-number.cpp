class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }        
        else{
            int org = x;
            long long rev=0;
            while(x>0){
                long long rem = x%10;
                rev = rev*10 + rem;
                x /= 10;
            }

            if(org == rev){
                return true;
            }
            else{
                return false;
            }
        }
    }
};