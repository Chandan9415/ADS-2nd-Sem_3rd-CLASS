#include <bits/stdc++.h>
using namespace std ;
class Node {
    public :
    int data;
    Node *next ;
    Node (int value) {
        data = value ;
        next = nullptr ;
    }
} ;
class que {
    Node * front ;
    Node *rear ;
public :
    que () {
        front = rear = nullptr ;
    }
int isempty() {
    if(front == nullptr) {
        return 1 ;
    } 
    return 0 ;
}

void enque(int x) {
    Node *newnode = new Node(x) ;
    if (isempty()) {
        front = rear = newnode ;
    } else {
    rear -> next = newnode ;
    rear = newnode ;
    }
}

void deque() {
    if(isempty()){
        cout << "Nothing to delete " << endl;
        return ;
    }
    cout << "deleted elements : " << front -> data << endl;
    Node *del = front ; 
    front = front ->next ;
    delete del ;
    if (front == nullptr) {
        rear =nullptr ;
    }
} 

void display() {
    Node * temp = front ;
    cout << "The Queque is : " ;
    while(temp != nullptr) {
        cout << temp ->data << "->" ;
        temp = temp ->next ;
    }
    cout << "NULL" << endl;
}
};
int main () {
    int n ;
    cout << "Enter the value of n : " ;
    cin >> n ;
    que s ;
    int value ;
    for (int i=0 ; i<n ; i++) {
        cin >> value ;
        s.enque(value) ;
    }
    s.display();
    s.deque() ;

    return 0 ;
}