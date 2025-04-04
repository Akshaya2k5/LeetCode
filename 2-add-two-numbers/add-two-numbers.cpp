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
    ListNode* ReverseLL(ListNode* head)
    {
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next=NULL;
        while(curr!=NULL) {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* p1=l1;
        ListNode* p2=l2;
        ListNode* sum=new ListNode(-1);
        ListNode* curr=sum;
        int c=0;
        while(p1!=NULL || p2!=NULL || c!=0) 
        {
            int s=c;
            if(p1!=NULL) 
            {
                s+=p1->val;
                p1=p1->next;
            }
            if(p2!=NULL) 
            {
                s+=p2->val;
                p2=p2->next;
            }
            c=s/10;
            s=s%10;
            curr->next=new ListNode(s);
            curr=curr->next;
        }
        //ListNode* res=ReverseLL(sum->next); 
        //delete sum;
        return sum->next;
    }
};