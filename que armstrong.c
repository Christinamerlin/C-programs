#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,temp,r,a;
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        r=temp%10;
        a=a+(r*r*r);
        temp=temp/10;
    }
    if(a==n){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
    
}
