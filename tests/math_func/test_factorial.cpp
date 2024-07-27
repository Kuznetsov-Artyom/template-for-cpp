#include "factorial.hpp"
#include "gtest/gtest.h"

TEST(Test_case_fact, test_val_5) {
  constexpr int value = 5;
  ASSERT_EQ(120, func::factorial(value));
}

TEST(Test_case_fact, test_val_0) {
  constexpr int value = 0;
  ASSERT_EQ(1, func::factorial(value));
}
