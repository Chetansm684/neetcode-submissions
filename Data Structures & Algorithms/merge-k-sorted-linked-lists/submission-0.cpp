/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> values;

        for(ListNode* head : lists){
            while(head != nullptr){
                values.push_back(head->val);
                head = head->next;
            }
        }

        sort(values.begin(),values.end());

        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        for(int value: values){
            curr->next = new ListNode(value);
            curr = curr->next;
        }

        return dummy->next;
    }
};
