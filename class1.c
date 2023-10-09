#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

// Declaration and Initialization of variables
// int num1 = 12, num2 = 52;
// char num3 = 'd';
// float temp = 32.5, data = 52.2;
// double cel = 52.25;

// int main(int argc, char **argv)
// {
//     printf("Char_bit %d\n", CHAR_BIT);
// }

// const int radius = 12;
// const int pie = 3.14;
// int area;

// int main()
// {
//     area = pie * radius * radius;
//     printf("Area of circle is: %d ", area);
//     return 0;
// }

// const int length;
// const int breadth;
// int area;

// int main()
// {
//     printf("Enter length: ");
//     scanf("%d", &length);
//     printf("Enter breadth: ");
//     scanf("%d", &breadth);
//     area = length * breadth;
//     printf("Area is: %d ", area);
//     return 0;
// }

const int far;
const int cel;
int temp_far;
int temp_cel;

int main()
{
    printf("Enter temperature in Fahrenheit: ");
    scanf("%d", &far);
    temp_cel = ((far - 32) * 5) / 9;
    printf("Temperature in Celcius is: %d", temp_cel);
    printf("\nEnter temperature in Celcius: ");
    scanf("%d", &cel);
    temp_far = ((cel * 9) / 5) + 32;
    printf("Temperature in fahrenheit is: %d", temp_far);
    return 0;
}