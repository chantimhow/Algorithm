#include <iostream>

int main(){
    int* intptr;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    intptr = &arr[1];
    std::cout << *intptr+1;
}