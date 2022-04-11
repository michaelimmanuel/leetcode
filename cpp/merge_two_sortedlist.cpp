#include <bits/stdc++.h>
using namespace std;

typedef struct ListNode{
    int val;
    ListNode *next;
}ListNode;

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode *head = new ListNode();
    ListNode *p = head;
    while(list1 != NULL && list2 != NULL){
        if(list1->val < list2->val){
            p->next = list1;
            list1 = list1->next;
        }
        else{
            p->next = list2;
            list2 = list2->next;
        }
        p = p->next;
    }
    if(list1 != NULL){
        p->next = list1;
    }
    else{
        p->next = list2;
    }
    return head;
}

int main(){

    
}