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

        // Check if head is null
        if(head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* curr = head;

        while(curr != nullptr && curr->next != nullptr) {
            // Check if current val equals to next val
            if(curr->val == curr->next->val) {
                ListNode* temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
            // If doesnt match
            } else {
                curr = curr->next;
            }
        }

        return head;
    }
};