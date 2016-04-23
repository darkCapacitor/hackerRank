#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--)
        {
        long int x,y,z,b,w,min,c;
        scanf("%ld%ld%ld%ld%ld",&b,&w,&x,&y,&z);
        if(x>y+z)
            {
            x=y+z;
        }
        else if(y>x+z)
            y=x+z;
        c=b*x+w*y;
        printf("%ld\n",c);
    }
    return 0;
}
