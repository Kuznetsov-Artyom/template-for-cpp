#include "arith_ops/arith_ops.hpp"
#include "gtest/gtest.h"

TEST(Test_case, add) {
  constexpr int lhs = 100;
  constexpr int rhs = 200;
  ASSERT_EQ(lhs + rhs, arith::add(lhs, rhs));
}

TEST(Test_case, sub) {
  constexpr int lhs = 100;
  constexpr int rhs = 200;
  ASSERT_EQ(lhs - rhs, arith::sub(lhs, rhs));
}

TEST(Test_case, mul) {
  constexpr int lhs = 100;
  constexpr int rhs = 200;
  ASSERT_EQ(lhs * rhs, arith::mul(lhs, rhs));
}

TEST(Test_case, div) {
  constexpr int lhs = 100;
  constexpr int rhs = 200;
  ASSERT_EQ(lhs / rhs, arith::div(lhs, rhs));
}
