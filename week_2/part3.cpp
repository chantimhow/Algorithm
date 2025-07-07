#include <iostream>
using namespace std;

int main(){
  int array[10]={1,2,3,4,5,6,7,8,9,10};
  int *x,*y;
  x=array+2;
  y=x-1;
  cout << *x << endl;
  cout << x[-1] << endl;
  cout << y[0]* *(x+1) << endl;
  cout << *array - y[5] << endl;
  cout << arr[3]-y[5] << endl;
}i
