#include <iostream>
using namespace std;
int main(){
  int factorial = 1;
  for(int n = 0; n < 10; n++)
    { factorial = 1;
      for(int i = 0; i < n ; i++){
	factorial += factorial * i;
      }
      cout << factorial <<endl;
    }
}
