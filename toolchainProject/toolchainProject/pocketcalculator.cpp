#include <stdio.h>
#include "stdafx.h"
#include <ctype.h>

int sum(int nmr1, int nmr2)
{
	return (nmr1 + nmr2);
}

int subtraction(int nmr1, int nmr2)
{
	return (nmr1 - nmr2);
}

int product(int nmr1, int nmr2)
{
	return (nmr1 * nmr2);
}

int quotient(int nmr1, int nmr2)
{

	if (nmr2 == 0) {


		return 0;
	}
	else
		return (nmr1 / nmr2);
}
