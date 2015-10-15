#include <iostream>
using namespace std;
int main(){
 double* p1 = new double(3.14);
  double* p2 = p1;
  /* Notice that we don't use the & operator here because p1 is pointer which means that it is already a memory adress */ 
  cout << "p1 points at " << p1 << "\n";
  cout << "*p1 = " << *p1 << "\n";
  cout << "p2 points at " << p2 << "\n";
  cout << "*p2 = " << *p2 << "\n";
  *p1 = *p1 * 2;
  /* We could also do '*p1 = *p2 * 2;' , '*p2 = *p2 * 2;' , or '*p2 = *p1 * 2;' */
  cout << "Now *p1 = " << *p1 << " and *p2 = " << *p2 << "\n";
  return 0;
}
