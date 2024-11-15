#include <iostream>

#include <set>
#include <unordered_set>

using namespace std;

/*
Sets:
 Stores unique elements
 Not accesible by indeces
 Accessed by key

*/

int main () {
    // unordered_set <int> primes;
    int array_primes[4] = {2, 3, 5, 7};
    // unordered_set <int> primes(array_primes);

    // primes.insert(97);
    // primes.erase(2); // {3, 5, 7, 97}

    // primes.size(); // 4


    unordered_set<int> unordered({4, 2, 7, 1, 3});
    cout << "unordered_set: ";
    for(int n: unordered) {
        cout << n << " ";
    }

    cout << "\n";

    set<int> ordered({4, 2, 7, 1, 3});
    cout << "set: ";
    for(int n: ordered) {
        cout << n << " ";
    }   


    return 0;
}