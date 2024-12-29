#include <iostream>
using namespace std;

int main() {
    int arr[8] = {10, 30, 41, 80, 90, 92, 93, 99};
    int start = 0;
    int end = 7;
    int key;
    
    cout << "Enter element to search: ";
    cin >> key;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == key) {
            cout << "Element found at index " << mid;
            return 0;
        } else if (arr[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    
    cout << "Element not found.";
    return 0;
}
