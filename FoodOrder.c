#include <stdlib.h>
#include <stdio.h>
#define MASALA_PAPAD 5.99
#define BIRYANI 3.99
#define ORANGE_JUICE 4.99
#define CHICKEN_WRAP 5.99
#define BUTTER_CHICKEN 4.99
#define PANEER_TM 6.99

main(){

    int choice = 0;
    double totalPrice = 0;

    printf("Welcome to Two Seasons restaurant!\n");
    printf("May I take your order? \n\n");

    do{
        printf("Menu: \n\n");
        printf("1. Masala Papad      AED%.2lf \n", MASALA_PAPAD);
        printf("2. Biryani        AED%.2lf \n", BIRYANI);
        printf("3. Orange Juice     AED%.2lf \n", ORANGE_JUICE);
        printf("4. Chicken Wrap AED%.2lf \n", CHICKEN_WRAP);
        printf("5. Butter Chicken      AED%.2lf \n", BUTTER_CHICKEN);
        printf("6. Paneer Tikka Masala     AED%.2lf \n", PANEER_TM);
        printf("7. Exit\n\n");
        printf("Enter an item: ");
        scanf("%i", &choice);

        switch(choice){
        case 1:
            totalPrice += MASALA_PAPAD;
            break;
        case 2:
            totalPrice += BIRYANI;
            break;
        case 3:
            totalPrice += ORANGE_JUICE;
            break;
        case 4:
            totalPrice += CHICKEN_WRAP;
            break;
        case 5:
            totalPrice += BUTTER_CHICKEN;
            break;
        case 6:
            totalPrice += PANEER_TM;
            break;
        case 7:
            printf("Than you for ordering at Two Seasons Restaurant! \n");
            break;
        default:
            printf("*** Error:  This is not on the menu. \n");
            break;
        }

        printf("Total so far: AED%.2lf\n\n", totalPrice);

    } while (choice != 7);

    printf("Your order is AED %.2lf \n\n", totalPrice);
    printf("Thank you for coming to Two Seasons Restaurant.\n");
    printf("Have a nice day!.\n\n");

    system("pause");
}
