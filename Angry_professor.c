#include <stdio.h>
int main() {
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
       int N,K,j,a,l=0;
        scanf("%d%d",&N,&K);
        
        for(int j=0;j<N;j++)
        {    scanf("%d",&a);
         if(a<=0)
             l++;
         }
        if(l>=K)
            printf("NO\n");
        else
            printf("YES\n");
    }  
    return 0;
}
