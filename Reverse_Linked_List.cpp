ListNode* reverseList(ListNode* head) 
{
    ListNode* prev = head, *current=nullptr;
    while(head)
    {
        head=head->next;
        prev->next=current;
        current=prev;
        prev=head;
    }
    return current;
}
