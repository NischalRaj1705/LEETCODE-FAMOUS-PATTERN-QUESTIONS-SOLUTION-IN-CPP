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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL||k==1) {
            return head;
        }
        ListNode* res = NULL; ListNode* left = head;
        ListNode* right;
        ListNode* prevleft = NULL;
        while (true) {
            right = left;
            for (int i = 1; i < k; i++) {
                if (right == NULL)
                    break;
                right = right->next;
            }
            if (right) {
                ListNode* nextleft = right->next;
                ListNode* curr = left;
                ListNode* prev = NULL;
                int ekpairreverse=k;
                while (ekpairreverse--) {
                    ListNode* temp = curr->next;
                    curr->next = prev;
                    prev = curr;
                    curr = temp;
                }
                if (prevleft) {
                    prevleft->next = right;
                }
                prevleft = left;
                if (res == NULL) {
                    res = right;
                }
                left->next = nextleft;
                left = nextleft;
            } else {
                if (prevleft) {
                    prevleft->next = left;
                }
                // if (res == NULL) {
                //     res = left;
                // }
                break;
            }
        }
        return res;
    }
};