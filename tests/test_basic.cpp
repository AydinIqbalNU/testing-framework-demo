#include <gtest/gtest.h>
#include "../src/math_functions.h"

TEST(math_functions, add)
{
    EXPECT_EQ(add(2, 3), 5);
}
