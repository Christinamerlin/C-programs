/*
Check Wheather given number is prime or not. The Number is Prime print "PRIME" not an prime print "NOT PRIME"

Input Format
29

Constraints
Zero

Output Format
PRIME
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,c,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }

    if(c<=2){
        printf("PRIME");
    }
    else{
        printf("NOT PRIME");
    }
    return 0;
}
