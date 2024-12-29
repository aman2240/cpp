#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "enter size of array";
    cin >> n;
    cout<<"enter elements";
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int key;
    cout << "enter element to search : ";
    cin >> key;
    
    cout << linear_search(a, n, key);

    return 0;
}
