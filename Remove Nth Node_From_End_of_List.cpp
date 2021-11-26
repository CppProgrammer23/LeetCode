ListNode* removeNthFromEnd(ListNode* head, int n) 
{
    if(head == nullptr)
        return head;
    int size = 0;
    ListNode* current = head;
    while(current)
    {
        size++;
        current = current->next;
    }
    if(size == 1)
          return nullptr; //this makes the program as faster if we have only one element
    int count = size - 1 - n;
    ListNode* result = head;
    if(count<0)
    {
        head = head->next;
        return head;
    }
    
    while(count--)
        head = head->next;
    current = head;
    if(current->next == nullptr)
        return current;
    for(auto i = 0; i<2; i++)
        current = current->next;
    head->next = current;
    return result;
}
