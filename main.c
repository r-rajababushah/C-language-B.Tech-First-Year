#include <stdio.h>
#include <math.h>

void Question1();
void Question2();
void Question3();

int main(){

    // UNCOMMENT QUESTION TO SEE OUTPUT IN TERMINAL AFTER CODE RUN
    // Question1();
    // Question2();
    Question3();

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

    int simpleIntrest, compoundIntrest, principleAmount, rateOfIntrest, time; 

    // Getting user input for amount, intrest rate, and time
    printf("\n Enter principle amount , rate of intrest and time in one line separated by space : ");
    scanf("%d %d %d", &principleAmount, &rateOfIntrest, &time);

    simpleIntrest = (principleAmount * time * rateOfIntrest)/100;

    compoundIntrest = (principleAmount * pow((1 + rateOfIntrest / 100), time) )- principleAmount;

    printf("\n The Simple Intrest Is: %d", simpleIntrest);
    printf("\n The Compound Intrest is : %d ", compoundIntrest);

}

// write a program to calcualte the area and circumference of a circle.
void Question3(){
    int radius, area, circumference;
    printf("\n Enter the radius of circle : ");
    scanf("%d", &radius);

    // area calculation
    area = 22 / 7 * radius * radius;

    // circumference calculation 
    circumference = 2 * 22 / 7 * radius;

    // print the area and circumference
    printf("\n The area of circle is : %d and the circumference of circle is : %d ", area, circumference);

}