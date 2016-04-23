#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,s=0,l=0;
    int *a;
    a=(int*) calloc(501,sizeof(int));
    scanf("%d",&n);
    a[500]=1;
    for(int i=1;i<=n;i++)
        {int t=0;
        for(int j=500;j>=500-l;j--)
        {
            a[j]=a[j]*i+t;
            t=a[j]/10;
            a[j]=a[j]%10;
        }
         while(t!=0){
             l++;
             a[500-l]=t%10;
             t=t/10;
         }
        }
    for(int i=500-l;i<=500;i++)
        printf("%d",a[i]);  
    return 0;
}
