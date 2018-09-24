//
// Created by Shawn Ching on 9/19/18.
//

#ifndef EX03_FIBONACCI_FIBONACCI_H
#define EX03_FIBONACCI_FIBONACCI_H

#include <cstdint>
#include <cstdlib>

namespace edu { namespace vcccd { namespace vc { namespace csv15 {

                uint64_t fibonacci(uint64_t number) {
                    if (number == 0 || number == 1) return number;
                    uint64_t fib0 = 0, fib1 = 1;
                    for (size_t i = 2; i <= number; i++) {
                        uint64_t next = fib0 + fib1;
                        fib0 = fib1;
                        fib1 = next;

                    }
                    return fib1;
                }}}}}


#endif //EX03_FIBONACCI_FIBONACCI_H