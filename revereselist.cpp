#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int x) {
        val = x;
        next = NULL;
    }
};

Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;

    while (curr != NULL) {
        Node* next = curr->next; 
        curr->next = prev;      
        prev = curr;             
        curr = next;             
    }

    return prev; 
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next -> next = new Node(4);
    head->next->next-> next -> next  = new Node(5);

    Node* newHead = reverseList(head);

    while (newHead != NULL) {
        cout << newHead->val << " ";
        newHead = newHead->next;
    }
}
