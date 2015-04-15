//
//  main.cpp
//  oj7atoi
//
//  Created by liuxt on 15/4/14.
//  Copyright (c) 2015年 liuxt. All rights reserved.
//

#include <iostream>
#include <string>
#include <string.h>
using namespace::std;
class Solution {
public:
    int myAtoi(string str) {
        int i = 0;
        int result = 0;
        int flag = 1;
        for (i = 0; i < str.length(); i++) {
            if(str[i] == ' '){
                continue;
            }
            else if (str[i] == '+' || str[i] == '-' ) {
                if (str[i] == '-') {
                    flag = -1;
                }
                i++;
                break;
            }
            else{
                break;
            }
        }
        for (; isdigit(str[i]); i++) {
            if (result > (INT_MAX  - str[i] + '0')/10) {
                if (flag == 1) {
                    return INT_MAX;
                }
                else{
                    return INT_MIN;
                }
            }
            result = 10 * result + str[i] - '0';
        }
        return result * flag;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    string  s = "-2147483648";
    Solution a;
    int c = a.myAtoi(s);
    cout<< c <<endl;
    return 0;
}
