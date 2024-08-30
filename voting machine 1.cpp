#include <iostream>

int main() {
    int choice;
    
    std::cout << "Welcome to the Voting Machine!" << std::endl;
    std::cout << "Please choose your symbol to vote:" << std::endl;
    std::cout << "1. Lotus" << std::endl;
    std::cout << "2. Hand" << std::endl;
    std::cout << "3. NOTA (None of the Above)" << std::endl;
    
    std::cout << "Enter your choice (1, 2, or 3): ";
    std::cin >> choice;
    
    switch (choice) {
        case 1:
            std::cout << "You have voted for Lotus." << std::endl;
            break;
        case 2:
            std::cout << "You have voted for Hand." << std::endl;
            break;
        case 3:
            std::cout << "You have voted for NOTA (None of the Above)." << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
    }
    
    return 0;
}
