/* 
The much-awaited event at the entertainment industry every year is the "Screen Awards" organized on Dec 25 to honour the Artists for their professional excellence in Cinema. The Organizers decided to launch an online portal to facilitate easy booking Award show’s ticket.They want to provide a option for bulk booking portal and there are many discounts announced. Write a program to help the Organizers to create the portal as per the requirement given below.Given the ticket cost as 'X'.If the number of tickets purchased is < 50,no discount.If the number of tickets purchased is between 50 & 100(both inclusive),then 10% discount is offered.If the number of tickets purchased between 101 & 200(both inclusive),20% discount is offered.If the number of tickets purchased is between 201 & 400(both inclusive),30% discount is offered.If the number of tickets purchased is between 401 & 500(both inclusive),40% discount is offer.If the number of tickets purchased is > 500,then 50% discount is offered.
Input Format
100 5

Constraints
Zero

Output Format
500.00
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num,cost,d;
    float t;
    scanf("%d %d",&cost,&num);
    if(num<50){
        t=cost*num;
        printf("%.2f",t);
    }
    else if(num>=50 && num<=100){
        d=cost*num*0.1;
        t=(cost*num)-d;
        printf("%.2f",t);
    }
    else if(num>=101 && num<=200){
        d=cost*num*0.2;
        t=(cost*num)-d;
        printf("%.2f",t);
    }
    else if(num>=201 && num<=400){
        d=cost*num*0.3;
        t=(cost*num)-d;
        printf("%.2f",t);
    }
    else if(num>=401 && num<=500){
        d=cost*num*0.4;
        t=(cost*num)-d;
        printf("%.2f",t);
    }
    else if(num>500){
        d=cost*num*0.5;
        t=(cost*num)-d;
        printf("%.2f",t);
    }
}
    
