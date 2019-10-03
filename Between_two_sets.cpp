#include<iostream>
#include<math.h>
using namespace std;
int gcd(int a, int b)
{   
    if(a==0)
        return b;
    return (gcd(b%a, a));
}
int lcm(int a, int b)
{
    return ((a*b)/gcd(a,b));
}
int main()
{
    int n, m, l;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    l=1;
    for(int i=0;i<n;i++)
    {  
        l= lcm(a[i],l);
        
        
    }
  // cout<<l<< " ";
    int c=0;
    int p =b[0];
    for(int i =1;i<m;i++)
        p=gcd(p, b[i]);
   // cout<<p;
    for(int i=l;i<=p;i+=l)
    {
        if(p%i==0)
        {c++;
        }
    }
    
    
    
    cout<<c;
    return 0;
}

            
        
        