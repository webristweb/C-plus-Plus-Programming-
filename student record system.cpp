#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
    string name;
    int rollNumber;
    float marks;
};

vector<Student> students;

void addStudent() {
    Student student;
    cout << "Enter student name: ";
    getline(cin, student.name);
    cout << "Enter roll number: ";
    cin >> student.rollNumber;
    cout << "Enter marks: ";
    cin >> student.marks;
    cin.ignore();
    students.push_back(student);
    cout << "Student added successfully!" << endl;
}

void displayStudents() {
    if (students.empty()) {
        cout << "No students found!" << endl;
        return;
    }
    cout << "Student Records:" << endl;
    for (const auto& student : students) {
        cout << "Name: " << student.name << endl;
        cout << "Roll Number: " << student.rollNumber << endl;
        cout << "Marks: " << student.marks << endl;
        cout << "-------------------------" << endl;
    }
}

void searchStudent() {
    if (students.empty()) {
        cout << "No students found!" << endl;
        return;
    }
    int rollNumber;
    cout << "Enter roll number to search: ";
    cin >> rollNumber;
    cin.ignore();
    bool found = false;
    for (const auto& student : students) {
        if (student.rollNumber == rollNumber) {
            cout << "Student found!" << endl;
            cout << "Name: " << student.name << endl;
            cout << "Roll Number: " << student.rollNumber << endl;
            cout << "Marks: " << student.marks << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Student not found!" << endl;
    }
}

int main() {
    int choice;
    while (true) {
        cout << "Student Record System" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                cout << "Exiting program..." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
        cout << endl;
    }
}
