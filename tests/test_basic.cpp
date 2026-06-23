#include <gtest/gtest.h>
#include "../src/math_functions.h"
#include "../src/more_math/complex_formulas.h"

TEST(math_functions, add) {
    EXPECT_EQ(add(2, 3), 5);
}

TEST(complex_formulas, hypotenuse) {
    EXPECT_EQ(find_hypotenuse(3, 4), 5);
}
