/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* new1=l1;
    struct ListNode* new2=l2;
    struct ListNode* prev;
    int carry=0;
    for(;new1!=NULL||new2!=NULL;){
  if(new1!=NULL&&new2!=NULL){
        int data=new1->val+new2->val+carry;
        new1->val=data%10;
        carry=data/10;
        prev=new1;
        new1=new1->next;
        new2=new2->next;
  }
  else if(new2==NULL){
    int data=new1->val+carry;
    new1->val=data%10;
        carry=data/10;
        prev=new1;
        new1=new1->next;
  }
  else if(new1==NULL){
    prev->next=new2;
    new1=prev->next;
    new2=NULL;
  }

    

    } 
    if(carry>0){
        struct ListNode* new=(struct ListNode*)malloc(1*sizeof(struct ListNode));
        new->val=carry;
        new->next=NULL;
        prev->next=new;
    }
    return l1; 

}