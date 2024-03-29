#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* newHead = head;
        unordered_map<int, ListNode*> prefix;
        int sum = 0;
        bool flag = false;
        while (head) {
            sum += head->val;
            if (sum == 0) {
                newHead = head->next;
                flag = true;
                break;
            } else if (prefix.find(sum) == prefix.end()) {
                prefix[sum] = head;
            } else {
                prefix[sum]->next = head->next;
                flag = true;
            }
            head = head->next;
        }
        if (flag) {
            return removeZeroSumSublists(newHead);
        }
        return newHead;
    }
};

int main()
{

  return 0;
}
