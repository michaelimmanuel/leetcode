#include <bits/stdc++.h>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> map; 
        vector<int> result;
        for(int i = 0; i < nums.size(); i++) {
            if(map.find(target - nums[i]) != map.end()) {
                result.push_back(map[target - nums[i]]);
                result.push_back(i);
                return result;
            }
            map[nums[i]] = i;
        }
        return result;
}

int main(){
    //test case
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

}