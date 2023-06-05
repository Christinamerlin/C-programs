/*
Richie and Riya are participating in a game called "Lucky pairs" at the Annual Game Fair in their Company. As per the rules of the contest, two members form a team and Richie initially has the number A and Riya has the number B.There are a total of N turns in the game, and Richie and Riya alternatively take turns. In each turn the player whose turn it is, multiplies his or her number by 2. Richie has the first turn. Suppose after the entire N turns, Richie’s number has become C and Riya’s number has become D. The final score of the team will be the sum of the scores (C+D) of both the players after N turns.Write a program to facilitate the quiz organizers to find the final scores of the teams. Input Format:The line of input contains 3 integers A, B,and N. Output Format:Output a single line which contains the integer that gives the final score of the team which will be the sum of the scores of both the players after N turns. Refer sample input and output for formatting specifications.

Input Format
1 2 1

Constraints
Zero

Output Format
4
*/
#include <stdio.h>

int main() {
    int a,b,n;
    scanf("%d %d %d", &a, &b, &n);

    int turn;
    int Richie = a, Riya = b;

    for (turn = 1; turn <= n; turn++) {
        if (turn % 2 == 1) {
            Richie *= 2;
        } else {
            Riya *= 2;
        }
    }

    int finalScore = Richie + Riya;
    printf("%d\n", finalScore);

    return 0;
}
