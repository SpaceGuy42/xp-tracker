#include <stdio.h>


int main() {
    char name[50];
    printf("Enter your character name: ");
    scanf("%s", name);
    printf("Welcome, %s! Let's track your XP.\n", name);
    
    int xp = 0;                                             //Total XP the user has earned
    int tasks = 0;                                          //Number of tasks entered by the user

    while (1) {                                             //Infine Loop: runs until broken manually
        printf("Enter tasks completed (O to exit): ");
        scanf("%d", &tasks);                                //Take user input and store it in tasks

        if (tasks == 0) {
            break;                                          //Exit the Loop if user inputs 0
        }

        xp += tasks * 10;                                   //Add XP based on number of tasks
        printf("XP Gained: %d | Total XP: %d\n", tasks * 10, xp);
    }

    printf("Mission complete. Total XP earned: %d\n", xp);
    return 0;                                               //Exit program
}

