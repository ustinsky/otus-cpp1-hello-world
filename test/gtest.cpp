#include <gtest/gtest.h>
#include "../lib.cpp"

TEST(ExampleTests, DemonstrateGTestMacros) {
    EXPECT_TRUE( version() > 0 );
}