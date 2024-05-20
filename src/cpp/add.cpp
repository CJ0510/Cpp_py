#include <iostream>
#include <pybind11/pybind11.h>
#include "add.h"

using namespace std;

// add tow numbers
int add(int a, int b) {
    return a + b;
}

PYBIND11_MODULE(add_pybind11, m)
{
    m.doc() = "pybind11 example plugin"; // optional module docstring
    m.def("add", &add, "A function which adds two numbers");
}