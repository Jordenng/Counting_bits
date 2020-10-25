/*
 * C Program to Check if a given Bit Position is set to One or not
 */
#include <stdio.h>


unsigned short int count_odd_bits(unsigned short int number){
    int result;
    int count;
    int counter = 0;
    for (count = 0; count <= 16; count++)
        if (count & 1) {
            result = (number >> (count));
            if (result & 1) {
                counter++;
            }
        }
    return counter;
}
int main() {
    unsigned short int number;
    printf("Enter the unsigned short integer:\n");
    scanf("%hu", &number);

    while (number != EOF) {
        printf("%d is the number of odd bits in odd positions. \n", count_odd_bits(number));
        printf("\nEnter the unsigned short integer:\n");
        scanf("%hu",&number);
    }
}