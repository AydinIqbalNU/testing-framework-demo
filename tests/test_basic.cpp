#include <gtest/gtest.h>

int add(int a, int b); // too lazy to make harp.h

// simple test example
TEST(AdditionTest, Basic) {
    EXPECT_EQ(add(2, 3), 5);
}

// simple test failure example
/*TEST(AdditionTest, FailureExample) {
    EXPECT_EQ(add(2, 3), 6);
}*/
