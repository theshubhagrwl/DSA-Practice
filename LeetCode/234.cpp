class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        ListNode *temp = head;

        vector<int> a;
        vector<int> b;

        while (temp != NULL)
        {
            a.push_back(temp->val);
            temp = temp->next;
        }

        for (auto it : a)
        {
            b.push_back(it);
        }

        reverse(a.begin(), a.end());

        if (a == b)
            return true;
        else
            return false;
    }
};