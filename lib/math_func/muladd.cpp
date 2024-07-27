#include "muladd.hpp"

#include "arith_ops/arith_ops.hpp"

namespace func {
int muladd(int a, int b, int c) noexcept {
  return arith::add(arith::mul(a, b), c);
}
}  // namespace func
