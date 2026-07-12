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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == NULL) {
            return NULL;
        }
        if (left == right) {
            return head;
        }
        ListNode* before = NULL;
        ListNode* temp = head;
        int position = 1;
            while (position < left) {
                before = temp;
                temp = temp->next;
                position++;
                
            }
            int times = right - left + 1;
            ListNode* curr = temp;
            ListNode* prev = NULL;
            while (times--) {
                ListNode* temp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = temp;
            }
        
        if (before == NULL) {
            head->next = curr;
            head = prev;
        } else {
            before->next = prev;
            temp->next = curr;
        }
        return head;
    }
};