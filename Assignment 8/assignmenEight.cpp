#include <iostream>

/// Count Prime #’s up to user entry and Prove by exhaustion ///

using namespace std;

bool primeCheck( int );

int main()
{
	// variables
	int userEntry = 0;
	int userGuess = 0;
	bool keepLoop = false;
	int loopEntry = 0;
	
	do{
		// Delcared in loop for count from start each run
		int primeCounter = 0;
	
		cout<<"Enter limit for counter " << endl;
		cin>>userEntry;	

		cout<<"Guess on how many primes between primes between 0 and " << userEntry <<"?\n";
		cin>>userGuess;
		
		for( int i = 0; i <= userEntry; i++ ){
			if(primeCheck( i )){
				cout<<"Prime #: " << i << endl;
				primeCounter++;
			} // end if	
		} // end for

		cout<<"Prime Counter: "<<primeCounter<<endl;
		cout<<"User Guess: "<<userGuess<<endl;
		
		cout<<"Sooo about your guess..."<<endl;

		if( primeCounter == userGuess ){
			cout<<"You were right broooo"<<endl;
		}// end if
		else{
			cout<<"Its not looking good brotha"<<endl;
		}// end else		

		cout<<"Run again(1=y/2=n)?"<<endl;
		cin>>loopEntry;
	
		if( loopEntry == 1 ){
			keepLoop=true;
		} // end if
		else{
			keepLoop=false;
		} // end else

	}while(keepLoop); // end do while
				
	// exit stage left
	return 0;
}

bool primeCheck( int n )
{	
	for( int i = 2; i * i <= n; i++) {
		if(n%i == 0){
			return false;
		}// end if 
	} // end for loop
	return true;
} // end primeCheck
