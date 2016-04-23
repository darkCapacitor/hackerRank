 #include <stdio.h> 
 int main() {  
   int t, n, c, m;  
   scanf("%d", &t);  
   while ( t-- )  
   {  
     scanf("%d%d%d",&n,&c,&m);  
     int answer = 0;    
     answer=n/c;  
     if(answer>=m)  
     {  
       int t=answer;  
       do{  
         t-=m;  
         answer++,t++;  
       }while(t>=m);  
     }  
     printf("%d\n",answer);  
   }  
   return 0;  
 } 
