#include "Heap.h"

Heap::Heap()
{
    capacity = 0;
    size = 0;
    H = null;
}

Heap::initialize(int n){
    Heap newHeap = Heap();
    newHeap.capacity = n;
    newHeap.size = 0;
    newHeap.H = new Element[n];
    return newHeap;
}
