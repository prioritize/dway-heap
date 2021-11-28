//
// Created by leach on 11/24/2021.
//

#include <vector>
#include <gtest/gtest.h>
#include "fmt/core.h"
#include "../DHNode.h"
#include "../heap.h"
using std::vector;

// this makes the heap a max heap
bool compare(const DHNode& a, const DHNode& b) {
    return a.priority > b.priority;
}

vector<uint32_t> getChildren(uint32_t index) {
    return {(2 * index) + 1, 2 * (index + 1)};
}


}
TEST(Tests, Test1) {
    EXPECT_EQ(1, 1);
    fmt::print("{}", "Tests and fmt::fmt are working");
}

TEST(DHeap, Test)
