#include <iostream>
using namespace std;

struct students{
    string name;
    int age;
    double gpa;
    bool isEnrolled;
};

int main(){

    //'.' is a class member access operator

    students student1;
    student1.name = "Aashwalayan";
    student1.age = 20;
    student1.gpa = 3.6;
    student1.isEnrolled = true;

    cout << student1.name << "\n";
    cout << student1.age << "\n";
    cout << student1.gpa << "\n";
    cout << student1.isEnrolled << "\n\n";

    students student2;
    student2.name = "Classmate";
    student2.age = 19;
    student2.gpa = 3.2;
    student2.isEnrolled = true;

    cout << student2.name << "\n";
    cout << student2.age << "\n";
    cout << student2.gpa << "\n";
    cout << student2.isEnrolled << "\n";

}