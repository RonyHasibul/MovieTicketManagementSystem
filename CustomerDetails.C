#include <cstdio>
void mainmenu(void);
struct Customer
{
    char full_name[100];
    long long int phone;
};

void CustomerDetails(void)
{
    struct Customer customer;

    printf("\n\nINPUT CUSTOMER INFO-->\n");
    printf("Full Name: ");
    scanf("%s", customer.full_name);
    printf("Phone number: ");
    scanf("%lld", &customer.phone);
    int system(const char *_cls);
    printf("\n\nYOUR FOLLOWING DETAILS ARE MENTIONED BELOW-->\n\n");

    FILE *CustomerDetails;
    CustomerDetails = fopen("Booking.txt", "a");
    fprintf(CustomerDetails, "Ticket FOR: %s\nPHONE NUMBER: %lld\n\n\n", customer.full_name, customer.phone);
    fclose(CustomerDetails);
    printf("|FULL NAME|: %s\n|PHONE NUMBER|: %lld\n", customer.full_name, customer.phone);
    printf("\n\n\t|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n");
    printf("\t  Your Ticket is ready!! Please wait for a minute for printing!\n\n");
    printf("\t\t\t<<Thank You for choosing StrangeFLix>>\n");
    printf("\t|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n");
    printf("\n\nPress any key to return to the MAIN MENU");
    
    mainmenu();
        
}
