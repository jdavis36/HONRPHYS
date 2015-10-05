#include <iostream>
using namespace std;
int main(){
  for(int i = 1; i<101; i++) // loops through integers from 1 to 100
    {
      cout <<"factors of " <<i; // prints out factors of the integer
      for( int k = 1 ; k < i; k++)// loops from 1 to i
	{
	  if( i % k == 0) //checks to see if i is divisible by k  
	    {
	      cout<<" "<<k<<"," ; //prints out the factors
	    }
	}
      cout<<endl; // ends the line
    }
  return 0;
}
