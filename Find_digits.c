#include <stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int n,r=1,num,l=0;
		scanf("%d",&num);
		n=num;
		while(n>0){		
		r=n%10;
		n=n/10;
		if(r!=0)
		if(num%r==0)
		 l++;		
	    }
	    printf("%d\n",l);
	}  
    return 0;
}
