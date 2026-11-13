#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;



  struct ListNode {
     int val;
     ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *current1 = l1;
        ListNode* current2 = l2;
        
        ListNode* sum = new ListNode(0);

        ListNode* currentSum = sum;

        int carry = 0;
        int digit = 0;
        int total = 0;

        while(current1!=nullptr || current2!=nullptr || carry!=0){
            int val1 = (current1!=nullptr)?(current1->val):0;
            int val2 = (current2!=nullptr)?(current2->val):0;

            total = val1 + val2 + carry;

            carry = total/10;
            digit = total%10;

            currentSum->next = new ListNode(digit);
            currentSum = currentSum->next;
            if(current1!=nullptr){
            current1 = current1->next;
            }
            if(current2!=nullptr){
            current2 = current2->next;
            }
        }
        currentSum = sum;
       
        return currentSum->next;
    }
    
};