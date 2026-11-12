#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int left = 0;
       int right = left;
       
       while(right < nums.size()){
            if(nums[right] == 0){
            right++;
            }

            else{
            nums[left] = nums[right];
            right++;
            left++;
            }

       }

       while(left<nums.size()){
        nums[left] = 0;
        left++;
       }
    }
};