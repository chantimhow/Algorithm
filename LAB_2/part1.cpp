#include <iostream>
using namespace std;

int main(){
  //question A 
  float numbers[] = {0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
  //quesiton B
  float *nPtr;
  //question C
  for(int i = 0;i<10;i++){
    cout << numbers[i];
  }
  //question D 
  for(int i = 0;i<10;i++){
    cout << *(numbers+i);
  }
  //question E 
  nPtr = &numbers[0];
  nPtr = numbers;
  //question F
  for(int i = 0;i<10;i++){
    cout << nPtr[i];
  }  
//quesition G  
  for(int i = 0;i<10;i++){
    cout << *(nPtr+i);
  }  

}

