#include "mylib.h"

unsigned int mylib::Factorial(unsigned int number) {
    return number > 1 ? Factorial(number-1)*number : 1;
}
