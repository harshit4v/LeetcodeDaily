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
ListNode* reverseList(ListNode* head) {
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
    ListNode* doubleIt(ListNode* head) {
        head=reverseList(head);
        ListNode *temp=head;
        ListNode *dhead=new ListNode(-1);
        ListNode *curr=dhead;
        int carry=0;
        int mul=1;
        while(temp!=NULL){
            if(temp) mul=(temp->val)*2+carry;
            ListNode *newNode = new ListNode(mul%10);
            curr->next=newNode;
            curr=curr->next;
            carry=mul/10;
            temp=temp->next;
        }
        if(carry){
            ListNode *newNode=new ListNode(carry);
            curr->next=newNode;
        }
        return reverseList((dhead->next));
    }
};
