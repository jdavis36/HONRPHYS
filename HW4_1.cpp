#include <iostream>
using namespace std;
int main(){
  int factorial = 1;  //Since factorial 0 = 1 i wanted factorials value to start at 1
  for(int n = 0; n < 10; n++) //loops through values of n from 0 to 10
    { factorial = 1; //resets factorial to 1
      for(int i = 0; i < n ; i++){//loops through values of i from 0 to n
	factorial += factorial * i; //sets factorial equal to iteself * the next integer
      }
      cout << factorial <<endl; // prints out the factorial of n
    }
  return 0;
}
