// AN electric is contested by five condidates. The candidates are numbered 1 to 5 and a voting is done by marketing 
// The condidates number in a bailot paper. write a c++ program to read the bailot and count the votes cast for each
// condidates using an array variable count. In case, a number read is outside the range 1 to 5 the bailot should be
// considered as a 'bailot', and the program should aslo count the number of spoilt bailot 
                              // program:- 1B LAB ON C++
#include <iostream>
using namespace std;
int main(){
	int voteCount;
	int ballot[6] = {0};
	cout << "Enter total count of votes : ";
	cin >> voteCount;
	while(voteCount--) {
		int vote;
		cout << "Cast your vote : ";
		cin >> vote;
		switch(vote>=1 && vote<=5) {
			case 1:
				ballot[vote]++;
				break;
				default:
				ballot[0]++;
				}	
	        	}
		for(int i=1; i<6; i++) {  
			cout << "vote casted for candidate number " << i << " : "  << ballot[i] << endl;
		}
		cout << "Null vote count : " << ballot[0] << endl;
		return 0;
		}
	