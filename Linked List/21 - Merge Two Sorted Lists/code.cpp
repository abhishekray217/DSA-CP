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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* result;
        ListNode* temp = new ListNode;
        result = temp;
        while(list1 && list2){
            if(list1->val < list2->val){
                temp->next = list1;
                list1 = list1->next;
                temp = temp->next;
            }else{
                temp->next = list2;
                list2 = list2->next;
                temp = temp->next;
            }
        }
        while(list1){
            temp->next = list1;
            list1 = list1->next;
            temp = temp->next;
        }while(list2){
            temp->next = list2;
            list2 = list2->next;
            temp = temp->next;
        }
        return result->next;
    }

    //Method to Print Linked List
    void printList(ListNode* head){
        ListNode* temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<"\n";
    }

    //Method to create Linked List from vector
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
    vector<int> list1 = {1,2,3,4,5,6,7};
    vector<int> list2 = {1,2,3,4};
    ListNode* head1 = s.createList(list1);
    ListNode* head2 = s.createList(list2);
    ListNode* head = s.mergeTwoLists(head1,head2);
    s.printList(head);
    return 1;
}