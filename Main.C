#include <stdio.h>



struct Contact {

    char name[50];

    char phone[15];

};



int main() {

    struct Contact c1, c2, c3;

    char press;



    printf("---- WOMEN SAFETY ALERT SYSTEM ----\n");



    // Enter contacts

    printf("\nEnter Contact 1 Name: ");
    scanf("%49s", c1.name);
    printf("Enter Contact 1 Phone: ");
    scanf("%14s", c1.phone);

    printf("\nEnter Contact 2 Name: ");
    scanf("%49s", c2.name);
    printf("Enter Contact 2 Phone: ");
    scanf("%14s", c2.phone);




    printf("\nEnter Contact 3 Name: ");
    scanf("%49s", c3.name);
    printf("Enter Contact 3 Phone: ");
    scanf("%14s", c3.phone);

    printf("\n-----------------------------------\n");
    printf("Press 'E' or '1' to trigger Emergency SOS Alert: ");
    scanf(" %c", &press);

    if (press == 'E' || press == 'e' || press == '1') {
        printf("\n===================================\n");
        printf("!!! EMERGENCY ALERT ACTIVATED !!!\n");
        printf("===================================\n");
        printf("Sending location & emergency message to saved contacts...\n\n");

        printf("Alert sent to Contact 1: %s (%s)\n", c1.name, c1.phone);
        printf("Alert sent to Contact 2: %s (%s)\n", c2.name, c2.phone);
        printf("Alert sent to Contact 3: %s (%s)\n", c3.name, c3.phone);
        printf("\nHelp is on the way! Stay safe.\n");
    } else {
        printf("\nSystem exited without sending alert.\n");
    }

    return 0;
}

