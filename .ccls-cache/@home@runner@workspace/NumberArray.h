//File to hold the NumberArray class and its methods and attributes
#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H

#include <iostream>

class NumberArray {
private:
    static const int MAX_SIZE = 10; // Default array size
    static const double DEFAULT_VALUE; // Default return value for invalid index
    int size;
    double* numbers;

public:
    // Constructor
    NumberArray(int size = MAX_SIZE);
    // Destructor
    ~NumberArray();

    // Mutator
    void setNumber(int index, double value);

    // Accessors
    double getNumber(int index) const;
    double getMin() const;
    double getMax() const;
    double getAverage() const;

    // Display
    void print() const;
};

#endif // NUMBERARRAY_H
