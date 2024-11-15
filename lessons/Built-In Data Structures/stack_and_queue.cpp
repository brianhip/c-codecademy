#include <iostream>

#include <stack>
#include <queue>
#include <format>

using namespace std;

/*
Topics covered:

Stack:
    Data structure
    Creation
    Methods

Queue:
    Data Structure
    Creation
    Methods

*/

int main () {
    stack<int> plates;

    cout << "Initiate the stack with " << 10 << " plates.\n";
    for(int i = 1; i <= 10; i++) {
        cout << "Adding plate " << i << "\n";
        plates.push(i);
    }

    for(int i = 1; i <= 10; i++) {
        int removed_plate = plates.top();
        cout << "Removing plate " << removed_plate << "\n";
        plates.pop();
    }

    queue<string> orders;
    cout << "Initiate the queue with " << 10 << " orders.\n";
    for(int i = 1; i <= 10; i++) {
        string order = "Order: "+to_string(i)+"\n";
        cout <<  "Adding " << order;
        orders.push(order);
    }

    for(int i = 1; i <= 10; i++) {
        string removed_order = orders.front();
        cout << "Attending " << removed_order << "\n";
        plates.pop();
    }
}
