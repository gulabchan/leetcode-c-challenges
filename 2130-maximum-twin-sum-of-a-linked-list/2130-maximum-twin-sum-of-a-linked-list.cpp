class Solution {
public:
    int mx=0;
    ListNode* s=0;
    void im_god(ListNode* t){
        if(t){
            im_god(t->next);
            mx=max(mx,t->val+s->val);
            s=s->next;
        }
    }
    int pairSum(ListNode* head) {
        s=head;
        im_god(head);
        return mx;
    }
};