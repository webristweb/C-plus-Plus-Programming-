#include <iostream>
using namespace std;

class Company {
private:
    int employees;
    double revenue;

public:
    Company() {
        employees = 0;
        revenue = 0.0;
    }

    Company(int emp, double rev) {
        employees = emp;
        revenue = rev;
    }

    Company operator+(const Company& other) {
        Company result;
        result.employees = employees + other.employees;
        result.revenue = revenue + other.revenue;
        return result;
    }

    Company operator-(const Company& other) {
        Company result;
        result.employees = employees - other.employees;
        result.revenue = revenue - other.revenue;
        return result;
    }

    void display() {
        cout << "Employees: " << employees << endl;
        cout << "Revenue: $" << revenue << endl;
    }
};

int main() {
    Company company1(100, 5000000.0);
    Company company2(50, 2000000.0);

    Company company3 = company1 + company2;
    Company company4 = company1 - company2;

    cout << "Company 1:" << endl;
    company1.display();

    cout << "Company 2:" << endl;
    company2.display();

    cout << "Company 1 + Company 2:" << endl;
    company3.display();

    cout << "Company 1 - Company 2:" << endl;
    company4.display();

    return 0;
}
