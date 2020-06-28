#include <iostream>

int size;

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
    return (i - 2) / 2;
}

// The following functions are also inline functions.
// The return a boolean value depending on the existence
// of the left child, the right child.
//
inline boolean hasleftchild(int i) {
    if(leftindex(int i) < size) return true;
    else return false; 
}
inline boolean hasrightchild(int i) {
    if(rightindex(int i) < size) return true;
    else return false; 
}

void heapsort(int heap[]) {
    // @TODO
}

int main() {
    int heap = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    
    cout << "Before heap-sort: ";
    for (auto i : heap) cout << i << " ";
    cout endl;    
    
    heapsort(heap);
    
    cout << "After heap-sort: ";
    for (auto i : heap) cout << i << " ";
    cout endl;
    
    return 0;
}

