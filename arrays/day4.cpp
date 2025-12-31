// Rotate Array to the Right by K positions
#include <iostream>
using namespace std;

void rotateArray(int arr[], int n, int k) {
    k = k % n;  // Handle k > n
    
    // Step 1: Reverse entire array
    int start = 0, end = n - 1;
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
    // Step 2: Reverse first k elements
    start = 0;
    end = k - 1;
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
    // Step 3: Reverse remaining elements
    start = k;
    end = n - 1;
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 2;
    
    cout << "Original array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    rotateArray(arr, n, k);
    
    cout << "After rotating by " << k << ": ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}

// Output:
// Original array: 1 2 3 4 5
// After rotating by 2: 4 5 1 2 3
