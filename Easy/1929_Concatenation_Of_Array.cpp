#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
       
        
        vector<int> p;

        for (int i = 0; i< nums.size() ; i++){
            p.push_back(nums[i]);
        }
        for (int i = 0; i< nums.size() ; i++){
            p.push_back(nums[i]);
        }
        return p;
    }
};