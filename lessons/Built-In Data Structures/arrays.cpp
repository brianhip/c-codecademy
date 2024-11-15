#include <iostream>

#include <vector>

using namespace std;


/*
Arrays 
Collection of data of the same type
1. Size is fixed
2. Data type enforced

Covered topics: 
    Creating arrays 
        data_type name_of_array[fixed_size] = {value1, value2, etc.};
    Accessing arrays
        name_of_array[index_to_access]
    Multidimensional Arrays
        data_type name_of_array[fixed_size][fixed_size] = {{value1, value2}, {val3, val4}, {etc.}};
    Iteratign through arrays
        for loop (int i = 0 ; i < array_size; i++)
        for each (int element : array) 

*/

int main () {
  int primes[5] = { 2, 3, 5, 7, 11 };
  cout << primes[2] << "\n";
  for (int i = 0; i < 5; i++){
    cout << primes[i] << " ";
  }
  return 0;
}

