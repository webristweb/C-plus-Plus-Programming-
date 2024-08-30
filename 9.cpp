#include <iostream>
#include <string>
class pntr_obj {
private:
int roll_no;
std::string name;
public:
// Member function to set data values
void set_data(int roll, const std::string& student_name) {
roll_no = roll;
name = student_name;
}
// Member function to print which object has invoked it
void print() {
std::cout << "Student Name: " << name << ", Roll Number: " << roll_no;
std::cout << " (Object at memory location: " << this << ")" << std::endl;
}
};
int main() {
// Create three objects of the pntr_obj class
pntr_obj obj1, obj2, obj3;
// Set data values for each object
obj1.set_data(101, "Nikhil");
obj2.set_data(102, "Abhishek");
obj3.set_data(103, "Raushan");
// Print information for each object
std::cout << "Information for Object 1:" << std::endl;
obj1.print();
std::cout << "\nInformation for Object 2:" << std::endl;
obj2.print();
std::cout << "\nInformation for Object 3:" << std::endl;
obj3.print();
return 0;
}
