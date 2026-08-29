
// BUILDING AN ATM SIMULATOR IS A FANTASTIC WAY TO PRATISE NESTING
//  1UNLOCK PATTERN
#include <stdio.h>

int main()
{
    // introduce important information
    int saved_pin = 2367; // Initiallization
    int enterpin, choice;
    int balance = 5000;

    printf(" enter the saved_pin");
    scanf("%d", &enterpin);

    if (enterpin == 2367){
  printf(" welcome to your profile\n"); //{using if else condition}
     
       // Display option   ( using do while syntax; post text syntax)
    do
    {
        printf("---ATM MENU--");
        printf("1.check balance\n");
        printf("2.Deposit Money");
        printf("3.withdraw money\n");
        printf("4.EXIT\n");
        printf("5. choose an  option ");
        scanf("%d", &choice);

        switch (choice){
            case1:
            printf("current balance:%d", balance);
            
            
        }
    } while (choice != 4);
    
        printf(" THANKYOU FOR USING OUR ATM\n");
 } else {
        printf(" try again");
    }

    // this menu display at least one

    return 0;
}

