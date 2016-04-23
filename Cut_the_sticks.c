#include <stdio.h>
#include<limits.h>
int small(int *a,int n){
	int i,min;
	min=INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(a[i]<min&&a[i]>0)
		min=a[i];
	}
	return min;
}
int subtract(int *a,int n)
    {   int f=0,l=0,b;
        b=small(a,n);
    	for(int i=0;i<n;i++)
        { if(a[i]>0)
          {
            a[i]=a[i]-b;
            f=1;
            l++;
          }
        }
        if(l>0)
        printf("%d\n",l);
        if(f==1)
        {
        	subtract(a,n);
        }
        return 0;
    }

int main() {
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    subtract(a,n);    
    return 0;
}
