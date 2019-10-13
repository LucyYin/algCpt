#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
   
    int a;
    cin >> a;
    
    int b;
    b=2;
    while(a>b)
     {  
         if (a%b==0)
         {
             cout<<"no"<<endl;
             break;
         }
         b=b+1;
     }
     if(b>=a&&a!=1)
     {
         cout<<"yes"<<endl;
     }
   
    
    return 0;
}

