#include <bits/stdc++.h>
using namespace std;


//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* result = NULL;
        ListNode* prev = NULL;
        while(head){
            result = head;
            head = head->next;
            result->next = prev;
            prev = result;
            
        }
        return prev;
    }
    
    void printList(ListNode* head){
        while(head){
            cout<<head->val<<" ";
            head = head->next;
        }
        cout<<"\n";
    }
    ListNode* createList(vector<int>& list){
        ListNode* head,*current;
        current = new ListNode;
        head = current;
        for(int i = 0;i<list.size();i++){
            ListNode* temp = new ListNode(list[i]);
            current->next = temp;
            current = current->next;
        }
        return head->next;
    }
};

int main(){
    Solution s;
    vector<int> list = {1,2,3,4,5,6,7};
    ListNode* head = s.createList(list);
    s.printList(head);
    head = s.reverseList(head);
    s.printList(head);
    return 1;
}