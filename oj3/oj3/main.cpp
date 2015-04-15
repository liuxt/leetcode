#include<map>
#include <string>
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mapa;
//        char c = s[0];
        int i = 0;
        for(;i < s.size();i++){
            if(mapa.find(s[i]) != mapa.end()){
                return i;
            }mapa.c
            else{
                mapa.insert(map<char,int>::value_type(s[i],i));
            }
        }
        return i;
    }
};
int main(){
    string c = "bbbbb";
    Solution   a;
    int i = a.lengthOfLongestSubstring(c);
    std::cout<< i << endl;
    int d = 1;
    int b = 2;
    
    int e = ()
}