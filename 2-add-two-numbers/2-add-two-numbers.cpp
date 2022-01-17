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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode();
        ListNode* carry = result;
        vector<ListNode*> havetofree(3);
        bool check1 = true;
        bool check2 = true;
        while(check1 || check2)
        {
            carry->next = new ListNode();
            auto value = l1->val + l2->val + carry->val;
            carry->val = value%10;
            carry->next->val = value/10;
            if(l1 -> next == nullptr){
                havetofree[0] = l1;
                l1->next = new ListNode();
                l1->next->next = l1->next;
                
                check1 = false;
                
            }
            if(l2->next == nullptr){
                havetofree[1] = l2;
                l2->next = new ListNode();
                l2->next->next = l2->next;
                check2 = false;
            }
            havetofree[2] = carry;
            carry = carry->next;
            l2 = l2->next;
            l1 = l1->next;
        }
        for(auto node : havetofree){
            if(node->next->val == 0){
                delete(node->next);
                node->next = nullptr;
            }
        }
        
        
        return result;
    }
};