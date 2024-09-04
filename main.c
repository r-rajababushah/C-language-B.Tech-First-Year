#include <stdio.h>

void Question1();

int main(){

    // UNCOMMENT QUESTION TO SEE OUTPUT IN TERMINAL AFTER CODE RUN
    Question1();

    return 0;
}

// write a program that accepts the marks of 5 subjects and find the sum and percentage marks obtained by the studnet.
void Question1(){
    int subj1, subj2, subj3, subj4, subj5, sum, percentage;

    // Read the marks in one line for all subjetcs
    printf("\n Enter the marks of 5 subjects : ");
    scanf("%d %d %d %d %d", &subj1, &subj2, &subj3, &subj4, &subj5);

    // Calculate Sum and Print Sum
    sum = subj1 + subj2 + subj3 + subj4 + subj5 ;
    printf("\n The sum of marks is : %d ", sum);

    // Calcualate Percentage and Print Percentage
    percentage = (sum/5)*100;
    printf("\n The Percentage of marks is : %d ", percentage);

}

// write a program that calculate the simple intrest and compound intrest, The principle amount, rate of intrest and time are entered through the keybord.
void Question2(){
    int 
}