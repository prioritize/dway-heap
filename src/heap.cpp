//
// Created by leach on 11/25/2021.
//

#include "heap.h"

bool compare(const DHNode& a, const DHNode& b);


// This function removes the top value and returns the key.
string DHeap::top() {
    if (!data.empty()) {
        // Top should remove the top item. Need to handle removal and sifting down.

        return data[0].key;
    }
    return "No item in queue\n";
}


// This function provides the value at the top of the queue, but does not remove it.
string DHeap::peek() {
    if (!data.empty()) {
        return data[0].key;
    }
    return "No item in queue\n";
}


void DHeap::insert(const string& element, int priority) {
    data.emplace_back(DHNode(element, priority));
    bubbleUp(data.size() - 1, compare);
}


void DHeap::remove(const string& element) {

}


void DHeap::update(const string& element, int newPriority) {

}


int DHeap::size() {

}

// This is the naive implementation of bubbleUp and performs 3*height swaps. Can be improved to 1* height swaps
// TODO: Implement the improvement to swaps by storing first item in a temporary variable and swapping down the parent until final location is found
void DHeap::bubbleUp(uint32_t index, const function<bool(const DHNode&, const DHNode&)>& compare) {
    uint32_t pIdx = index;
    while(pIdx > 0){
        uint32_t cIdx = pIdx;
        pIdx = parent(cIdx);
        if (compare(data[cIdx], data[pIdx])) {
            DHNode temp = data[pIdx];
            data[pIdx] = data[cIdx];
            data[cIdx] = temp;
        } else {
            break;
        }
    }
}

void DHeap::pushDown(uint32_t index, const function<bool(const DHNode &, const DHNode &)> &compare) {
}

bool compare(const DHNode& a, const DHNode& b) {
    return a.priority > b.priority;
}


uint32_t getHighestChild(uint32_t index, const function<bool(const DHNode&, const DHNode&)>& compare) {
    // Need to generate list of children nodes
    auto& children =
    for (auto &node:)
}


vector<uint32_t> DHeap::offspring(const function<vector<uint32_t>(uint32_t)>& getChildren, uint32_t index) {
    getChildren(index);
}