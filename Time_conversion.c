#include <stdio.h>
int main() {
    int a,b,c;
    char d[2];
    scanf("%d:%d:%d%s",&a,&b,&c,d);
    if(d[0]=='P'&&a!=12)
    a=a+12;
    else if(d[0]=='A'&&a==12)
        a=0;
     printf("%02d:%02d:%02d",a,b,c);    
    return 0;
}
