class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) return nullptr; 
        int count = 0;
        ListNode* curr = head;
        while (curr) {
            curr = curr->next;
            count++;
        }

        int mid = count / 2;
        curr = head;
        int idx = 0;
        ListNode* prev = nullptr;
        while (idx < mid) {
            prev = curr;
            curr = curr->next;
            idx++;
        }
        if (prev && curr)
            prev->next = curr->next;

        return head;
    }
};
