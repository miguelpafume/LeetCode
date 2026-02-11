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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head->next == nullptr) return head;

        ListNode *currentNode = head;

        while (currentNode->next != nullptr) {
            ListNode *newNode = new ListNode();
            ListNode *nextNode = currentNode->next;

            int min = (currentNode->val <= nextNode->val) ? currentNode->val : nextNode->val;

            for (int i = min; i > 0; i--) {
                if (currentNode->val % i == 0 && nextNode->val % i == 0) {
                    newNode->val = i;
                    break;
                }
            }

            currentNode->next = newNode;
            newNode->next = nextNode;
            currentNode = nextNode;
        }
        
        return head;
    }
};