#include <stdio.h>
#include <stdlib.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--)
        {
        int n,a,b,s,d;        
        scanf("%d%d%d",&n,&a,&b);
        if(a>b)
            s=(n-1)*b;
        else
            s=(n-1)*a;
        d=abs(a-b);
        if(d>0)
        for(int i=0;i<n;i++)
            {            
            printf("%d ",s);
            s=s+d;            
        }
        else
            printf("%d",s);
        printf("\n");
        
    }   
    return 0;
}
