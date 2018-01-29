#include "pocketcalculator.h"
#include <stdio.h>
#include "stdafx.h"
#include <ctype.h>

int sum(int nmr1, int nmr2)
{
	
	if (nmr1 >= 'a'|| nmr1 >= 'A' || nmr2 >= 'a' || nmr2 >= 'A')
	{
		printf("Input(s) not valid\n\n");
		return 0;
	}

	else {
		printf("%d\n", nmr1 + nmr2);
	}

	return 0;
}

int subtraction(int nmr1, int nmr2)
{
	if (nmr1 >= 'a' || nmr1 >= 'A' || nmr2 >= 'a' || nmr2 >= 'A')
	{
		printf("Input(s) not valid\n\n");
		return 0;
	}
	else {
		printf("%d\n", nmr1 - nmr2);
	}

	return 0;

}

int product(int nmr1, int nmr2)
{
	if (nmr1 >= 'a' || nmr1 >= 'A' || nmr2 >= 'a' || nmr2 >= 'A')
	{
		printf("Input(s) not valid\n\n");
		return 0;
	}
	else {
		printf("%d\n", nmr1 * nmr2);
	}

	return 0;

}

int quotient(int nmr1, int nmr2)
{
	if (nmr1 >= 'a' || nmr1 >= 'A' || nmr2 >= 'a' || nmr2 >= 'A')
	{
		printf("Input(s) not valid\n\n");
		return 0;
	}
	else if (nmr2 == 0) {

		printf("Cant divide by 0 \n\n");
		return 0;

	}
	else {
		printf("%d\n", nmr1 / nmr2);
	}
	return 0;
}
