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
        map<ListNode*,bool> visited;
        ListNode* curnode = head;
        while(curnode->next != nullptr)
        {
            auto target = visited.find(curnode);
            if( ( target ) != visited.end()){
                return curnode;
            }
            visited[curnode] = true;
            curnode = curnode -> next;
        }
        return nullptr;
    }
};