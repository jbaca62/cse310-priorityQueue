#ifndef HEAP_H
#define HEAP_H


class Heap
{
    public:
        Heap();
        static Heap initialize(int n);
        static void printHeap(Heap heap);


    protected:

    private:
        int capacity;
        int size;
        Element *H;
};

#endif // HEAP_H
