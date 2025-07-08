#include	<iostream>
#include	<cstring>
#include	<fstream>

struct Person {				// define a person type
   char	name[20], phone[20];	// user name and phone
   double  	money;			// money in bank
};

using namespace std;

int main() {
	char		f[10] = {'0', 'b', '2', 'd', '4', 'e', '6', 'f', '8', 'g'};
	float		b[34];
	double		ar[2][2];
	ifstream	in;
	ofstream	out;
	char		s[256];
	Person		p;
	int i, j;

  //question A 
  cout << f[6] << endl;
  //question B 
  cout << "enter float to be stored into array b";
  cin >> b[3];
  //question C 
  out.open("output.txt",ios::app);
  if(out.is_open()){
   out << f[6];
  }
  else cout << "file is not opened";
  out.close();
  //question D 
  cout << "please enter the file name" << endl;
  string filename;
  cin >> filename;
  out.open(filename);
  if(out.is_open())
    out << f[6];
  
  else cout << "file is not opened!";
  out.close();
  //question E 
  in.open("input.txt");
  if(in.is_open()){
    for(int i = 0;i<34;i++){
      in >> b[i];
    }
  }else cout << "file is not opened";
  in.close();
  //question F 
  in.open("matrix1.txt");
  if(in.is_open()){

  }


} 
