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
       int i=0;
       int j = s.size() - 1;
       while(i<j){
        while(i<j && !isalnum(s[j])){
            j--;
        }
        while(i<j && !isalnum(s[i])){
            i++;
        }
        if(tolower(s[i]) != tolower(s[j])){
            return false;
        }
        i++;
        j--;
       }
       return true;
    }
};