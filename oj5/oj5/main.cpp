#include<string>
#include<iostream> 
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size() < 2) return s;
        int max = 0;
        string subs;
        int i,j;
        for ( i = 0; i < s.size(); i++) {
            for( j = 1; i - j >= 0 && i+j <=(s.size()-1);j++){
                if(s[i-j] != s[i+j]){
                    if(max < (2*j-1)){
                        max = 2 * j - 1;
                        subs = s.substr( i - j + 1, 2 * j - 1);
                    }
                    break;
                }
            }
            if(i - j < 0 || i+j > (s.size()-1)){
                if(max < (2*j-1)){
                    max = 2 * j - 1;
                    subs = s.substr( i - j + 1, 2 * j - 1);
                    
                }
            }
            for ( j = 0; i-j >= 0 && i+j+1 <= (s.size() - 1); j++) {
                if (s[i - j] != s[i + j + 1]) {
                    if(max < 2 * j){
                        max = 2 * j;
                        subs = s.substr(i - j + 1, 2 * j);
                    }
                    break;
                }
            }
            if(i - j < 0 ||  i + j + 1 > (s.size() - 1)){
                if(max < 2 * j){
                    max = 2 * j;
                    subs = s.substr(i - j + 1, 2 * j);
                    
                }
            }
        }
        return subs;
    }
};
int main(){
    Solution   a;
    string s1 = "";
    string s2 = "abb";
    string s3 = "abccba";
    string res = a.longestPalindrome(s2);
    cout << res <<endl;
}