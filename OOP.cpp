#include <iostream>
using namespace std;

class Student {
    public:
    string name;
    char grade;
    
    //Class methods
    string getName() {
        return name;
    }
    void printGrade();
    int getGrade(); 
    };

void Student::printGrade(){
    cout << "Grade: " << grade << endl;
}

int Student::getGrade() {
    return grade;
}

int main() {
    Student student1;
    student1.name = "Teck Siang";
    student1.grade = 'A';


    Student student2;
    student2.name = "Kira";
    student2.grade = 'B';


    Student student3;
    student3.name = "JOHN CENAAAAAAAAAAAAAAAAAAAAAAAAA";
    student3.grade = 'C';


    cout << "Student 1 Name: " << student1.name << endl;
    student1.printGrade();
    cout << "Student 2 Name: " << student2.name << endl;
    student2.printGrade();
    cout << "Student 3 Name: " << student3.name << endl;
    student3.printGrade();

    return 0;
}