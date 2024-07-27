#include "muladd.hpp"

#include "gtest/gtest.h"

TEST(Test_case_muladd, test_1) {
  constexpr int a = 5;
  constexpr int b = 5;
  constexpr int c = 5;
  ASSERT_EQ(30, func::muladd(a, b, c));
}

TEST(Test_case_muladd, test_2) {
  constexpr int a = 5;
  constexpr int b = 5;
  constexpr int c = -25;
  ASSERT_EQ(0, func::muladd(a, b, c));
}
