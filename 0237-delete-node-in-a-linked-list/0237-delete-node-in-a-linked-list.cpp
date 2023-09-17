class Solution {
public:
    void deleteNode(ListNode* node) {
        if(node->next==NULL)delete node;
        swap(node->val ,node->next->val);
        auto temp = node->next;
        node->next = node->next->next;
        delete temp;
        
    }
};