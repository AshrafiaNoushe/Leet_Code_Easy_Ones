#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int val,Node *nxt=nullptr,Node*prv=nullptr)
    {
        data = val;
        next = nxt;
        prev = prv;
    }
};
 Node* reverseList(Node* head) {
    Node *current = head;
    Node *temp = nullptr;
        while(current != nullptr){
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;
            current = current->prev;
        }
        if(temp!=nullptr){
            head = temp->prev;
        }
    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    cout<<"Before reverse: "<<endl;
    printList(head);
    head = reverseList(head);
    cout<<"After reversing: "<<endl;
    printList(head);
    return 0;
}