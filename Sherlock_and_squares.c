#include <stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
        int a,b,k,d=0;
		scanf("%d%d",&a,&b);
        k=sqrt(a);
        if(k*k!=a)
            {
            k++;
        }
		while(k*k<=b)
		{
			d++;
			k++;
		}		
	    printf("%d\n",d);
	}   
    return 0;
}
