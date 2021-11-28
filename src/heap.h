//
// Created by leach on 11/25/2021.
//

#ifndef DWAY_HEAP_HEAP_H
#define DWAY_HEAP_HEAP_H


#include <utility>
#include <vector>
#include <string>
#include "DHNode.h"

using std::vector;
using std::string;


class DHeap {
public:
    std::vector<DHNode> data;
    int branchingFactor = 2;
    string top();
    string peek();
    void insert(string element, int priority);
    void remove(string element);
    void update(string element, int newPriority);
    int size();
};
void bubbleUp(DHeap& heap, int index);
int parent(int index) {
    // Naive implementation at the moment assuming a branching factor of 2
    return (index - 1) / 2;
}

#endif //DWAY_HEAP_HEAP_H
