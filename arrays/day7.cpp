// Find Intersection of Two Arrays
#include <iostream>
#include <unordered_set>
using namespace std;

void findIntersection(int arr1[], int n1, int arr2[], int n2) {
    // Create a set from first array
    unordered_set<int> set1(arr1, arr1 + n1);
    unordered_set<int> intersection;
    
    // Check if elements of arr2 exist in set1
    for(int i = 0; i < n2; i++) {
        if(set1.find(arr2[i]) != set1.end()) {
            intersection.insert(arr2[i]);
        }
    }
    
    // Print intersection
    cout << "Intersection: ";
    for(int num : intersection) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 2, 1};
    int arr2[] = {2, 2};
    int n1 = 4, n2 = 2;
    
    cout << "Array 1: ";
    for(int i = 0; i < n1; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    
    cout << "Array 2: ";
    for(int i = 0; i < n2; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    
    findIntersection(arr1, n1, arr2, n2);
    
    return 0;
}

// Output:
// Array 1: 1 2 2 1
// Array 2: 2 2
// Intersection: 2
