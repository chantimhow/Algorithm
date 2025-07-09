#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iomanip>
#include <string>

#define MAXLEN 30

/* structure definition */
struct StudentRec
{
	char name[MAXLEN];
	float grade1;
	float grade2;
	float average;
};

/* function prototypes */
void ReadGrade(StudentRec *Student);
void Display(const StudentRec Student[], int last);
void ReadFromFile(StudentRec Student[], int *next);
void Search(const StudentRec Student[], int last);

using namespace std;
/* main program */
int main(void)
{
	int quit = 0;
	char action;
	StudentRec Stud[MAXLEN]; //an array to store student information
	int next = 0; //counter to keep track of the number of students in the array

	while(!quit)
	{
		cout << "\n\t\t******************************************";
		cout << "\n\t\t**\tStudent Records Menu\t\t**";
		cout << "\n\t\t******************************************\n\n";
		cout << "\t\t<1> Read Grade.\n";
		cout << "\t\t<2> Display.\n";
		cout << "\t\t<3> Read File.\n";
		cout << "\t\t<4> Search.\n";
		cout << "\t\t<5> Quit.\n\n";
		cout << "\tPlease enter your option --> ";
		cin >> action;
		cout << "\n\n";

		switch(action)
		{
			case '1':	ReadGrade(&Stud[next]);
						next++;
						break;

			case '2':	Display(Stud, next-1);
						break;
			
			case '3':	ReadFromFile(Stud, &next);
						break;

			case '4':	Search(Stud, next-1);
						break;

			case '5':	quit = 1;
						break;

			default :	cout << "\tWrong selection.\n";
						break;
		}
	}
}

//read student information from keyboard and store in array
void ReadGrade(StudentRec *Student)
{
	cout << "\tPlease enter the student name : ";
	cin >> Student->name;
	cout << "\tPlease enter the student grade 1: ";
	cin >> Student->grade1;
	cout << "\tPlease enter the student grade 2: ";
	cin >> Student->grade2;
	Student->average = (Student->grade1 + Student->grade2) / 2;
	cout << "\tThe average of the student grades is " <<  Student->average << endl;
}


//display all the student information
void Display(const StudentRec Student[], int last)
{
	int i;

	cout << "Name\t\tGrade1\t\tGrade2\t\tAverage\n";
	for(i = 0; i <= last; i++)
	{
			cout << Student[i].name << "\t\t" << setprecision(1) << showpoint << fixed << Student[i].grade1 << "\t\t" << Student[i].grade2 << "\t\t" << Student[i].average << endl;
	}
}


//read record from file and store in array Student 
// next is the counter in the array to keep track of number of student
void ReadFromFile(StudentRec Student[], int *next)
{
	ifstream infile;
	infile.open("sturec.txt");
	if (infile.is_open()){
		while(infile >> Student[*next].name){
			infile >>  Student[*next].grade1;
			infile >> Student[*next].grade2;
			*(++next);
			}
		
		
	}else cout << "file is not opened";
	infile.close();
}

//function to search for a student in an array according to name
//last is the numebr of students store in the array Student
void Search(const StudentRec Student[], int last)
{
	char nameSearch[MAXLEN];
	cout << "name to search: ";
	cin >> nameSearch;
	for(int i = 0; i < last; i++){
		if(Student[i].name==nameSearch){
			cout << "name is in array!";
		}else cout << "file is not in array!";
	}
	
}


