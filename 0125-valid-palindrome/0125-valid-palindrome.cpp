class Solution {
public:
    // bool checkPalindrome(int i,int j,string s){
    //     if(i>=j){
    //         return true;
    //     }
    //     if(s[i] != s[j]){
    //         return false;
    //     }
    //     else{
    //         return checkPalindrome(i+1,j-1,s);
    //     }
    // }
    // bool isPalindrome(string s) {
    //     int i = 0;
    //     int j = s.size();
    //     return checkPalindrome(i,j,s);
    // }
    bool isPalindrome(string s) {
       string cleaned;
       for (char c : s) {
        if (isalnum(c)) {
            cleaned += tolower(c);
        }
       }
        int i = 0, j = cleaned.size() - 1;
        while (i < j) {
            if (cleaned[i] != cleaned[j]) {
                return false;
            }
            ++i;
            --j;
        }
        return true;
    }
};