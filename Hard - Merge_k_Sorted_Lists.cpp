ListNode* merge2List(ListNode* a, ListNode* b)
{
    ListNode* result = nullptr;
   
    if (a == nullptr)
        return b;
    else if (b == nullptr)
        return a;
   
    if (a->val <= b->val) 
    {
        result = a;
        result->next = merge2List(a->next, b);
    }
    else 
    {
        result = b;
        result->next = merge2List(a, b->next);
    }
   
    return result;
}
ListNode* mergeKLists(vector<ListNode*>& lists) 
{
    int last = lists.size()-1;
    if(lists.size() == 0)
        return nullptr;
    while (last != 0) 
    {
      int i = 0, j = last;
      while (i < j) 
      {
          lists[i] = merge2List(lists[i], lists[j]);
          i++, j--;
  
          if (i >= j)
              last = j;
      }
  }
  return lists[0];
}
