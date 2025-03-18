//File that hold all of the functions for the NumberArray class
#include "NumberArray.h"
#include <iomanip>
#include <limits>
using namespace std;

const double NumberArray::DEFAULT_VALUE = 10000.0;

// Constructor 
NumberArray::NumberArray(int size) {
    if (size <= 0) size = MAX_SIZE;
    this->size = size;
    numbers = new double[size];
    for (int i = 0; i < size; ++i) {
        numbers[i] = 0.0;
    }
}

// Destructor
NumberArray::~NumberArray() {
    delete[] numbers;
    cout << "The destructor is running" << "\n";
}

// Set Number and check for out of bounds inputs
void NumberArray::setNumber(int index, double value) {
    if (index >= 0 && index < size) {
        numbers[index] = value;
    } else {
        std::cerr << "The index is out of the bounds of the array, number not stored." << "\n";
    }
}

// Get Number and check again for out of bounds inputs
double NumberArray::getNumber(int index) const {
    if (index >= 0 && index < size) {
        return numbers[index];
    } else {
        std::cerr << "The index is out of the bounds of the array, returning default." << "\n";
        return DEFAULT_VALUE;
    }
}

// Function to Get Minimum Value 
double NumberArray::getMin() const {
    double min = numbers[0];
    for (int i = 1; i < size; ++i) {
        if (numbers[i] < min) min = numbers[i];
    }
    return min;
}

// Function to Get Maximum Value
double NumberArray::getMax() const {
    double max = numbers[0];
    for (int i = 1; i < size; ++i) {
        if (numbers[i] > max) max = numbers[i];
    }
    return max;
}

// Function to Calculate Average
double NumberArray::getAverage() const {
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += numbers[i];
    }
    return sum / size;
}

// Function to print Print Array
void NumberArray::print() const {
    for (int i = 0; i < size; ++i) {
        cout << std::fixed << std::setprecision(1) << numbers[i] << " ";
    }
    cout << "\n";
}
