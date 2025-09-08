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
    ListNode* removeElements(ListNode* head, int key) {
        // Step 1: Remove all occurrences from the beginning
        while (head != NULL && head->val == key) {
            ListNode* temp = head;
            head = head->next;
            delete temp; // free memory
        }

        // Step 2: Traverse the rest of the list
        ListNode* curr = head;
        while (curr != NULL && curr->next != NULL) {
            if (curr->next->val == key) {
                ListNode* temp = curr->next;
                curr->next = curr->next->next;
                delete temp; // free memory
            } else {
                curr = curr->next;
            }
        }

        return head; // don’t forget to return updated head
    }
};
