class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int size=0;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            size++;
            temp=temp->next;
        }
        size--;
        int ans=0;
        while(head!= NULL)
        {
            ans += (head->val * pow(2,size));
            head=head->next;
            size--;
        }
        return ans;
    }
};
