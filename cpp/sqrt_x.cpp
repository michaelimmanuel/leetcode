#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x) {
    if(x == 0) return 0;
    int left = 0;
    int right = x;
    int mid = 0;
    while(left <= right){
        mid = (left + right)/2;
        if(mid * mid == x){
            return mid;
        }
        else if(mid * mid < x){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return high;
}

int main(){
    //test case
    int x = 4;
    cout << mySqrt(x) << endl;
}