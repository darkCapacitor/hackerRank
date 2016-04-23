#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--)
        { int n,s=1,i;
         scanf("%d",&n);
         for(i=1;i<=n;i++)
             {
             if(i%2!=0)
                 s=s*2;
             else
                 s=s+1;
         }
         printf("%d\n",s);
        }         
    return 0;
}
