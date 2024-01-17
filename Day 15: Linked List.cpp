#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

Node* insert(Node* head, int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
    return head;
}

void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int T;
    cin >> T;
    Node* head = nullptr;

    for (int i = 0; i < T; i++) {
        int data;
        cin >> data;
        head = insert(head, data);
    }

    printLinkedList(head);
    return 0;
}
