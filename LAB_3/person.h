#include <iostream>
struct person{
    std::string name;
    int age;
    int weight;
    double height;

    // default constructor when a perosn object is created;
    person(){
        name = "";
        age = 0;
        weight = 0;
        height = 0.0; 
    }
    //constructor with parameters that accept inputs from user;
    person(double heightInput,int weightInput,int ageInput,std::string nameInput){
        name = nameInput;
        age = ageInput;
        height = heightInput;
        weight = weightInput;
    }
    
    //member functions
    void print(){
        std::cout << "your name is\t" << name << std::endl;
        std::cout << "your age is\t" << age << std::endl;
        std::cout << "your weight is\t" << weight << std::endl;
        std::cout << "your height is\t" << height << std::endl;
    }
    void setName(){
        std::cout << "please enter your name: ";
        std::cin >> name;
    }
    void setAge (){
        std::cout << "please enter your age: ";
        std::cin >> age;
    }
    void setWeight (){
        std::cout << "please enter your weight: ";
        std::cin >> weight;
    }
    void setHeight (){
        std::cout << "please enter your height: ";
        std::cin >> height;
    }  
    std::string getName(){
        std::string nameInput;
        std::cout << "please enter your name:";
        std::cin >> nameInput;
        return nameInput;
    }
    int getAge(){
       int ageInput;
        std::cout << "please enter your age:";
        std::cin >> ageInput;
        return ageInput;
    }
    int getWeight(){
        int weightInput;
        std::cout << "please enter your weight:";
        std::cin >> weightInput;
        return weightInput;
    }
    double getHeight(){
        double heightInput;
        std::cout << "please enter your height:";
        std::cin >> heightInput;
        return heightInput;
    }


};
    bool compareAge(person personA, person personB){
        if(personA.age>personB.age){
            return true;
        }
        else return false;
    }