//
//  main.cpp
//  DataStructures
//
//  Created by Josep Llodrà Grimalt on 17/04/2018.
//  Copyright © 2018 Josep Llodrà Grimalt. All rights reserved.
//

// #define NDEBUG

#include <iostream>
#include <vector>
#include <memory>

#include "SStack.h"
#include "DStack.h"

int main(int argc, const char *argv[])
{
    // Stack...
    
    /*SStack<char> s = SStack<char>();
    s.empty();
    s.push(45);
    s.push(46);
    s.push('a');
    std::cout << s.top() << "\n";
    s.pop();
    std::cout << s.top() << "\n";
    s.pop();
    std::cout << s.top() << "\n";
    
    SStack<char> s2 = s;
    std::cout << s2.top() << "\n";
    std::cout << s.isEmpty() << "\n";
    std::cout << s2.isEmpty() << "\n";*/
   
    DStack<char> s = DStack<char>();
    s.empty();
    s.push(45);
    s.push(46);
    s.push('a');
    std::cout << s.top() << "\n";
    s.pop();
    std::cout << s.top() << "\n";
    s.pop();
    std::cout << s.top() << "\n";
    
    DStack<char> s2 = s;
    std::cout << s2.top() << "\n";
    std::cout << s.isEmpty() << "\n";
    std::cout << s2.isEmpty() << "\n";
    
    return 0;
}
