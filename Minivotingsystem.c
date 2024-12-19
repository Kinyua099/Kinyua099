#include <stdio.h>
#define MAX_CANDIDATES 5
// this part of the programme gives the maximum number of candidates than can be voted for
int main() {
    int votes[MAX_CANDIDATES] = {0};
    int i, choice;
//this part of the programme displays the welcoming statement
    printf("Welcome to GROUP F Voting System.vote for change!\n");
    printf("We have %d candidates: 1, 2, 3, 4, and 5. Enter the number as per the candidate of your choice. Enter -1 to finish voting and display results.\n", MAX_CANDIDATES);
//this is voting part of the programme
    while(1) {
        printf("Enter the number of the candidate you would like to vote for: ");
        scanf("%d", &choice);
        if(choice == -1) {
            break;
        } else if(choice >= 1 && choice <= MAX_CANDIDATES) {
            votes[choice - 1]++;
        } else {
            printf("Invalid choice. Please enter a number between 1 and %d, or -1 to finish.\n", MAX_CANDIDATES);
        }
    }
//this part of the programme displays the results of the votes casted
    printf("\nVoting Results are as follows:\n");
    for(i = 0; i < MAX_CANDIDATES; i++) {
        printf("Candidate %d: %d votes\n", i + 1, votes[i]);
    }
//this is the closing part of the programme
    return 0;
}

