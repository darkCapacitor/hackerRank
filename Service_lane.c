#include <stdio.h>
int main() {
    int n,t;
    scanf("%d%d",&n,&t);
    int a[n];
   for(int i=0;i<n;i++)
      scanf("%d",&a[i]);   	
    while(t--)
    {   int s,e,l=3;
    	scanf("%d%d",&s,&e);
    	for(int i=s;i<=e;i++)
    	{  if(a[i]<l)
       	   l=a[i];
     	}
    	printf("%d\n",l);
    }   
    return 0;
}
