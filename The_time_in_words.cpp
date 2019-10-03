#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;


int main() {
    map<int, string> tiw;
    tiw = {{1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}, {5, "five"}, {6, "six"}, {7, "seven"}, {8, "eight"},
          {9, "nine"}, {10, "ten"}, {11, "eleven"}, {12, "twelve"}, {13, "thirteen"}, {14, "fourteen"}, 
           {15, "quarter past"}, {16, "sixteen"}, {17, "seventeen"}, {18, "eighteen"}, {19, "nineteen"},         
           {20, "twenty"}, {30, "half past"}, {45, "quarter to"}};
    int h, m;
    cin>>h;
    cin>>m;
    if(m==1)
    {cout<<tiw[m]<<" minute past "<<tiw[h];
     return 0;
    } 
    if(m<=30 && m!=1)
    {
        if(m==30 || m==15)
            cout<<tiw[m]<<" "<< tiw[h];
        else if(m==0)
            cout<<tiw[h]<<" "<<"o' clock";
        else if(m<=20)
            cout<<tiw[m]<<" minutes past "<<tiw[h];
        else 
            cout<<tiw[m-m%10]<<" "<<tiw[m%10]<<" minutes past "<<tiw[h];
    }
    else
    {
        if(m==45)
            cout<<tiw[m]<<" "<<tiw[h+1];
        else if(m>=40)
            cout<<tiw[60-m]<<" minutes to "<<tiw[h+1];
        else
            cout<<tiw[(60-m)-(60-m)%10]<<" "<<tiw[(60-m)%10]<<" minutes to "<<tiw[h+1];
    }
    
    return 0;
}
