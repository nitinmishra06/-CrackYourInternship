/*Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.*/

//Solved in 0ms beating 100% coders and in 8.52 mb beating 7.93% coders

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 typedef struct ListNode * Node;
struct ListNode* middleNode(struct ListNode* head) {
    int i;
    struct ListNode* new=head;
    for(i=0;new!=NULL;i++)
    {
        new=new->next;


    }
    int k=(i/2)+1;
    for(i=1;i<k;i++)
    {
        head=head->next;
    }
    return head;
}