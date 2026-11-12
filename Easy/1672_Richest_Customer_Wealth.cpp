#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int maxWealth = 0;
       
        for (int i = 0; i< accounts.size(); i++ ){
             int justForNow = 0;
            for( int j = 0; j<accounts[0].size(); j++){
                
                justForNow =justForNow + accounts[i][j];
            }
            maxWealth = max(maxWealth,justForNow);
            justForNow = 0;
        }
        return maxWealth;
    }
};