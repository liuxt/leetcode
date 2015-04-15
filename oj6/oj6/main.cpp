//
//  main.cpp
//  oj6
//
//  Created by liuxt on 15/4/2.
//  Copyright (c) 2015年 liuxt. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string convert(string s, int nRows) {
        string res = new string;
        for (int i = 0; i < nRows; i++) {
            int size = 2 * nRows - 2;
            for (int j = i; j < s.size(); j += size) {
                res.push_back((s.at(j)));
                if (i != 0 && i != nRows - 1 && j + size - 2 * i < s.size()) {
                    res.push_back((s[j + size - 2 * i]));
                }
            }
        }
        return res;
    }
};
int main(){
    Solution    a;
    string in = "PAYPALISHIRING";
    int n = 3;
    string res = a.convert(in, n);
    cout << res <<endl;
}