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
ListNode *reverseList(ListNode *head){
    ListNode *temp=head;
    ListNode *prev=NULL;
    while(temp!=NULL){
        ListNode *front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
}
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        // if(!head||left==right)return head;
        // ListNode *dummy=new ListNode(-1);
        // dummy->next=head;
        // ListNode *prev=dummy;
        // for(int i=1;i<left;i++){
        //     prev=prev->next;
        // }
        // ListNode *subHead=prev->next;
        // ListNode *subtail=subHead;
        // for(int i=left;i<right;i++){
        //     subtail=subtail->next;
        // }
        // ListNode *after = subtail->next;
        // subtail->next=NULL;
        // ListNode *newHead=reverseList(subHead);
        // prev->next=newHead;
        // subHead->next=after;
        // head=dummy->next;
        // delete(dummy);
        // return head;
        if (!head || left == right) return head;

        // Dummy node to handle edge cases
        ListNode *dummy=new ListNode(0);
        dummy->next = head;

        // Step 1: move prev to node before 'left'
        ListNode* prev = dummy;
        for (int i = 1; i < left; i++) {
            prev = prev->next;
        }

        // Step 2: reverse the sublist
        ListNode* curr = prev->next;
        for (int i = 0; i < right - left; i++) {
            ListNode* nextNode = curr->next;
            curr->next = nextNode->next;
            nextNode->next = prev->next;
            prev->next = nextNode;
        }

        return dummy->next;
    }
};
