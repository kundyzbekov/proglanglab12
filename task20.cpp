#include <iostream>
#include <cmath>
using namespace std;
int main()
{

  cout<<"enter the magnitudes"<<endl;
  double x,y,z,a,b,n,d;
  cin>>x>>y>>z;
  n=(1+(pow(sin(x+y),2))+x*(2+(abs(x-2*x/(1+x*x*y*y)))));
  d=2+(abs(x-2*x/(1+x*x*y*y)));
  a=n/d;
  b=pow(cos(atan(1/z)),2);
  cout<<"a= "<<a<<endl;
  cout<<"b= "<<b<<endl;        


  system("pause>nul");
  return 0;
}