#include <iostream>
#include <string>
// Base class
class Person {
private:
std::string name;
protected:
int age;
public:
Person(const std::string& n, int a) : name(n), age(a) {}
void displayInfo() {
std::cout << "Name: " << name << ", Age: " << age << std::endl;
}
};
// Derived class 1
class Student : public Person {
private:
int studentId;
public:
Student(const std::string& n, int a, int id) : Person(n, a), studentId(id) {}
void displayStudentInfo() {
displayInfo(); // Accessing public member function of the base class
std::cout << "Student ID: " << studentId << std::endl;
}
};
// Derived class 2
class Employee : public Person {
private:
int employeeId;
public:
Employee(const std::string& n, int a, int id) : Person(n, a), employeeId(id) {}
void displayEmployeeInfo() {
// Accessing protected member variable of the base class
std::cout << "Employee ID: " << employeeId << ", Age (protected): " << age << std::endl;
}
};
int main() {
// Creating objects of derived classes
Student student("Abhishek", 48, 1234);
Employee employee("Rahul", 30, 5678);
// Accessing public member function of the base class
std::cout << "Student Information:" << std::endl;
student.displayStudentInfo();
std::cout << "\nEmployee Information:" << std::endl;
employee.displayEmployeeInfo();
return 0;
}
