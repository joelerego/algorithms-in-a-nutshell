#include <iostream>
using namespace std;

// There are two strategies we could implement for this
// algorithm. Both algorithms have similar time complexities
// hence the choice between them is arbitrary. The first 
// strategy is recursively taking the minimum element and 
// add it to the beginning of the sorted list. The second 
// is recursively taking the maximum element and add it to
// the end of the list, hence building a sorted lists backwards.
//
void selection_sort(int array[], int size) {
   
    int i = 0;    
    while ( i < size ) {
        // We have to find the minimum element of the array 
        // starting from i. The array is sorted until the 
        // ith position.
        //
        int min_index = i;
        for (int j = i; j < size; j++) {
            if (array[min_index] > array[j]) {
                min_index = j;
            }
        }
                
        // Now that we found the minimum element, we swap it
        // with the ith position.
        //
        swap(array[i], array[min_index]);
        
        i++;
    }
}

int main() {
    int array[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(array) / sizeof(int);
    
    // Before
    for (auto i : array) cout << i << " ";
    cout << endl;
    
    selection_sort(array, size);

    // After
    for (auto i : array) cout << i << " ";
    cout << endl;
}
