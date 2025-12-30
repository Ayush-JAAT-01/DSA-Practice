// Find Second Largest Element in Array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 5, 40, 15};
    int n = 5;
    
    // Find largest and second largest
    int largest = -1, secondLargest = -1;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    
    cout << "Largest: " << largest << endl;
    cout << "Second Largest: " << secondLargest << endl;
    
    return 0;
}

// Output:
// Largest: 40
// Second Largest: 20
