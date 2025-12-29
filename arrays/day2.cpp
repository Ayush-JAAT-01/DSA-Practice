// Find Maximum Element in Array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 5, 40, 15};
    int max = arr[0];
    
    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    
    cout << "Maximum element: " << max << endl;
    return 0;
}
