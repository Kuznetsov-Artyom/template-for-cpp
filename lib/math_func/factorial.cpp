#include "math_func/factorial.hpp"

#include "arith_ops/arith_ops.hpp"

/**
 *  This code is useless and was created solely for demonstration purposes.
 */

namespace func {
int factorial(int value) noexcept {
  return value <= 1 ? 1 : arith::mul(value, factorial(arith::sub(value, 1)));
}
}  // namespace func
