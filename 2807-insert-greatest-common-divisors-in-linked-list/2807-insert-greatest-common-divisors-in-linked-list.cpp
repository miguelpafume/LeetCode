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
    int myGcd (const int &x, const int &y) {
        if (!x || !y) return 0;
                
        int min = (x < y) ? x : y;

        for (int i = min; i > 0; i--) {
            if (x % i == 0 && y % i == 0) return i;
        }

        return 1;
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head->next == nullptr) return head;

        ListNode *currentNode = head;

        while (currentNode->next != nullptr) {
            ListNode *newNode = new ListNode(myGcd(currentNode->val, currentNode->next->val), currentNode->next);
            currentNode->next = newNode;
            currentNode = newNode->next;
        }
        
        return head;
    }
};