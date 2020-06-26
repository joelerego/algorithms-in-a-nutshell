#include <iostream>
using namespace std;

void insertion_sort(int array[], int size) {
    
    // We take the element at index 1, and compare
    // it with every other element before it. After
    // making necessary swaps, we go to the next index.
    // Hence, the iterator starts at index 1.
    //
    int i = 1;
    
    while ( i < size ) {
        // We compare every element before array[i] with
        // array[i]. If we encounter a position where it's
        // lesser, than the entire section is moved forward.
        // This reduces unncessary swaps.
        //
        int j = i - 1;
    
        while (j > 0) {
            if (array[j] > array[i]) {
                j--;
            }
            else {
                break;
            }
        }
        
        // At this point, we have got the position where 
        // array[i] should be present at. All other elements
        // until array[j] should be bumped up by one position.
        //
        int temp = array[i];
        for (int k = i; k >= j and k > 0; --k) {
            array[k] = array[k - 1];
        }
        array[j] = temp;
        
        cout << i << ": ";
        for (int k = 0; k < size; k++) cout << array[k] << " ";
        cout << endl;
        i++;
    }
}

int main() {
    int array[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(array) / sizeof(int);
    
    for (auto i : array) cout << i << " ";
    cout << endl;
    
    insertion_sort(array, size);

    for (auto i : array) cout << i << endl;
}
