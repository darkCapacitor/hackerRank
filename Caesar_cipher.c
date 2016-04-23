#include <stdio.h>
int main(){ int n,i=0,k;
            scanf("%d",&n);
            char a[n+1];
            scanf("%s%d",a,&k);
            k=k%26;
            while(a[i]!='\0')
                {if(a[i]<='z'&&a[i]>='a')
                  {
                      if(a[i]+k>'z')
                           a[i]=a[i]-26;
                    a[i]+=k;
                  }
                  else if(a[i]<='Z'&&a[i]>='A')
                      {
                      
                      if(a[i]+k>'Z')
                           a[i]=a[i]-26;
                      a[i]+=k;
                  }
                i++;
            }
            printf("%s",a);    
    return 0;
}
