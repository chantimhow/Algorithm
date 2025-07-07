#include <iostream>
using namespace std;
struct personal{
  char phoneNumber[11];
  char address[50];
  char city[15];
  char state[3];
  char zipCode[6];
};
struct customer{
  char lastname[15];
  char firstname[15];
  int customerNumber;
  personal p;
};

int main(){
customer customerRecord;
customer *customerPtr;
customerPtr = &customerRecord;
return 0;
//question A 
customerRecord.lastname;
customerPtr->lastname;
//question B 
customerRecord.customerNumber;
customerPtr->customerNumber;
//question C
customerRecord.city;
customerPtr->city;
}
