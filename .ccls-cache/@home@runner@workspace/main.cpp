//File used to display the results of the program from the NumberArray class
#include "NumberArray.h"
#include <iostream>
#include <random>
using namespace std;

int main() {
    // Test default constructor
    cout << "----- Test constructors -----" << "\n";
    NumberArray array1;
    cout << "From default constructor: Array of size 10" << "\n";
    array1.print();

    // Test constructor with parameters
    NumberArray array2(15);
    cout << "\nFrom constructor with parameters: Array of size 15" << "\n";
    array2.print();

    // Fill array with random numbers
    cout << "\n----- Test mutator -----" << "\n";
    default_random_engine generator;
    uniform_real_distribution<double> distribution(1.0, 100.0);
    for (int i = 0; i < 15; ++i) {
        array2.setNumber(i, distribution(generator));
    }
    cout << "Array filled with numbers:" << "\n";
    array2.print();

    // Test accessors
    cout << "\n----- Test accessors -----" << "\n";
    cout << "Access item at index 5: " << array2.getNumber(5) << "\n";
    cout << "Access item at index 20 (out of bounds): " << array2.getNumber(20) << "\n";

    cout << "\nThe minimum value in the array is: " << array2.getMin() << "\n";
    cout << "The maximum value in the array is: " << array2.getMax() << "\n";
    cout << "The average of the values in the array is: " << array2.getAverage() << "\n\n";

  // Out of bounds test
  cout << "\nTrying to set a number with an out of bounds index (20):" << "\n";
  array2.setNumber(20, 999.9);

  return 0;
}
