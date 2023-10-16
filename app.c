#include <stdio.h>
#include<conio.h>
void main(){
    int pin, pin1=2222, c=1, ch, amt, blc=5000;
    printf("Welcome to Pulse Bank\n");
    start:
    printf("Enter your PIN\n");
    scanf("%d", &pin);
    if(pin == pin1){
        printf("Please select your choice\n");
        printf("1. Deposit \n2. Withdraw \n3. Check Balance \n4. Change PIN \n");
        scanf("%d",&ch);
        switch(ch) {
            case 1:
                printf("Enter deposit amount\n");
                scanf("%d", &amt);
                if(amt <= 20000) {
                    blc = blc + amt;
                    printf("Your new balance is: %d\n",blc);


                }else{
                    printf("Invalid, maximum amount is 20,000\n");
                }
                break;
            case 2 :
                printf("Enter withdraw amount\n");
                scanf("%d", &amt);
                if(amt <= 20000) {
                    if(amt <= blc) {
                        blc = blc - amt;
                        printf("Your new balance is: %d",blc);
                    } else {
                        printf("Insufficient balance!\n");
                    }
                }else{
                    printf("Invalid, maximum amount is 20,000\n");
                }
                break;
            case 3:
                printf("Your account balance is %d\n", blc);
                break;
            case 4:
                printf("Enter your new PIN\n");
                scanf("%d", &pin1);
                printf("Your PIN is updated successfully..!\nLog in again\n");
                goto start;
                break;
        }
    } else {
        printf("Invalid PIN, please Enter the correct PIN\n") ;
        if(c<3) {
            c++;
            goto start;
        }
    }
    printf("Press 1 to continue\n");
    scanf("%d", &ch);
    if(ch==1) {
        goto start;
            } else {
                printf("Thank you for using Pulse Bank services");
        }
}
