#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    int mid = 0;
    while(left <= right){
        mid = (left + right)/2;
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid] < target){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return left;   
}

int main(){
    //test case
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    cout << searchInsert(nums, target) << endl;
}