/*Agalya wants to write a program that takes a global variable N as input and calculates the difference between the sum of square roots of integers from 1 to N and the square root of the sum of integers from 1 to N. 



Help her implement two functions (sumOfSquareRoots and squareRootOfSum) for the calculations. Ensure the output displays the result with two decimal places.



Example



If N = 4

Sum of square roots = √1 + √2 + √3 + √4 = 1.000000 + 1.414214 + 1.732051 + 2.000000 = 6.146265

Square root of the sum = √(1+2+3+4) = 3.162278

Difference = 6.146265 - 3.162278 = 2.983987 which after rounding off it results in 2.98.



Note: Use sqrt() from math library to calculate the square root.

Input format :
The input consists of an integer N.

Output format :
The output prints "Difference: " followed by a double value, representing the required difference, rounded to two decimal places.*/

#include <stdio.h>
#include <math.h>

// Global variable 'N'
int N;

double sumOfSquareRoots() {
    double sum = 0.0;

    for (int i = 1; i <= N; i++) {
        sum += sqrt(i);
    }

    return sum;
}

double squareRootOfSum() {
    double sum = 0.0;

    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    return sqrt(sum);
}

int main() {
    scanf("%d", &N);

    double difference = sumOfSquareRoots() - squareRootOfSum();
    printf("Difference: %.2lf\n", difference);

    return 0;
}

