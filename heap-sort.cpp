#include <iostream>
using namespace std;

// The following functions are just inline functions
// because they just return the index of the left child,
// the right child and the parent respectively.
//
inline int leftindex(int i) {
    return i * 2 + 1;
}
inline int rightindex(int i) {
    return i * 2 + 2;
}
inline int parentindex(int i) {
    return i / 2;
}

// The following function maintains the max heap property of the 
// array. It ensures that for any given index, the children always
// have a lesser value. If not, the element at that index is "bubbled-down".
//
void maxheapify(int heap[], int size, int index) {
    int leftIndex = leftindex(index);
    int rightIndex = rightindex(index);
    
    int largest = index;
    if (leftIndex < size and heap[leftIndex] > heap[index]) {
        largest = leftIndex;
    }
    else if (rightIndex < size and heap[rightIndex] > heap[index]) {
        largest = rightIndex;
    } 
    
    if(largest != index) {
        swap(heap[index], heap[largest]);
        maxheapify(heap, size, largest); 
    }
}

// There are two kinds of binary heaps: max-heaps and min-heaps. 
// In both kinds, the values in the nodes satisfy a heap property, 
// the specifics of which depend on the kind of heap. For heap sort
// algorithm, we will be using max heap.
//
void buildheap(int heap[], int size) {
    for(int i = size/2; i >= 0; --i) {
        maxheapify(heap, size, i);
    }
}

// The following function performs the heap sorting algorithm.
//
void heapsort(int heap[], int size) {    
    cout << "Inside heap-sort: ";
    for (int i = 0; i < size; ++i) cout << heap[i] << " ";
    cout << endl;    
    // @TODO
}

int main() {
    int heap[] = {9, 4, 8, 10, 6, 5, 7, 3, 2, 1};
    int size = 10;
    
    cout << "Before heap-sort: ";
    for (auto i : heap) cout << i << " ";
    cout << endl;    
    
    buildheap(heap, size);
    cout << "After building max-heap: ";
    for (auto i : heap) cout << i << " ";
    cout << endl;  
    
    //heapsort(heap, size);
    
    cout << "After heap-sort: ";
    for (auto i : heap) cout << i << " ";
    cout << endl;
    
    return 0;
}

