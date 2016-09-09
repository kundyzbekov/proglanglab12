#include <iostream>
#include <cmath>
using namespace std;
int main()
{

      cout<<"write magnitudes of one leg and hypotenuse"<<endl;
      double a,b,c,r,u;
      cin>>a>>c;
      b=sqrt(pow(c,2)-pow(a,2));
      cout<<"b= "<<b<<endl;
      u=(a+b+c)/2;
      r=sqrt(((u-a)*(u-b)*(u-c))/u);
      cout<<"r is "<<r<<endl;










  system("pause>nul");
  return 0;
}