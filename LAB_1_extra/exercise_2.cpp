#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
#define ARRAY_SIZE 50

void createData(int list[]);
void printData(int list[]);
void printOddIndex(int list[]);
void printOddInteger(int list[]);
int CountEven(int list[]);

using namespace std;

int main(void)
{	
	int numbers[ARRAY_SIZE];

	cout << "\n\nCreating Array Data\n";
	createData(numbers);

	cout << "\n\nPrinting Array Data.\n";
	printData(numbers);

	cout << "\n\nPrint Element in Odd Index.\n";
	printOddIndex(numbers);

	cout << "\n\nPrint Element with Odd Value.\n";
	printOddInteger(numbers);

	cout << "\n\nNumber of element with even value is: " << CountEven(numbers) << 	endl;
	

	

    return 0;
	} /* main */

void createData(int list[])
{
	int i;

	srand(time(NULL)); //seed random function
	for (i=0; i<ARRAY_SIZE; i++)
		list[i] = rand()%900 + 100; //scaled random number 

} /* createData */

void printData(int list[])
{
	int i;

	for (i=0; i<ARRAY_SIZE; i++)
	{
		if (i!=0 && i%10==0) // new line after 10 values 
			cout << "\n";
		cout << setw(5) << list[i];
	}
	cout << endl;

} 
void printOddIndex(int list[]){
    int count = 0;
    for (int i =0;i<ARRAY_SIZE;i++)
    {
        if (i%2!=0){
           if((count != 0) && (count % 10 == 0)){
            cout << endl;
           } 
           cout << setw(5) << list[i];
           ++count;
        }
    }
}
void printOddInteger(int list[]){
    int count = 0;
    for (int i =0;i<ARRAY_SIZE;i++){
        if (list[i]%2!=0){
            if(count!=0&&count%10==0){
                cout << endl;
            }
            cout << setw(5) << list[i];
            ++count;
        }

    }
}
int CountEven(int list[]){
    int count = 0;
    for(int i =0;i<ARRAY_SIZE;i++){
        if(list[i]%2==0)
        count++;
        
    }
    return count;
}