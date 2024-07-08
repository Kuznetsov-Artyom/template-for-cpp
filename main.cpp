#include <iostream>
#include "arith.hpp"

int main(int argc, char** argv, char** env) {
    int  res1 = arith::add(5, 10);
    int  res2 = arith::sub(res1, 20);
    int  res3 = arith::mul(res1, res2);
    int  res4 = arith::div(res3, res3);

    std::cout << "res1 = " << res1 << '\n';
    std::cout << "res2 = " << res2 << '\n';
    std::cout << "res3 = " << res3 << '\n';
    std::cout << "res4 = " << res4 << '\n';

    return 0;
