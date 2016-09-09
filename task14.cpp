#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    
     cout<<"enter the magnitudes of sides"<<endl;
     double a,b,c,m1,m2,m3;
     cin>>a>>b>>c;
     m1=0.5*(sqrt(2*(b*b+c*c)-a*a));
     cout<<"m1 is "<<m1<<endl;
     m2=0.5*(sqrt(2*(a*a+c*c)-b*b));
     cout<<"m2 is "<<m2<<endl;
     m3=0.5*(sqrt(2*(a*a+b*b)-c*c));
     cout<<"m3 is "<<m3<<endl;









  system("pause>nul");
  return 0;
}