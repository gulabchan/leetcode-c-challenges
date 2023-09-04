


class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL)return false;
        ListNode *slw,*fst;
        slw=fst=head;
        
        while(fst!=NULL && fst->next!=NULL)
        {
            slw=slw->next;
            fst=fst->next->next;
            
            if(fst==slw)return true;
            
        }
        return false;
        
    }
};