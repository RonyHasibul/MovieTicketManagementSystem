#include<stdio.h>
#include "login.h"
void Log_In(void) // CODES USED FOR LOGIN
{
    char user_name[100]; // array and strings for taking username
    long long int pass;
    printf("\t\n\nEnter  LOGIN INFO -->\n");
    printf("USERNAME: ");
    scanf("%s", &user_name[100]);
    printf("PASSWORD: ");
    scanf("%lld", &pass);
    int system(const char *_cls);

    FILE *c_details; // FILE AND POINTERS
    c_details = fopen("info.txt", "a");
    fprintf(c_details, "USERNAME: %s\nPASSWORD: %lld\n\n\n", user_name, pass);
    fclose(c_details);
    printf("|USERNAME|: %s\n|PASSWORD|: %lld\n", user_name, pass);
    printf("\n\n\t|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n");
    printf("\t YOUR ARE SUCCESSFULLY LOGINED\n\n");
    printf("\t\t\t<<Enjoy Your Movie>>\n");
    printf("\t|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n");
    printf("\n\nPress any key to MAIN MENU");


}
