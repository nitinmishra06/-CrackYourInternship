/*Given the head of a singly linked list, reverse the list, and return the reversed list.*/

//runtime 0ms beats 100% memory 10.77Mb beats 5.18%


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 typedef struct ListNode* Node;
struct ListNode* reverseList(struct ListNode* head) {
      Node prev = NULL;
    Node current = head;
    Node nextNode;

    while (current != NULL)
    {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    return prev;
    
}