#include <stdio.h>

int main() {
    float vol,r,h;
    /*Prompt the user to enter the radius value*/
    printf("Enter radius: ");
    /*Converts the radius value to a string value*/
    scanf("%f", &r);
    /*Prompt the user to enter the Height value*/
    printf("Enter Height: ");
    /*Converts the Height input value to a string*/
    scanf("%f", &h);
    /*This is the formula for calculating the volume of a cylinder*/
    vol=(22*r*r*h)/7;
    /*To display the total volume calculated*/
    printf("Total Volume is: %0.4f\n",vol);
    return 0;
    }
