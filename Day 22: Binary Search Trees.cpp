#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int d) : data(d), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int data){
    if(root == nullptr){
        return new Node(data);
    }
    if(data <= root->data){
        root->left = insert(root->left, data);
    }
    else{
        root->right = insert(root->right, data);
    }
    return root;
}


int getHeight(Node* root){
    if(root == NULL)
        return -1;
    else{
        return 1 + max(getHeight(root->left), getHeight(root->right));
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    Node* root = nullptr;
    for (int i = 0; i < n; i++){
        int data;
        cin >> data;
        root = insert(root, data);
    }
    int height = getHeight(root);
    cout<<height<<endl;
    return 0;
}
