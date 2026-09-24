#include <bits/stdc++.h>
using namespace std ;
class Node {
    public :
    int data;
    Node *next ;
    Node (int x ) {
        data = x ;
        next = nullptr ;
    }
};
class Stack {
    Node *top ;
    public :
    Stack () {
        top = nullptr ;
    }
    void pop () {
        if (top == nullptr) {
            cout << "Stack is empty " << endl;
            return ;
        } 
        cout << top -> data  ;
        Node *temp = top ;
        top = top -> next ;
        delete temp ;
    } 
    void push (int x ) {
        Node *newnode = new Node (x) ;
        newnode ->next = top ;
        top = newnode ;
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
    cout << "Display the pop value : " ;
    s.pop() ;

    return 0 ;
}