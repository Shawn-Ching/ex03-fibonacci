//
// Created by Shawn Ching on 9/19/18.
//

#include <iostream>
#include "fibonacci.h"

using edu::vcccd::vc::csv15::fibonacci;

int main(int argc, char *argv[]) {
    auto fibn = fibonacci(11);
    std::cout << "Fib(n) = " << fibn << std::endl;
    return 0;

}//



