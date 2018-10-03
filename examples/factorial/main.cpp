#include <iostream>
#include <string>
#include "mylib.h"

using namespace std;

int main(int argc, char **argv) {
    if (argc != 2) {
        cerr << "usage: factorial <n>" << endl;
        return 1;
    }

    int n = stoi(argv[1]);
    cout << "Factorial(" << n << ") -> " << mylib::Factorial(n) << endl;
    return 0;
}
