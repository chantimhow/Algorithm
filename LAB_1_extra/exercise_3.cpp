#include <iostream>
#include <fstream>
#include <iomanip>
#define ARRAY_SIZE 9

struct employee{
    std::string id;
    char gender;
    double payrate;
    char exempt;
    int hours_work;
    double salary;
};
void readEmployee(employee employees[]);
void writeEmployee(employee employees[]);
double payrate = 8.5;


int main(){
    employee employees[ARRAY_SIZE];
    std::ifstream infile;
    infile.open("employee.txt");
    readEmployee(employees);
    writeEmployee(employees);
    return 0;

}

void readEmployee(employee employees[]){
std::ifstream infile;
infile.open("employee.txt");
int index = 0;
if (infile.is_open()){
    while(infile >> employees[index].id){
        infile >> employees[index].gender;
        infile >> employees[index].payrate;
        infile >> employees[index].exempt;
        infile >> employees[index].hours_work;
        infile.ignore();
        ++index;
        std::cout << index;
    }
}else std::cout << "file is not opened";
}
void writeEmployee(employee employees[]){
    std::ofstream outfile;
    for (int i =0;i <ARRAY_SIZE;i++){
        if(employees[i].exempt == 'N' && employees[i].hours_work > 40){
            employees[i].salary = (40 * employees[i].payrate) + (employees[i].hours_work - 40) * (employees[i].payrate *  2);
        }
        else employees[i].salary = (employees[i].hours_work *  employees[i].payrate);
    }
    outfile.open("employee_output.txt",std::ios::app);
    if (outfile.is_open()){
        outfile 
        << std::setw(18) << std::left << "employee ID" << std::setw(18) << std::left << "Gender" 
        << std::setw(18) << std::left << "Payrate"<< std::setw(18) << std::left << "Exempt"
        << std::setw(18) << std::left << "Hours work"<< std::setw(18) << std::left << "Total Pay (RM)" << std::endl;
        for (int i = 0;i<ARRAY_SIZE;i++){
            outfile
            << std::setw(18) << std::left << employees[i].id << std::setw(18) << std::left << employees[i].payrate
            << std::setw(18) << std::left << employees[i].payrate << std::setw(18) << std::left << employees[i].exempt
            << std::setw(18) << std::left << employees[i].hours_work << std::setw(18) << std::left << std::fixed << std::setprecision(2) << std::showpoint << employees[i].salary << std::endl;
        }
        

    }
}