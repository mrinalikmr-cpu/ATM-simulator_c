
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
        printf("\n---ATM MENU--\n");
        printf("1.check balance\n");
        printf("2.Deposit Money\n");
        printf("3.withdraw money\n");
        printf("4.EXIT\n");
        printf("5. choose an  option ");
        scanf("%d", &choice);

        switch (choice)  {
            case 1:          // there must gap between case and no 
            printf("\ncurrent balance:%d", balance);
            break;
            case 2: {
            int deposit;    // to declare int inside case 2 use braces
            printf(" ENTER THE AMOUNT TO DEPOSIT");
            scanf("%d", &deposit);
            balance+=deposit;
            printf(" sucessfully deposit,  balance :%d",balance);
            break;
            }
            
        }
    } while (choice != 4);
    
        printf(" THANKYOU FOR USING OUR ATM\n");
 } else {
        printf(" try again");
    }

    // this menu display at least one

    return 0;
}

