#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <cstdio>
#include<dos.h>

#include "splashscreen.h"
#include "login.h"
#include "booking_options.h"
#include "moviemenu.h"
#include "customerdetails.h"
void startbooking(void);

void mainmenu();

int main(){
    Splash_Screen();
    Log_In();
    mainmenu();
    return 0;
}

void mainmenu(){
    system("cls");
    printf("\t|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n");
    printf("\t|\tWELCOME to StrangeFlix!\t|\n\t|\n");
    printf("\t| 1.Boring! Wanna watch some movies?  \t\t|\n");
    printf("\t| 2.NOT bORING! EXIT.  \t\t\t\t|\n");
    printf("\t|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n");

    int Choice;
    printf("\n\n\t <<...Enter your choice...>> \n");
    scanf("%d",&Choice);

    if(Choice==1){
        startbooking();
    }
    else if(Choice==2){
        system("cls");
        printf("\t|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n");
        printf("\t|\t\tTHANK YOU!!\t\t\t|\n");
        printf("\t|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n");
    }
}
