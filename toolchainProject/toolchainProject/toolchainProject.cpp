// toolchainProject.cpp : Program that implements simple pocket calculator
// with unit tests.
// Authors: Markkula & Mattila
// Date: 28.01.2018

#include "stdafx.h"
#include <stdio.h>

#include "unitTests.h"
#include "pocketcalculator.h"

int main()
{

	while (1) {

			printf("Select wanted mathematic operation by typing corresponding number of the operation\n");

			printf("1 - Sum:\n");
			printf("2 - Subtraction:\n");
			printf("3 - Product:\n");
			printf("4 - Quotient:\n");
			printf("\n");

			int case1;
			scanf_s("%d", &case1);

			int n1, n2;

			switch (case1)
			{

			case 1:

				printf("Enter 'number 1': ");
				scanf_s("%d", &n1);
				printf("Enter 'number 2': ");
				scanf_s("%d", &n2);
				sum(n1, n2);
				break;

			case 2:

				printf("Enter 'number 1': ");
				scanf_s("%d", &n1);
				printf("Enter 'number 2': ");
				scanf_s("%d", &n2);
				subtraction(n1, n2);
				break;

			case 3:

				printf("Enter 'number 1': ");
				scanf_s("%d", &n1);
				printf("Enter 'number 2': ");
				scanf_s("%d", &n2);
				product(n1, n2);
				break;

			case 4:

				printf("Enter 'number 1': ");
				scanf_s("%d", &n1);
				printf("Enter 'number 2': ");
				scanf_s("%d", &n2);
				quotient(n1, n2);
				break;

			default:
				printf("Invalid selection\n");
			}

		printf("\n");
	}
	return 0;
}

