/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == nullptr) 
            return nullptr;
        vector<ListNode*> visited;
        ListNode* curnode = head;
        while(curnode->next != nullptr)
        {
            auto target = find(visited.begin(),visited.end(),curnode) ;
            if( target!= visited.end()){
                return *target;
            }
            visited.push_back(curnode);
            curnode = curnode -> next;
        }
        return nullptr;
    }
};