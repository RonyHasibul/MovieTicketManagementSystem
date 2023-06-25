#include<stdio.h>
#include<stdlib.h>
#include "booking_options.h"
void SuperHero(void);
void Horror(void);
void mainmenu(void);
void startbooking(void)
{
    system("cls");
    printf("\t|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n");
    printf("\t|\tWhat genre of movies do you want to watch?\t\t|\n\t|\n");
    printf("\t| 1. Superhero Movies \t\t\t\t\t|\n");
    printf("\t| 2. Horror Movies    \t\t\t\t\t|\n");
    printf("\t| 3.All Movies \t\t\t\t\t|\n");
    printf("\t| 4. Back to Main Menu \t\t\t|\n");
    printf("\t|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n");

    int Choice;
    printf("\n\n\n\t <<...Enter your choice..>> \n");
    scanf("%d", &Choice);

    if (Choice == 1)
    {
        system("cls");
        SuperHero();
    }
    else if (Choice == 2)
    {
        system("cls");
        Horror();
    }
    else if (Choice == 3)
    {
        system("cls");

        FILE *all_bookings;
        char h;
        all_bookings = fopen("booking.txt", "r");
        while ((h = fgetc(all_bookings)) != EOF)
        {
            printf("%c", h);
        }
        if (getc())
        {
            startbooking();
        }
    }
    else if (Choice == 4)
    {
        system("cls");
        mainmenu();
    }
    else
    {
        printf("\t\t ERROR 404!CHOOSE FROM THE OPTIONS(1-4)!!\n\n");
        startbooking();
    }
}
