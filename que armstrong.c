/*
Given an integer A, check if it is an Armstrong number of not. An Armstrong number is a number that is the sum of its own digits each raised to the power of the number of digits.

Input Format
371

Constraints
1 <= A <= 109

Output Format
Yes
*/
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
