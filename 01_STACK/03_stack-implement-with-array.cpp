#include<bits/stdc++.h>
using namespace std ;
class Stack {
    int arr[20] ;
    int top ;
    int size ;
    public :
    Stack (int n) {
        top = -1 ;
        size = n ;
    }
    void push(int data) {
        if (top == size-1) {
            cout << "Overflow stack " << endl;
            return ;
        }
        top++;
        arr[top] = data ;
    }
    void pop() {
        if (top == -1) {
            cout << "the stack is empty Underflow" << endl;
            return ;
        }
        cout << arr[top] << endl;
        top-- ;
    }
    void display() {
        int temp = top ;
        while (temp != -1) {
            cout << arr[temp] << " ";
            temp-- ;
        }
    }
} ;
int main () {
    int n ;
    cout << "Enter the number of elements put : " ;
    cin >> n ;
    int value ;
    Stack st (n) ;
    for (int i=0 ; i<n ; i++) {
        cin >> value ;
        st.push(value) ;
    }
    cout << "This is deleted element : " ;
    st.pop() ;
    // st.push(40) ;
    st.display() ;
    return 0 ; 
}