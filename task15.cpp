#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   cout<<"enter the magnitudes of sides"<<endl;
   double a,b,c,l1,l2,l3;
   cin>>a>>b>>c;
   l1=(sqrt(b*c*((pow((b+c),2))-(pow(a,2)))))/(b+c);
   cout<<"l1 is "<<l1<<endl;
   l2=(sqrt(a*c*((pow((a+c),2))-(pow(b,2)))))/(a+c);
   cout<<"l2 is "<<l2<<endl;
   l3=(sqrt(a*b*((pow((a+b),2))-(pow(c,2)))))/(a+b);
   cout<<"l3 is "<<l3<<endl;











 system("pause>nul");
 return 0;
}