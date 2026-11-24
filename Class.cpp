#include <iostream>
using namespace std;

class Student {
    public:
    string name;
    char grade;

    public:
    Student(string name, char grade) {
        this->name = name;
        this->grade = grade;
    }

    void displayStudentInfo() {
        cout << "Name: " << name << ", Grade: " << grade << endl;
    }
};

int main() {
    Student student1("Teck Siang", 'A');   
    Student student2("Kira", 'B');
    Student student3("JOHN CENAAAAAAAAAAAAAAAAAAAAAAAAA", 'C');

    student1.displayStudentInfo();
    student2.displayStudentInfo();
    student3.displayStudentInfo();
    return 0;

}