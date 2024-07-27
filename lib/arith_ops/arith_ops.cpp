#include "arith_ops.hpp"

namespace arith {
constexpr int add(int a, int b) noexcept { return a + b; }
constexpr int sub(int a, int b) noexcept { return a - b; }
constexpr int mul(int a, int b) noexcept { return a * b; }
constexpr int div(int a, int b) noexcept { return a / b; }
}  // namespace arith
