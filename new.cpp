#include<stdio.h>
#include <iostream>

void print_function() {
    std::cout << "New Print!" << std::endl;
    std::cout << "Fine Print!" << std::endl;
}
 
int main() {
    print_function();
    std::cout << "Hello World!" << std::endl;
    std::cout << "Hello World! Another Time!" << std::endl;
    std::cout << "Hello World! MERGE ONE!" << std::endl;
    std::cout << "Hello World! MERGE TWO!" << std::endl;
    return 0;
}