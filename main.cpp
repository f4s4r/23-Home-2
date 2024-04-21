#include <iostream>
#include <cstddef>
#include "Matrix.h"


int main() {
    Matrix<double> array;
    array.fill();
    array.show();
    std::string filename;

    std::cout << "Enter input filename: ";
    std::cin >> filename;
    std::ifstream in(filename);
    //in >> array;

    std::cout << "Enter output filename: ";
    std::cin >> filename;
    std::ofstream out(filename);
    //out << array;

    return 0;
}