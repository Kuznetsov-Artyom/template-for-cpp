#include <iostream>

#include "arith_ops/arith_ops.hpp"
#include "math_func/factorial.hpp"
#include "math_func/muladd.hpp"

int main(int argc, char **argv, char *env[]) {
  int res1 = arith::add(5, 10);
  int res2 = arith::sub(res1, 20);
  int res3 = arith::mul(res1, res2);
  int res4 = arith::div(res3, res3);

  std::cout << "res1 = " << res1 << '\n';
  std::cout << "res2 = " << res2 << '\n';
  std::cout << "res3 = " << res3 << '\n';
  std::cout << "res4 = " << res4 << '\n';

  printf("muladd(%d, %d, %d) = %d\n", res1, res2, res3,
         func::muladd(res1, res2, res3));
  printf("factorial(%d) = %d\n", 5, func::factorial(5));

  return 0;
}