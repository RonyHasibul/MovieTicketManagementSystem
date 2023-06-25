#include<stdio.h>
#include "moviemenu.h"
void CustomerDetails(void);
void mainmenu(void);
void SuperHero(void)
{
    int choice, again, quantity;
    double total = 0;
    printf("\t|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n");
    printf("\t|\tSuper Hero Movies!!.....\t\t\t\t\t|\n\t|\n");
    printf("\t|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n");
    printf("\t|\tMOVIES AVAILABLE FOR YOU TO WATCH--->       \t\t|\n\t|\n");
    printf("\t| 1.Dr. Strange in the multiverse of Madness 500tk  \t\t|\n");
    printf("\t| 2.Spider-Man: Across the Spider-Verse  450tk  \t\t|\n");
    printf("\t| 3.Back to Main Menu     \t\t\t\t\t|\n");
    printf("\t|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n");
    printf("\n\n\t <<..Enter your choice..>> \n");

    char m;
    FILE *superheromoviesmenu;
    superheromoviesmenu = fopen("menu.txt", "rt");
    while ((m = getc(superheromoviesmenu)) != EOF)
    {
        printf("%c", m);
    }
    fclose(superheromoviesmenu);
    printf("\n\n\n Enter you choice for booking:\n\n ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("How many tickets you want to buy? : \n\n");
        scanf("%d", &quantity);
        total = total + 500 * (quantity);
        printf("\n\n Press 1 for Booking again. \n");
        printf("\t Press 2 for paying. ");
        printf("\n\n\t<<...Enter Your Choice...>>\n");
        scanf("%d", &again);

        if (again == 1)
        {
            printf("\n\n");
            system("cls");
            SuperHero();
        }
        else if (again == 2)
        {
            printf("You need to pay : %.3ftk\n\n", total);
        }

        int Total = total;
        FILE *TOT;
        TOT = fopen("booking.txt", "a");
        fprintf(TOT, "\n Total Cost: %dtk\n", Total);
        fclose(TOT);

        CustomerDetails();
        system("cls");
    }
    else if (choice == 2)
    {
        printf("How many tickets you want to buy? : \n\n");
        scanf("%d", &quantity);
        total = total + 450 * (quantity);
        printf("\n\n Press 1 for Booking again. \n");
        printf("\t Press 2 for paying. ");
        printf("\n\n\t<<...Enter Your Choice...>>\n");
        scanf("%d", &again);

        if (again == 1)
        {
            printf("\n\n");
            system("cls");
            SuperHero();
        }
        else if (again == 2)
        {
            printf("You need to pay : %.3ftk\n\n", total);
        }

        int Total = total;
        FILE *TOT;
        TOT = fopen("booking.txt", "a");
        fprintf(TOT, "\n Total Cost: %dtk\n", Total);
        fclose(TOT);

        CustomerDetails();
        system("cls");
    }
    else if (choice == 3)
    {
        system("cls");
        mainmenu();
    }
    else
    {
        printf("\t\tError! Choose from the options above(1-3)!\n\n");
        if (fgetchar())
        {
            system("cls");
        }
        SuperHero();
    }
}
void Horror(void)
{
    int choice, again, quantity;
    double total = 0;
    printf("\t|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n");
    printf("\t|\tHorror Movies!!......\t\t|\n\t|\n");
    printf("\t|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n");
    printf("\t|Horror movies available for to make you fear!-->|\n\t|\n");
    printf("\t| 1.Wrong Turn 5 350.00tk  \t\t\t|\n");
    printf("\t| 2.Final Destination 1 400.00tk\t\t\t|\n");
    printf("\t| 3.Final Destination 2 450.OOtk  \t\t\t\t|\n");
    printf("\t| 4.Final Destination 5 400.00tk  \t\t\t\t|\n");
    printf("\t| 5.Saw 7 450.00tk \t\t\t\t|\n");
    printf("\t| 6.IT-2017 5OO.OOtk  \t\t\t\t|\n");
    printf("\t| 7.Back to Main Menu  \t\t\t\t|\n");
    printf("\t|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n");
    printf("\n\n\t <<..Enter your choice..>> \n");

    char m;
    FILE *Horror;

    Horror=fopen("menu.txt","rt");
    while((m=getc(Horror))!=EOF)
    {
        printf("%c",m);
    }
    fclose(Horror);
    printf("\n\n\n Enter your HORROR Choice: \n");
    scanf("%d",&choice);
    if (choice == 1)
    {
        printf("How many tickets you want to buy? : \n\n");
        scanf("%d", &quantity);
        total = total + 350 * (quantity);
        printf("\n\n Press 1 for Booking again. \n");
        printf("\t Press 2 for paying. ");
        printf("\n\n\t<<...Enter Your Choice...>>\n");
        scanf("%d", &again);

        if (again == 1)
        {
            printf("\n\n");
            system("cls");
            SuperHero();
        }
        else if (again == 2)
        {
            printf("You need to pay : %.3ftk\n\n", total);
        }

        int Total = total;
        FILE *TOT;
        TOT = fopen("booking.txt", "a");
        fprintf(TOT, "\n Total Cost: %dtk\n", Total);
        fclose(TOT);

        CustomerDetails();
        system("cls");
    }
    else if (choice == 2)
    {
        printf("How many tickets you want to buy? : \n\n");
        scanf("%d", &quantity);
        total = total + 400 * (quantity);
        printf("\n\n Press 1 for Booking again. \n");
        printf("\t Press 2 for paying. ");
        printf("\n\n\t<<...Enter Your Choice...>>\n");
        scanf("%d", &again);

        if (again == 1)
        {
            printf("\n\n");
            system("cls");
            SuperHero();
        }
        else if (again == 2)
        {
            printf("You need to pay : %.3ftk\n\n", total);
        }

        int Total = total;
        FILE *TOT;
        TOT = fopen("booking.txt", "a");
        fprintf(TOT, "\n Total Cost: %dtk\n", Total);
        fclose(TOT);

        CustomerDetails();
        system("cls");
    }
    else if (choice == 3)
    {
        printf("How many tickets you want to buy? : \n\n");
        scanf("%d", &quantity);
        total = total + 450 * (quantity);
        printf("\n\n Press 1 for Booking again. \n");
        printf("\t Press 2 for paying. ");
        printf("\n\n\t<<...Enter Your Choice...>>\n");
        scanf("%d", &again);

        if (again == 1)
        {
            printf("\n\n");
            system("cls");
            SuperHero();
        }
        else if (again == 2)
        {
            printf("You need to pay : %.3ftk\n\n", total);
        }

        int Total = total;
        FILE *TOT;
        TOT = fopen("booking.txt", "a");
        fprintf(TOT, "\n Total Cost: %dtk\n", Total);
        fclose(TOT);

        CustomerDetails();
        system("cls");
    }
    else if (choice == 4)
    {
        printf("How many tickets you want to buy? : \n\n");
        scanf("%d", &quantity);
        total = total + 400 * (quantity);
        printf("\n\n Press 1 for Booking again. \n");
        printf("\t Press 2 for paying. ");
        printf("\n\n\t<<...Enter Your Choice...>>\n");
        scanf("%d", &again);

        if (again == 1)
        {
            printf("\n\n");
            system("cls");
            SuperHero();
        }
        else if (again == 2)
        {
            printf("You need to pay : %.3ftk\n\n", total);
        }

        int Total = total;
        FILE *TOT;
        TOT = fopen("booking.txt", "a");
        fprintf(TOT, "\n Total Cost: %dtk\n", Total);
        fclose(TOT);

        CustomerDetails();
        system("cls");
    }
    else if (choice == 5)
    {
        printf("How many tickets you want to buy? : \n\n");
        scanf("%d", &quantity);
        total = total + 450 * (quantity);
        printf("\n\n Press 1 for Booking again. \n");
        printf("\t Press 2 for paying. ");
        printf("\n\n\t<<...Enter Your Choice...>>\n");
        scanf("%d", &again);

        if (again == 1)
        {
            printf("\n\n");
            system("cls");
            SuperHero();
        }
        else if (again == 2)
        {
            printf("You need to pay : %.3ftk\n\n", total);
        }

        int Total = total;
        FILE *TOT;
        TOT = fopen("booking.txt", "a");
        fprintf(TOT, "\n Total Cost: %dtk\n", Total);
        fclose(TOT);

        CustomerDetails();
        system("cls");
    }
    else if (choice == 6)
    {
        printf("How many tickets you want to buy? : \n\n");
        scanf("%d", &quantity);
        total = total + 450 * (quantity);
        printf("\n\n Press 1 for Booking again. \n");
        printf("\t Press 2 for paying. ");
        printf("\n\n\t<<...Enter Your Choice...>>\n");
        scanf("%d", &again);

        if (again == 1)
        {
            printf("\n\n");
            system("cls");
            SuperHero();
        }
        else if (again == 2)
        {
            printf("You need to pay : %.3ftk\n\n", total);
        }

        int Total = total;
        FILE *TOT;
        TOT = fopen("booking.txt", "a");
        fprintf(TOT, "\n Total Cost: %dtk\n", Total);
        fclose(TOT);

        CustomerDetails();
        system("cls");
    }
    else if (choice == 7)
    {
        system("cls");
        mainmenu();
    }
    else
    {
        printf("\t\tError! Choose from the options above(1-3)!\n\n");
        if (fgetchar())
        {
            system("cls");
        }
        SuperHero();
    }
}
