#include <iostream>
#include <string>
#include <vector>

struct Contact {
    std::string name;
    std::string email;
    std::string phone;
};

void addContact(std::vector<Contact>& contacts) {
    Contact newContact;
    std::cout << "Enter name: ";
    std::getline(std::cin, newContact.name);
    std::cout << "Enter email: ";
    std::getline(std::cin, newContact.email);
    std::cout << "Enter phone number: ";
    std::getline(std::cin, newContact.phone);
    contacts.push_back(newContact);
    std::cout << "Contact added successfully!" << std::endl;
}

void displayContacts(const std::vector<Contact>& contacts) {
    if (contacts.empty()) {
        std::cout << "No contacts found." << std::endl;
        return;
    }
    std::cout << "Contacts:" << std::endl;
    for (const auto& contact : contacts) {
        std::cout << "Name: " << contact.name << std::endl;
        std::cout << "Email: " << contact.email << std::endl;
        std::cout << "Phone: " << contact.phone << std::endl;
        std::cout << "-------------------------" << std::endl;
    }
}

int main() {
    std::vector<Contact> contacts;
    int choice;
    do {
        std::cout << "Contact Management System" << std::endl;
        std::cout << "1. Add Contact" << std::endl;
        std::cout << "2. Display Contacts" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        switch (choice) {
            case 1:
                addContact(contacts);
                break;
            case 2:
                displayContacts(contacts);
                break;
            case 3:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
    } while (choice != 3);

    return 0;
}
