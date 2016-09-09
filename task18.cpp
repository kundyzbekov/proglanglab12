#include <iostream>
#include <cmath>
using namespace std;
int main()
{

   cout<<"Enter the magnitudes"<<endl;
   double x,y,z,a,b;
   cin>>x>>y>>z;
   double n,d;
   n=(1+y)*(x+y);
   d=exp(-x-2)+1;
   a=n/d;
   cout<<"a= "<<a<<endl;
   double q,w;
   q=1+cos(y-2);
   w=0.5*(pow(x,4))+pow(sin(z),2);
   b=q/w;
   cout<<"b= "<<b<<endl;










 system("pause>nul");
 return 0;
}