//
//  main.cpp
//  oj8
//
//  Created by liuxt on 15/4/14.
//  Copyright (c) 2015年 liuxt. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int left = pow(10,floor(log10(x)));
        int right = 1;
        int dleft,dright;
        while (left >= right) {
            dleft = (x / left)%10;
            dright = (x / right)%10;
            if (dleft != dright) {
                return false;
            }
            left = left / 10;
            right = right * 10;
        }
        return true;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    Solution  a;
    int x = -12321;
    cout << a.isPalindrome(x) <<endl;
    return 0;
}
