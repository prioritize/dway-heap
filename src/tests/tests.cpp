//
// Created by leach on 11/24/2021.
//

#include <gtest/gtest.h>
#include "fmt/core.h"

TEST(Tests, Test1) {
    EXPECT_EQ(1, 1);
    fmt::print("{}", "Tests and fmt::fmt are working");
}
