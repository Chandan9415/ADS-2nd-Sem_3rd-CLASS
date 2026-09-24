/*Problem Statement: Given an array of n integers, find the first greater element on the right side for each element; 
if no greater element exists, return -1. Use a stack to solve the problem efficiently in O(n) time.*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums;
    stack<int> st;

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = n - 1; i >= 0; i--) {
        while(!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        if(st.empty())
            nums.push_back(-1);
        else
            nums.push_back(st.top());

        st.push(arr[i]);
    }

    reverse(nums.begin(), nums.end());

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " -> " << nums[i] << endl;
    }

    return 0;
}