#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a;
    scanf("%c",&a);
    if(a=='e' | a=='E'){
        printf("Early Bird");
    }
    else if(a=='d' | a=='D'){
        printf("Discount");
    }
    else if(a=='v' | a=='V'){
        printf("VIP");
    }
    else if(a=='s' |a=='S'){
        printf("Standard");
    }
    else if(a=='c' |a=='C'){
        printf("Child");
    }
    
    return 0;
}
