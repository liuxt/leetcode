#include <iostream>
using namespace std;
class Solution {
public:
    
double findMedianSortedArrays(int A[], int m, int B[], int n) {
        int data = (m + n);
        if(data % 2 == 1){
            return func(A, B, 0, m-1, 0, n-1, (data + 1)/2);
        }
        else{
            int res1 = func(A, B, 0, m-1, 0, n-1, data/2);
            int res2 = func(A, B, 0, m-1, 0, n-1, data/2 + 1);
            return (res1 + res2)/2.0;
        }
    }
    int func(int A[], int B[], int i, int i2, int j, int j2, int k)//func返回A,B序列中topk大的数，查询范围为A[i~i2],B[j~j2]
    {
        int m = i2 - i + 1;
        int n = j2 - j + 1;//length of array A and array B
        if(m > n) return func(B, A, j, j2, i, i2, k);//keep length of A shorter that of B
        if(m == 0) return B[j + k - 1];//if array A is empty
        if(k == 1) return min(A[i], B[j]);
        int apos = min(k/2, m);//number of the elements to be tested
        int bpos = k - apos;//in case that apos is not enough
        int a = A[i + apos - 1];
        int b = B[j + bpos - 1];
        if(a < b){
            return func(A, B, i + apos, i2, j, j + bpos - 1, k - apos);
        }
        else if(a == b){
            return min(a, b);
        }
        else{
            return func(A, B, i, i + apos - 1, j + bpos, j2, k - bpos);
        }
    }
};
int main(){
    int a[1] = {100000};
    int b[1] = {100001};
    Solution c;
    double d = c.findMedianSortedArrays(a, 1, b, 1);
    cout << d <<endl;
}