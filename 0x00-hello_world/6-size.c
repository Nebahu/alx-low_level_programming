#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return 0 (Success)
 */
int main(void)
{
   print("Size of a char: %d byte(s)\n", sizeof(char));
   print("Size of an int: %d bytes(s)\n", sizeof(int));
   print("Size of a long int: %d byte(s)\n", sizeof(long int));
   print("Size of a long long int: %d byte(s)\n", sizeof(long long int));
   print("Size of a float: %d byte(s)\n", sizeof(float));
   return (0);
}

