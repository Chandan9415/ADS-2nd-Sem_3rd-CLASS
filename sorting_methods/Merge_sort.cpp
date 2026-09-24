#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> v1(n1);
    vector<int> v2(n2);

    for (int i = 0; i < n1; i++)
        v1[i] = arr[left + i];

    for (int i = 0; i < n2; i++)
        v2[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (v1[i] <= v2[j])
            arr[k++] = v1[i++];
        else
            arr[k++] = v2[j++];
    }

    while (i < n1)
        arr[k++] = v1[i++];

    while (j < n2)
        arr[k++] = v2[j++];
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    merge(arr, left, mid, right);
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}