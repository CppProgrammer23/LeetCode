ListNode* deleteDuplicates(ListNode* head) 
{
    if(head == nullptr || head->next == nullptr)
        return head;
    ListNode* current = head->next; 
    ListNode* prev = head;
    
    while(current)
    {
        if(current->val == prev->val)
        {
            current = current->next;
            prev->next = current;
            
            //prev = prev->next;
        }
        else
        {
            current = current->next;
            prev = prev->next;
        }
    }
    return head;
}
