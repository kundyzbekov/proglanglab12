#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   cout<<"Write two numbers"<<endl;
   double a,b;
   cin>>a>>b;
   double amean,gmean;
   amean=abs((a+b)/2);
   gmean=sqrt(a*b);
   cout<<"Arithmetical mean is "<<amean<<endl;
   cout<<"Geometrical mean is "<<gmean<<endl;





  system("pause>nul");
  return 0;
}