#include <iostream>

#include <vector>

using namespace std;

/*
Vectors
1. Need to use ( #include <vector> )
2. Can grow and shrink

Elements 
    are accessible by index
    can be added or deleted after initiating 

Creating vector

vector < data_type > name_of_vector = {value1, value2, etc.}

Basic built-in methods
.push_back() - adds to the end
.pop_back() - removes from the end
.front() - return the first element
.back() - returns the last element
.size() - returns the count of elements in the vectors


*/

int main () {
  vector < int >primes = { 2, 3, 5, 7, 11 };

  cout << primes[2] << "\n";
  cout << primes.front () << "\n";
  cout << primes.back () << "\n";

  primes.push_back (13);
  primes.push_back (17);

  primes.pop_back ();

  for (int i = 0; i < primes.size (); i++){
    cout << primes[i] << " ";
  }
  return 0;
}