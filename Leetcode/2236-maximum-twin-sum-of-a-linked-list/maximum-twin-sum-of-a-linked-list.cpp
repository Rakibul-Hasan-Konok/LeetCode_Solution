/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> result;
        while(head!=nullptr){
            result.push_back(head->val);
            head=head->next;
        }
        int i=0;
        int j=result.size()-1;
        int sum=INT_MIN;
        while(i<j){
            sum=max(sum,result[i]+result[j]);
            i++;
            j--;
        }
        return sum;
    }
};