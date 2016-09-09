#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    cout<<"Enter the three numbers"<<endl;
    double x,y,z,a,b;
    cin>>x>>y>>z;
    double n,d;
    n=sqrt(abs(x-1))-sqrt(pow(abs(y),1.0/3));
    d=1+0.5*(pow(x,2))+0.25*(pow(y,2));
    a=n/d;
    cout<<"a= "<<a<<endl;
    b=x*(atan(z)+exp(-x-3));
    cout<<"b= "<<b<<endl;









 system("pause>nul");
 return 0;
}