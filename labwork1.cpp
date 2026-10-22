#include <iostream> 
using namespace std; 
class Student 
{ 
private: 
    int rollNo; 
    string name; 
public: 
    // We are having a parameterized constructor here
    Student(int r, string n) 
    { 
        rollNo = r;  
        name = n; 
        cout << "Student object created" << endl; 
    } 
    // Member function 
    void display() 
    { 
        cout << "Roll Number: " << rollNo << endl; 
        cout << "Name: " << name << endl; 
    } 
    // Destructor 
    ~Student() 
    { 
        cout << "Student object destroyed" << endl; 
    } 
}; 
int main() 
{ 
    Student s1(52, "Sri charan"); 
    s1.display(); 
    return 0; 
}