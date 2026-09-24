#include <bits/stdc++.h>
using namespace std ;
class Node {
    public:
    int data ;
    Node*next ;
    Node (int x ) {
        data = x ;
        next = nullptr ;
    }
} ;
class Stack {
    Node *top;
    public:
    Stack () {
        top = nullptr ;
    }
void push(int x ) {
    Node* newnode = new Node(x) ;
    newnode->next = top ;
    top = newnode ;
}
void display () {
    if (top == nullptr) {
        cout << "Stack is empty " << endl;
    } 
    Node *temp = top ;
    cout << "Stack is display : " ;
    while (temp != nullptr) {
        cout << temp ->data << " " ;
        temp = temp ->next ;
    }
}
};
int main () {
    Stack s ;
    int n ;
    cout << "Enter the value of n : " ;
    cin >> n ;
    int x ;
    for (int i=0 ; i<n ; i++) {
        cin >> x ;
        s.push(x) ;
    }
    s.display () ;
    return 0 ;
}