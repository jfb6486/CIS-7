#include <iostream>

using namespace std;

int main()
{
	// Variables
	int userEntry = 0;
	int userEntryTwo = 0; 
	bool keepLoop = false;

	do {
		cout<<"Please enter a number"<<endl;	
		cin>>userEntry;
	
		if(userEntry%2==0){
			cout<<"User entry was even."<<endl;
		} 
		else{
			cout<<"User entry was odd."<<endl;
		}
	
		cout<<"Would you like to repeat?(1 for yes, 2 for no)"<<endl;
		cin>>userEntryTwo;

		if(userEntryTwo==1) {
			keepLoop = true;
		}
		else if(userEntryTwo==2){
			keepLoop = false;
		}
		else {
			keepLoop = true;
			cout <<"Not a valid entry, repeating program." << endl;
		}
	} while(keepLoop);

	// Exit stage left
	return 0;
}
