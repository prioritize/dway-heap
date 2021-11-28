//
// Created by leach on 11/25/2021.
//

#ifndef DWAY_HEAP_HEAP_H
#define DWAY_HEAP_HEAP_H


#include <utility>
#include <vector>
#include <string>
#include <functional>
#include "DHNode.h"

using std::vector;
using std::string;
using std::function;


class DHeap {
public:
    std::vector<DHNode> data;
    int branchingFactor = 2;
    string top();
    string peek();
    void insert(const string& element, int priority);
    void remove(const string& element);
    void update(const string& element, int newPriority);
    void bubbleUp(uint32_t index, const function<bool(const DHNode&, const DHNode&)>& compare);
    void pushDown(uint32_t index, const function<bool(const DHNode&, const DHNode&)>& compare);
    vector<uint32_t> offspring(const function<vector<uint32_t>(uint32_t)> &getChildren, uint32_t index);
    int size();

};
int parent(uint32_t index) {
    // Naive implementation at the moment assuming a branching factor of 2
    return (index - 1) / 2;
}

#endif //DWAY_HEAP_HEAP_H
