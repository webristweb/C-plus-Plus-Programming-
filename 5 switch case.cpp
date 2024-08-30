#include <iostream> program :- 05 LAB ON C++
using namespace std;

int main() {
	char opper;
	float num1, num2;
	cout << " Enter the case: ";
	cin >> opper;
	cout << " Enter the first number: ";
	cin >> num1;
	 cout << " Enter the second number: ";
	cin >> num2;
		
		switch (opper){
			case '1':
				 cout << num1 << " + " << num2 << " = " << num1 + num2;
				 break;
		    case '2':
				 cout << num1 << " - " << num2 << " = " << num1 - num2;
				 break;
			case '3':
				 cout << num1 << " / " << num2 << " = " << num1 / num2;
				 break;
			case '4':
				 cout << num1 << " * " << num2 << " = " << num1 * num2;
				 break;
		    
		    	  
		}
		return 0;
}