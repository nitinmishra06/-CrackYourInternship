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
    struct ListNode dummy;
    dummy.next = head;
    struct ListNode* prev = &dummy;
    struct ListNode* new = head;

    for (; new != NULL; new = new->next) {
        bool isDuplicate = false;

        while (new->next != NULL && new->val == new->next->val) {
            isDuplicate = true;
            new = new->next;
        }

        if (isDuplicate) {
            prev->next = new->next;
        } else {
            prev = prev->next;
        }
    }

    return dummy.next;
    
}