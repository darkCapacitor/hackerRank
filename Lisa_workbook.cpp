#include <iostream>
using namespace std;
int main() {
    int n,k,pg=1,c=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++){
        int l=0;
        while(a[i]>0){
            if((pg>(l*k)&&(pg<=((l+1)*k)&&a[i]>=k))||(pg>(l*k)&&(pg<=(l*k+a[i])&&a[i]<k)))
            {c++;
            }
            a[i]=a[i]-k;
           pg++; l++;          
        }
    }
    cout<<c;
	return 0;
}
