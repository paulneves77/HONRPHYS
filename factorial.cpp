#include <iostream>
//this program will calculate and display n! for the first 10 integers


using namespace std;

int main() {
  //beginning of main loop, this is where we do all the computations

  for(int n = 1; n<11; n++) {
    //this says that we will be handling a variable n which is an
    //integer and will go from 1 to 10 in steps of 1
    
    int fact_val = 1;
    //this initializes the variable fact_val which
    //will be used to calculate the factorials

    //the above for loop just described which number we are taking the
    //factorial, so the next loop actually calculates the factorial

    for(int i=n; i>0; i--) {
      //this says we will consider all i's from n to 1

      fact_val *= i;
      //this takes fact_val (which starts as 1) and multiplies
      //it successively by each integer between 1 and n, thus creating n!

    }//end factorial calculation
    
    cout << n << "! = " << fact_val << endl;
    //this displays the value of the most recently calculated factorial
  
  }//end of calculation of all factorials

}//end of main
