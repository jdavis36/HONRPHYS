//Jeff Davis, Julian Leal, Matt Bissonette

#include <iostream> 
#include <string> 
#include <stdlib.h>
using namespace std;
//the function below generates a random number in the range of floor to ceiling. The rand() function generates a "random" decimal
//between 0 and RAND_MAX an arbitrary constant in cstdlib, which is then divided by RAND_MAX to make a decimal between 0 and 1
//which r is set to. Then to ensure that the random number is between ceiling and floor, r is multiplied by the difference of
//ceiling and floor, which is essentially the standard "random" number algorithm, and that product is then added to floor, just
//in case floor isn't zero.
double randomDouble(int floor, int ceiling)
{
  double r = (double) rand() / (double) RAND_MAX;
  return floor + r * (ceiling - floor);
}
void simulateCollision(int n, int maxAngle, int maxVelocity)
{
  double ang1,ang2,v1,v2,temp;
  for (int i = 0; i < n; i++)//iterates the number of times you want to simulate a collision, n.
    {
      //the next 8 lines initalize the angles and velocities to random values using a floor of 0 and a ceiling of whatever
      //arguments the user puts in for maxAngle and maxVelocity
      ang1 = randomDouble(0,maxAngle);
      v1 = randomDouble(0,maxVelocity);
      ang2 = randomDouble(0,maxAngle);
      v2 =randomDouble(0,maxVelocity);
      //these statements print the inital values of the angels and velocities
      cout << "Before Collision" <<endl;
      cout << "Velocity of Particle 1: "<<v1<<endl;
      cout << "Angle of Particle 1: "<<ang1<<endl;
      cout << "Velocity of Particle 2: "<<v2<<endl;
      cout << "Angle of Particle 2: "<<ang2<<endl;
      temp = ang1;//placeholder variable
      ang1 = ang2;//switching the 2 angles
      ang2 = temp;
      temp = v1;//placeholder variable
      v1=v2;//switching the 2 velocities
      v2=temp;
      //these lines print the final values of the angles and velocities
      cout <<"After Collision" <<endl;
      cout <<"Velocity of Particle 1: "<<v1<<endl;
      cout <<"Angle of Particle 1: "<<ang1<<endl;
      cout <<"Velocity of Particle 2: "<<v2<<endl;
      cout <<"Angle of Particle 2: "<<ang2<<endl;
    }
}
int main(){
  simulateCollision(20,360,1000);//calls the function with a number of simulations conducted equal to 20, an intitial maximum
  //angle of 360 degrees, and a maximum initial velocity of 1000 m/s
  return 0;
}
