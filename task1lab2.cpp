#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  cout<<"Enter the magnitudes of sides"<<endl;
  double a,b,c,u,s,v,h;
  cin>>a>>b>>c;
  u=(a+b+c)/2;
  s=sqrt(u*(u-a)*(u-b)*(u-c));
  cout<<"Enter the height"<<endl;
  cin>>h;
  v=(s*h)/3;
  cout<<"u="<<u<<endl;
  cout<<"s="<<s<<endl;
  cout<<"v="<<v<<endl;

  
  



 

  system("pause>nul");
  return 0;
}