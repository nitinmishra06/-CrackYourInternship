/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
   
    if(!head){
        return NULL;
    }
    else{
         struct ListNode* new=head;
   
    for(;new->next!=NULL;){
        if(new->val==new->next->val){
            new->next=new->next->next;
           
        }
        else{
        
            new=new->next;
        }
    }
    return head;
    }
    
}