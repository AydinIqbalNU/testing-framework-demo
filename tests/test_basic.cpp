#include <gtest/gtest.h>

int add(int a, int b);

TEST(AdditionTest, Basic) {
    EXPECT_EQ(add(2, 3), 5);
}
