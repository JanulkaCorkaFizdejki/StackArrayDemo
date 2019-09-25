//
//  main.cpp
//  Stack
//
//  Created by Robert Nowiński on 25/09/2019.
//  Copyright © 2019 Robert Nowiński. All rights reserved.
//

#include <iostream>
#include "Implementation1.cpp"
#include "StackOfInt.h"


int main() {
    StackOfInts *impl_stack = new Implementation1{3};
    std::cout << "*** START STACK ARRAY ***\n";
    std::cout << "(set first element: 3)\n";
    std::cout << "Print FULL STOCK:\n";
    impl_stack -> printFullStack();
    std::cout << "----------------\n";
    std::cout << "(push: 2)\n";
    impl_stack -> push(2);
    std::cout << "Print FULL STOCK:\n";
    impl_stack -> printFullStack();
    std::cout << "----------------\n";
    std::cout << "(push: 5)\n";
    impl_stack -> push(5);
    std::cout << "Print FULL STOCK:\n";
    impl_stack -> printFullStack();
    std::cout << "----------------\n";
    std::cout << "(push: 7)\n";
    impl_stack -> push(7);
    std::cout << "Print FULL STOCK:\n";
    impl_stack -> printFullStack();
    std::cout << "----------------\n";
    std::cout << "(size:)\n";
    std::cout << "Current Stack Size: " << impl_stack -> size()<< "\n";
    std::cout << "----------------\n";
    std::cout << "(pop: last element in stack => " << impl_stack -> pop() << ")\n";
    std::cout << "Print FULL STOCK:\n";
    impl_stack -> printFullStack();
    std::cout << "----------------\n";
    std::cout << "(pop: last element in stack => " << impl_stack -> pop() << ")\n";
    std::cout << "Print FULL STOCK:\n";
    impl_stack -> printFullStack();
    std::cout << "----------------\n";
    std::cout << "(push: 21)\n";
    impl_stack -> push(21);
    std::cout << "Print FULL STOCK:\n";
    impl_stack -> printFullStack();
    std::cout << "----------------\n";
    std::string is_empty = impl_stack -> isEmpty() == 1 ? "N0!" : "YES!";
    std::cout << "(stack is empty? " << is_empty <<")\n";
    std::cout << "----------------\n";
    std::cout << "(size:)\n";
    std::cout << "Current Stack Size: " << impl_stack -> size()<< "\n";
    std::cout << "\n *** END STACK ARRAY *** \n";
    
    delete impl_stack;
    
    return 0;
}
