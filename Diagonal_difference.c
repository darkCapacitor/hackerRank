#include <stdio.h>
#include<stdlib.h>
#include <math.h>
int main() {
    int n;
    scanf("%d",&n);
    int a,s=0;
    for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)
            {
            scanf("%d",&a);
            if(i==j)
                {
                s=s+a;
            }
            if((i+j)==(n-1))
                {
                s=s-a;
            }
        }
    }
    s=abs(s);
            printf("%d",s);
    return 0;
}
