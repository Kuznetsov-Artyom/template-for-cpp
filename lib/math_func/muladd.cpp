#include "math_func/muladd.hpp"

#include "arith_ops/arith_ops.hpp"
#include "math_func/factorial.hpp"

/**
 *  This code is useless and was created solely for demonstration purposes.
 */

namespace func {
int muladd(int a, int b, int c) noexcept {
  return arith::add(arith::mul(a, b), c);
}
}  // namespace func
