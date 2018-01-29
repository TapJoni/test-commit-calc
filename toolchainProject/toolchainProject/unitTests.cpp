#include <stdio.h>
#include "stdafx.h"

#include "pocketcalculator.h"

void runTests() {

	//Answer should be 9
	sum(3, 6);
	//Program should printf input is not valid and return to mainscreen
	sum('k', 12);
	//Program should printf input is not valid and return to mainscreen
	sum(-343, 'xssd');

	//Program should printf that you can't divide with 0 and return to mainscreen
	quotient(-23, 0);
	//Answer should be 0
	quotient(0, 2);

	//Answer should be -25
	subtraction(-23, 2);
	//Program should printf input is not valid and return to mainscreen
	subtraction('X', -12312);
	//Program should printf input is not valid and return to mainscreen
	subtraction(444242, 'ASD');

	//Answer should be 46
	product(-23, 2);
	//Program should printf input is not valid and return to mainscreen
	product('B', 132112);
	//Program should printf input is not valid and return to mainscreen
	product(-345544, 'D');



}
