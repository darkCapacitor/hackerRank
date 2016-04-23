#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
    char a[100],b[100]="",l=0;
    scanf(" %[^\n]s",a);
    for(int i=0;i<strlen(a);i++){
        if(a[i]!=' ')
        b[l++]=a[i];
    }
    int r,c;
    r=floor(sqrt(l));c=ceil(sqrt(l));
    for(int i=0;i<c;i++){
        for(int j=i;j<l;j=j+c){
            if(j<l)
            cout<<b[j];
        }
        cout<<" ";
    }
	return 0;
}
