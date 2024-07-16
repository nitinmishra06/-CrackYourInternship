/*Given the head of a singly linked list, return true if it is a 
palindrome
 or false otherwise.

 */


//Runtime 124 ms beating 22.46% coders and Memory 44.48 beats 24.74%;




/**
 * Definition for singly-linked list.
 * struct ListNode{
 *     int val;
 *     struct ListNode* next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    bool status=true;
    struct ListNode* new=head;
    struct ListNode* track=head;
    int i;
    for( i=0;new->next!=NULL&&new->next->next!= NULL;i++)
    {
        track=track->next;
        new=new->next->next;
    }
    struct ListNode* halfNode=track->next;
        struct ListNode* prev = NULL;
    struct ListNode* current = halfNode;
    struct ListNode* nextNode;

    while (current != NULL)
    {
        nextNode= current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }
    track=prev;

    for(;track!=NULL;)
    {
        if(head->val!=track->val){
            status=false;
            break;
        }
        head=head->next;
        track=track->next;
    }
    return status;
    
}