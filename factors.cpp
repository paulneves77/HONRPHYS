#include <iostream>
//this code will list all the factors of each
//number from 1 to 100

using namespace std;

int main() {
  //this loop will execute all the code required

  for(int n=1; n<=100; n++) {
    //this loop just tells us what number we are
    //going to find the factors of n

    cout << "The factors of " << n << " are: ";
    //begins displaying the output

    for(int i=1; i<=n; i++) {
      //now we will brute force calculate by checking
      //the modulo % of n for each 1 to n

      if(n%i == 0) {
	//if n%i is 0, then i is a factor of n
	
	cout << i << ", ";
	//writes a factor to the screen

      }//end of if statement
      
    }//finished calculating factors of n

      cout << endl;//formatting output

  }//finished calculating all the factors of all n's

}//end of main
