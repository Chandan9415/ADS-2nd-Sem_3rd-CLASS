#include <bits/stdc++.h>
using namespace std ;
class que {
    int arr[20] ;
    int front ;
    int rear ;
    int size ;
public :
    que (int n) {
        size = n ;
        front = rear = -1 ;
    }

int isempty() {
    if (front == rear) {
        return 1 ;
    } 
    else
    return 0 ;
}
int isfull() {
    if((rear+1) % size == front) {
        return 1 ;
    }
    else
    return 0 ;
}
void insert_front(int x ) {
    if (isfull()) {
        cout << "Overflow not space to insert" << endl;
        return ;
    }
    if (front == -1 ) {
        front = rear = 0 ;
    } else if (front ==0) {
        front = size - 1;
    } else {
        front-- ;
    } 
    arr[front] = x ;
}
void display() {
    if (isempty()) {
        cout << "quq is empty" ;
        return;
    }
    int i=rear;
    while(1)
    {
        cout << arr[i] << " " ;
        i = (i+1) % size;
        if(i==front)
        {
            cout<<arr[i];
            break;
        }
    }
}
};
int main () {
    int n ;
    cout << "Enter the value of n " << endl;
    cin >> n ;
    que s(n) ;
    int value ;
    for (int i=0 ; i<n ; i++) {
        cin >> value ;
        s.insert_front(value) ;
    }
    s.display() ;

    return 0 ;
}