
#include <stdio.h>
/* This program takes a decimal number, converts it to binary, and then counts the odd number (1) the exsicts in the
 * binary.
 */
/*
 * count_bits function is a function that takes input, and counts the odd bits the exist in the number, and returns it.
 */
long int count_bits(long int num) {
    int counter = 0;
    while (num) {
        if (num % 2 == 1) { // modulo used to figure out whether a number is odd or not
            counter++;
        }
        num >>= 1;
    }
    return counter;

}
/*
 * main function
 */
int main()
{
    long int num;

    printf("Enter an integer in decimal number:\n"); //enter input
    scanf("%ld", &num); // receiving input
    printf("%ld is the number of odd bits in the binary number system.\n", count_bits(num)); //sending input to function

    return 0;
}