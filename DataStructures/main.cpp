//
//  main.cpp
//  DataStructures
//
//  Created by Josep Llodrà Grimalt on 17/04/2018.
//  Copyright © 2018 Josep Llodrà Grimalt. All rights reserved.
//

#include <iostream>

#include "SStack.h"

int main(int argc, const char *argv[])
{
    // insert code here...
    SStack<char> s = SStack<char>();
    s.empty();
    s.push(45);
    s.push(46);
    s.push('a');
    std::cout << s.top() << "\n";
    s.pop();
    std::cout << s.top() << "\n";
    s.pop();
    std::cout << s.top() << "\n";
    s.pop();
    return 0;
}
