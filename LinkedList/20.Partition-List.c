/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* partition(struct ListNode* head, int x) {
  struct ListNode dummy1;
    struct ListNode dummy2;
    struct ListNode* head1 = &dummy1;
    struct ListNode* head2 = &dummy2;
    
    dummy1.next = NULL;
    dummy2.next = NULL;
        struct ListNode* track = head;

 while (track != NULL) {
        if (track->val < x) {
            head1->next = track;
            head1 = head1->next;
        } else {
            head2->next = track;
            head2 = head2->next;
        }
        track = track->next;
    }
  head2->next = NULL;
    head1->next = dummy2.next;

return dummy1.next;
    
}