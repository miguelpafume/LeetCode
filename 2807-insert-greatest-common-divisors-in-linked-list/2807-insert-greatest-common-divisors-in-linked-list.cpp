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

#include <numeric>

class Solution {
public:
    int stdGcd(int x, int y) {
        while (y != 0) {
            int z = x % y;
            x = y;
            y = z;
        }

        return x;
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head->next == nullptr) return head;

        ListNode *currentNode = head;

        while (currentNode->next != nullptr) {
            ListNode *newNode = new ListNode(stdGcd(currentNode->val, currentNode->next->val), currentNode->next);
            currentNode->next = newNode;
            currentNode = newNode->next;
        }
        
        return head;
    }
};