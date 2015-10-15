#include <iostream> 
#include <string> 
#include <stdlib.h>
using namespace std;
double randomDouble(int floor, int ceiling)
{
  double r = (double) rand() / (double) RAND_MAX;
  return floor + r * (ceiling - floor);
}
void simulateCollision(int n, int maxAngle, int maxVelocity)
{
  double ang1,ang2,v1,v2,temp;
  for (int i = 0; i < n; i++)
    {
      ang1 = randomDouble(0,maxAngle);
      v1 = randomDouble(0,maxVelocity);
      ang2 = randomDouble(0,maxAngle);
      v2 =randomDouble(0,maxVelocity);
      cout << "Before Collision" <<endl;
      cout << "Velocity of Particle 1: "<<v1<<endl;
      cout << "Angle of Particle 1: "<<ang1<<endl;
      cout << "Velocity of Particle 2: "<<v2<<endl;
      cout << "Angle of Particle 2: "<<ang2<<endl;
      temp = ang1;
      ang1 = ang2;
      ang2 = temp;
      temp = v1;
      v1=v2;
      v2=temp;
      cout <<"After Collision" <<endl;
      cout <<"Velocity of Particle 1: "<<v1<<endl;
      cout <<"Angle of Particle 1: "<<ang1<<endl;
      cout <<"Velocity of Particle 2: "<<v2<<endl;
      cout <<"Angle of Particle 2: "<<ang2<<endl;
    }
}
int main(){
  simulateCollision(20,360,1000);
  return 0;
}
