//
//  main.cpp
//  Lection from 24 Sept.
//
//  Created by Roman Esin on 24.09.2020.
//
//  Taught by Сущенко А. А.

#include <iostream>
#include <stdio.h>
#include <limits>

// Define things
#define thing if

using namespace std;

// Global var
int a = 0;

int main(int argc, const char * argv[]) {

    // Declaring constant types
    cout << sizeof(35) << endl;
    cout << sizeof(35l) << endl;

    // Global / Local scopes
    int a = 2;
    cout << a << endl << ::a << endl;

    // Sizes
    long double asd = 0.123456789;
    cout << sizeof(asd) << endl;

    // Shorthands for unsigned `int`, short `int`
    short unsigned int unsignedInt = -1;
    unsigned short unsignedThing = -1;

    cout << unsignedInt << endl << unsignedThing << endl;

    // Chars
    char string[10] = "test-test";
    for (int i = 0; i < 10; i++) {
        cout << string[i];
    }

    cout << endl << "duoble: " << sizeof(double) << " float: " << sizeof(float) << " long double: " << sizeof(long double) << endl;

    return 0;
}
