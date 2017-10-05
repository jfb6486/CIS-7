#include <iostream>

using namespace std;

int main()
{
	// Variables
	int userEntry = 0;
	char userEntryTwo = '\0'; 
	bool keepLoop = false;

	do {
		cout<<"Please enter a number"<<endl;	
		cin>>userEntry;
	
		if(userEntry%2==0){
			cout<<"User entry was even."<<endl;
		} 
		else if(userEntry%1==0){
			cout<<"User entry was odd."<<endl;
		}
		else{
			cout<<"Entry was not an interger" <<endl;
		}	
		cout<<"Would you like to repeat?(y for yes, q for no)"<<endl;
		cin>>userEntryTwo;

		if(userEntryTwo=='y') {
			keepLoop = true;
		}
		else if(userEntryTwo=='q'){
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
