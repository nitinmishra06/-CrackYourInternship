/*Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.

Return the decimal value of the number in the linked list.

The most significant bit is at the head of the linked list.*/

//Runtime 0ms beating 100%coders adn memory use 8.20mb i.e beating 7.87% coders

int getDecimalValue(struct ListNode* head) {
    struct ListNode* new=head;
    int i;
    for(i=0;new!=NULL;i++)
    {
        new=new->next;
    }
    int num=0;
    i--;
    for(;head!=NULL;)
    {
        num=num+(head->val*pow(2,i));
        i--;
        head=head->next;
    }
    return num;
}