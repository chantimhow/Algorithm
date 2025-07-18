#include <iostream>

int main(){
    int x = 5;
    int y = 10;
    int* penis=&x;
    int* butt=&y;
    penis = butt;
    std::cout << *penis;

}