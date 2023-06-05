/*
The Magic Castle, the home of the Academy of Magical Arts at California has organized the great 'WonderWorks Magic Show'.Renowned magicians were invited to mystify and thrill the crowd with their world’s spectacular magic tricks.The Ticket booking for the show started 2 days prior and there were different types of tickets offered with different fare. The show organizers wanted to place a scanning machine at the entrance of the venue for scrutiny. The machine will take the input of a character denoting the various ticket types and displays the equivalent ticket type of the given character. There are 5 types of tickets,each of which is denoted by a character(both upper case and lower case). Please find the equivalent strings for the characters. E or e - Early Bird D or d - Discount V or v - VIP S or s - Standard C or c - Child Write a piece of code for the scanning machine that will take the input of a character and print the equivalent string.

Input Format:The first line of the input is one of the character that denotes one of ticket types. Sample Input : e

Constraints
No

Output Format:Output should display the equivalent ticket type of the character.Refer sample input and output for formatting specifications. 
Sample Output : 
Early Bird
*/

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
