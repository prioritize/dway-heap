//
// Created by leach on 11/25/2021.
//

#include "heap.h"

string DHeap::top() {

}
string DHeap::peek() {

}
void DHeap::insert(string element, int priority) {

}
void DHeap::remove(string element) {

}
void DHeap::update(string element, int newPriority) {

}
int DHeap::size() {

}
void bubbleUp(DHeap& heap, int index) {
    int pIdx = index;
    while(pIdx > 0){
        int cIdx = pIdx;
        pIdx = parent(cIdx);
        if (heap.data[cIdx].priority > heap.data[pIdx].priority) {
            swap(heap, cIdx, pIdx);
        }

    }

}

