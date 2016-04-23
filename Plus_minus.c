#include <stdio.h>
int main() {
    int n;
    float x=0,y=0,z=0;
    scanf("%d",&n);
    int a;
    for(int i=0;i<n;i++)
        {
        scanf("%d",&a);
        if(a>0)
            x++;
        else if(a<0)
            y++;
            else
            z++;
        
    }
    printf("%f\n%f\n%f",x/n,y/n,z/n);  
    return 0;
}
