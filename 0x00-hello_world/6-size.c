#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main()
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a chara: %1u byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %1u byte(s)\n", (unsigned long) sizeof(b));
printf("size of a long int: %1u  byte(s)\n", (unsigned long )sizeof(c));
printf("size of a long long int: %1u byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %1u byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
