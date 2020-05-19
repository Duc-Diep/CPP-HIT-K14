#include <iostream>
#include<math.h>
using namespace std;

int main()
{
   int n;
   int i=1;
   int tc=0,tl=0;
   do
   {
       cout<<"nhap n:";
       cin>>n;
       if(n<11 || n>99999)
       {
           cout<<"nhap lai n!\n";
       }
   }while(n<11 || n>99999);
   while(i<=n)
   {
       if(i%2==0)
       {
           tc+=i;
       }else
       {
           tl+=i;
       }++i;
   }cout<<"tong tat ca cac so le tru di tat ca so chan la:"<<tl-tc;
}
