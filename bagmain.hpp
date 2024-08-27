/*
bag-main.cpp
Use/testing the bag class.
*/
#include <iostream>
using namespace std;

#include "bagtest.hpp"

int main()
{
    bag b(10); //Capacity = 10

    b.insert(5);
    b.insert(7);
    b.insert(-2);

    for(int i = 0; i < b.size(); ++i)
        cout << b.at(i) << endl;
    
    b.remove(5);

    for(int i = 0 ; i < b.size(); ++i)
        cout << b.at(i) << endl;

    bag c = b; // Copies B into C -- C is going to live on the stack

    bag d(27);

    d = c;

    c = c;
    
}