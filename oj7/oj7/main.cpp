//
//  main.cpp
//  oj7
//
//  Created by liuxt on 15/4/8.
//  Copyright (c) 2015年 liuxt. All rights reserved.
//

#include <iostream>
using namespace std;
class Solution{
public:
    int reverse(int x){
        int flag = 1;
        int result = 0;
        if (x == INT_MIN) {
            return 0;
        }
        if(x < 0) {
            flag = -1;
            x = -x;
        }
        while (x != 0) {
            if ((INT32_MAX - x%10) / 10 < result) {
                return 0;
            }
            result = result * 10 + x%10;
            x = x / 10;
        }
        return result * flag;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    Solution s;
    
    std::cout << s.reverse(1534236469)<<endl;
    cout << INT32_MAX<<endl;//964632435
    return 0;
}
