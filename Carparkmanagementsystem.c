#include <stdio.h>

#define MAX 50

int st[MAX], top=-1;

void push(int st[], int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);

int main(int argc, char *argv[]) {
    int val, option;
    do {
        printf("\n***** MAIN MENU *****");
        printf("\n 1. Add a car to the parking lot");
        printf("\n 2. Remove a car from the parking lot");
        printf("\n 3. Display the status of the parking lot");
        printf("\n 4. EXIT");
        printf("\n Enter your option: ");
        scanf("%d", &option);
        switch(option) {
            case 1:
                printf("\n Enter the license number of the car to be added to the parking lot: ");
                scanf("%d", &val);
                push(st, val);
                break;
            case 2:
                val = pop(st);
                if(val != -1)
                    printf("\n The license number of the car removed from the parking lot is: %d", val);
                break;
            case 3:
                printf("\n The status of the parking lot is: ");
                display(st);
                break;
        }
    }while(option != 4);
    return 0;
}

void push(int st[], int val) {
    if(top == MAX-1) {
        printf("\n PARKING LOT IS FULL");
    }
    else {
        top++;
        st[top] = val;
    }
}

int pop(int st[]) {
    int val;
    if(top == -1) {
        printf("\n PARKING LOT IS EMPTY");
        return -1;
    }
    else {
        val = st[top];
        top--;
        return val;
    }
}

void display(int st[]) {
    int i;
    if(top == -1)
        printf("\n PARKING LOT IS EMPTY");
    else {
        for(i=top;i>=0;i--)
            printf("\n %d",st[i]);
    }
}

