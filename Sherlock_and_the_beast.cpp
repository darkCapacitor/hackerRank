#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a=0,b=0;
        cin>>n;
        if(n%3==0)
            {
            a=n;b=0;
        }
        else{a=n;
        while(a%3!=0){
            a-=5;
            b+=5;
        }
        }
        if(b<=n){
        for(int i=0;i<a;i++)
            cout<<"5";
        for(int i=0;i<b;i++)
            cout<<"3";
        cout<<endl;
        }
        else
            cout<<"-1"<<endl;   
    }
    return 0;
}
