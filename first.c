#include <stdio.h>
int main(){
    printf("\n Welcome to my calulator \n");
    printf("\n Enter 1 for addition, Enter 2 for subtraction, Enter 3 for multiplication, Enter 4 for division : ");
    
    int calcCase;
    int x, y;
    scanf("%d", &calcCase);
    printf("\n Enter first and second value separated by space : ");

    switch(calcCase){
        case 1:
            scanf("%d %d", &x, &y);
            printf("\n The Sum of numbers is :  %d", x + y);
            break;
        case 2:
            scanf("%d %d", &x, &y);
            printf("\n The Substraction of numbers is :  %d", x - y);
            break;
        case 3:
            scanf("%d %d", &x, &y);
            printf("\n The Multiplication of numbers is :  %d", x * y);
            break;
        case 4:
            // The division returns float value so 
            float z;
            scanf("%d %d", &x, &y);
            z = (float) x / (float) y;
            printf("\n The Division of numbers is :  %.5f", z);
            break;
        default: 
            printf("\n Entered a wrong digit or mismatched input \n ");
            break;
    }
    return 0;
}