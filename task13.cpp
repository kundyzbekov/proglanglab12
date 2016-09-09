#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    
    cout<<"enter the magnitudes of sides"<<endl;
    double a,b,c,s,u,h1,h2,h3;
    cin>>a>>b>>c;
    u=(a+b+c)/2;
    s=sqrt(u*(u-a)*(u-b)*(u-c));
    h1=(2*s)/a;
    cout<<"h1 is "<<h1<<endl;
    h2=(2*s)/b;
    cout<<"h2 is "<<h2<<endl;
    h3=(2*s)/c;
    cout<<"h3 is "<<h3<<endl;










  system("pause>nul");
  return 0;
}
