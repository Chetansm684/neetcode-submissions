class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        vector<int> values;

        while (list1 != nullptr) {
            values.push_back(list1->val);
            list1 = list1->next;
        }

        while (list2 != nullptr) {
            values.push_back(list2->val);
            list2 = list2->next;
        }

        sort(values.begin(), values.end());

        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        for (int value : values) {
            curr->next = new ListNode(value);
            curr = curr->next;
        }

        return dummy->next;
    }
};