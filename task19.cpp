#include <iostream>
#include <cmath>
using namespace std;
int main() {
   
   cout<<"enter the magnitudes"<<endl;
   double x,y,z,a,b;
   cin>>x>>y>>z;
   double n,d;
   n=2*cos(x-(M_PI/6));
   d=0.5+(pow(sin(y),2));
   a=n/d;
   cout<<"a= "<<a<<endl;
   b=1+((pow(z,2))/(3+0.2*(pow(z,2))));
   cout<<"b= "<<b<<endl;
 


  system("pause>nul");
  return 0;
}
  