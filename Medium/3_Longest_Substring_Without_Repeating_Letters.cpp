#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;



class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hash(256,-1);
       int i = 0; int j = 0;
       int maxLen = 0;

       int n = s.size();

       while(i<n&&j<n){
            if(hash[s[j]]!=-1){ //tsekarw an uparxei genika to gramma
                if(hash[s[j]]>= i){//tsekarw an to gramma einai jana mesa sthn lejh pou koitaw 
                    i = hash[s[j]]+1;//edw allazw to i wste na mhn koitame ta idia letters          
                
                }
               
        }
         hash[s[j]] = j; // pleon to neo gramma pairnei thn nea tou thesh 
                maxLen = max(maxLen,j-i+1);
                j++;
        
 }
    return maxLen;
    }
};