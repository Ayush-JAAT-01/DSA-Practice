// Remove Duplicates from Sorted Array
#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    if(n == 0) return 0;
    
    int uniqueIndex = 0;
    
    // Iterate through array
    for(int i = 1; i < n; i++) {
        // If current element is different from previous
        if(arr[i] != arr[uniqueIndex]) {
            uniqueIndex++;
            arr[uniqueIndex] = arr[i];
        }
    }
    
    // Return count of unique elements
    return uniqueIndex + 1;
}

int main() {
    int arr[] = {1, 1, 2, 2, 2, 3, 4, 4, 5};
    int n = 9;
    
    cout << "Original array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int k = removeDuplicates(arr, n);
    
    cout << "Array after removing duplicates: ";
    for(int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "New length: " << k << endl;
    
    return 0;
}

// Output:
// Original array: 1 1 2 2 2 3 4 4 5
// Array after removing duplicates: 1 2 3 4 5
// New length: 5
