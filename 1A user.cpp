#include <iostream>   //Program:- 1A LAB ON C++ 
#include <string>
using namespace std;

int main()
{
	int users;
	cout << "Enter the number of users: ";
	cin >> users;
	
	string name;
	int units;
	double totalcharge = 0.0;
	
	for (int i = 1; i <= users; i++){
		cout << "Enter name of user" << i << ": ";
		cin >> name;
		cout << "Enter number of units consumed by " << name << ": ";
		cin >> units;
		
		double charge = 0.0;
		
		if (units <= 100) {
			charge = units * 0.50;
		}
		else if ( units <= 300){
			charge = (100 * 0.50) + ((units - 100) * 0.80);
			
					}
		else{                                          // part :- 02                    
			charge = (100 * 0.50) + (200 * 0.80) +((units - 300) * 0.90);
		}
		
		// Apply the minimum charge of Rs. 50.00
		if (charge < 50.0) {
			charge = 50.0;
		}
		totalcharge += charge;
		
		cout << "Charge for " << name << ": Rs." << charge << endl;
	}
	// Check if the total charge exceeds Rs. 300.00 and apply extcharge 
	if ( totalcharge > 300.0){
		double extcharge = 0.15 * totalcharge;
		totalcharge += extcharge;
		cout << "Total amount with extchage: Rs. " << totalcharge << endl;
		
	}
	else{
		cout << "Total amount: Rs. " << totalcharge << endl;
	}
	 return 0;
}