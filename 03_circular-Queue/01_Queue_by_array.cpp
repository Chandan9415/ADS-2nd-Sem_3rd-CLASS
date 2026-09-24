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
    if (front == -1 ) {
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
void enque(int x ) {
    if (isfull()) {
        return ;
    }
    if (isempty()) {
        front = 0 ;
    }
        rear = (rear+1) % size ;
        arr[rear] = x ;
}
void deque() {
    if (isempty()) {
        cout << "Nothing to delete" << endl;

        return;
    }
    if (front == rear) {
        front = rear = -1;
    }
    else {
        front = (front + 1) % size;
    }
}
// void display() {
//     if (isempty()) {
//         cout << "quq is empty" ;
//         return;
//     }
//     int i=front;
//     while(1)
//     {
//         cout << arr[i] << " " ;
//         i = (i+1) % size;
//         if(i==rear)
//         {
//             cout<<arr[i];
//             break;
//         }

//     }
// }
void display() {
    if (isempty()) {
        cout << "quq is empty" ;
        return;
    }
    int i=front;
    while(1)
    {
        cout << arr[i] << " " ;
        i = (i+1) % size;
        if(i==rear)
        {
            cout<<arr[i];
            break;
        }

    }
}
};
int main() {
    int n ;
    cout << "Enter the value of n : " ;
    cin >> n ;
    que s(n) ;
    int value ;
    for (int i=0 ; i<n ; i++) {
        cin >> value ;
        s.enque(value) ;
    }
    cout << "The Queue is : " ;
    s.display() ;

}