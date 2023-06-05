/* 
Input Format
5

Constraints
zero

Output Format
5 5 5 5 5
4 4 4 4 
3 3 3
2 2 
1
*/

#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--){     
        for(j=i;j>=1;j--){  
            printf("%d ",i); 
        }
        printf("\n");
    }     
}
