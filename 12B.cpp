//Certainly! Here's an example of a C++ program that demonstrates the addition and subtraction of data members of two objects of a class called `Company`.

//```cpp
#include<iostream>
using namespace std;

class Company {
    int id;
    int employees;
public:
    Company() : id(0), employees(0) {}  // Default constructor

    Company(int id, int employees) : id(id), employees(employees) {}  // Parameterized constructor

    Company operator+(const Company& other) const {
        Company result;
        result.id = this->id + other.id;
        result.employees = this->employees + other.employees;
        return result;
    }

    Company operator-(const Company& other) const {
        Company result;
        result.id = this->id - other.id;
        result.employees = this->employees - other.employees;
        return result;
    }

    void display() {
        cout << "Company ID: " << id << endl;
        cout << "Number of Employees: " << employees << endl;
    }
};

int main() {
    Company company1(1001, 50);
    Company company2(1002, 70);

    cout << "Company 1:" << endl;
    company1.display();

    cout << "\nCompany 2:" << endl;
    company2.display();

    Company sum = company1 + company2;
    cout << "\nSum of the two companies:" << endl;
    sum.display();

    Company differencee student's name and average marks.

//The `FriendClass` acts as a friend class to calculate the average of marks. It has a static method `mark_avg()` that takes a reference to a `Student` object and calculates the average of the marks array.

//In the `main()` function, we create a `Student` object, `student`, and call its `get_data()` method to accept the student details. Then we call the `display()` method to display the student's name and average marks.

//Hope this helps!