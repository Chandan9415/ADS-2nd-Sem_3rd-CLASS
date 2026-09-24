#include <bits/stdc++.h>
using namespace std;
class que {
    int arr[20];
    int front;
    int rear;
    int size;
public:
    que(int n) {
        size = n;
        front = rear = -1;
    }
    int isfull() {
        if (rear == size - 1) {
            cout << "Queue is overflow" << endl;
            return 1;
        }
        return 0;
    }
    int isempty() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return 1;
        }
        return 0;
    }
    void enque(int x) {
        if (isfull()) {
            return;
        }
        if (front == -1) {
            front = 0;
        }
        rear++;
        arr[rear] = x;
    }
    void deque() {
        if (isempty()) {
            return;
        }
        cout << "Deleted element: " << arr[front] << endl;

        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }
    void display() {
        if (isempty()) {
            return;
        }
        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " -> ";
        }
        cout << "NULL" << endl;
    }
};
int main() {
    int n;
    cout << "Enter the size of queue: ";
    cin >> n;
    if (n <= 0 || n > 20) {
        cout << "Invalid size. Enter size between 1 and 20." << endl;
        return 0;
    }
    que obj(n);
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        obj.enque(value);
    }
    cout << "\nBefore deletion:" << endl;
    obj.display();
    cout << "\nAfter deletion:" << endl;
    obj.deque();
    obj.display();
    return 0;
}