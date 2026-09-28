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

    scanf("%s", c1.name);

    printf("Enter Contact 1 Phone: ");

    scanf("%s", c1.phone);



    printf("\nEnter Contact 2 Name: ");

    scanf("%s", c2.name);

    printf("Enter Contact 2 Phone: ");

    scanf("%s", c2.phone);



    printf("\nEnter Contact 3 Name: ");

    scanf("%s", c3.name);
