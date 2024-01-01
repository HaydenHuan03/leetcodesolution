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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head){
            return head;
        }

        ListNode* current = head;

        while(current and current->next){
            if(current->next->val == current->val){
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp;
            }

            else{
                current = current->next;
            }
        }

        return head;
    }
};
