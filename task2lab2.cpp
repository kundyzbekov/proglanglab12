#include <iostream>
#include <cmath>
using namespace std;
int main()
{

   cout<<"Enter the magnitudes"<<endl;
   double R,k,h,l,p,v,s;
   cin>>R>>k>>h;
   p=3.14; 
   v=((3.14*h)/3)*(R*R+k*k+R*k);
   cout<<"V= "<<v<<endl;
   l=sqrt(h*h+(R-k)*(R-k));
   s=3.14*l*(R+k)+3.14*(R*R+k*k);
   cout<<"s= "<<s<<endl;




   system("pause>nul");
   return 0;
}