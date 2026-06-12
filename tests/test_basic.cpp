#include <gtest/gtest.h>

int add(int a, int b); // too lazy to make harp.h
int subtract(int a, int b);

// simple test example
TEST(AdditionTest, Basic) {
    EXPECT_EQ(add(2, 3), 5);
}

TEST(SubtractionTest, Basic) {
    EXPECT_EQ(subtract(3,2), 1);
}
