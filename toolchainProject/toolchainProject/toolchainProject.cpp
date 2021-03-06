// toolchainProject.cpp : Program that implements simple pocket calculator
// with unit tests.
// Authors: Markkula & Mattila
// Date: 28.01.2018

#include "stdafx.h"
#include <stdio.h>
#include <gtest\gtest.h>
#include <iostream>

#include "pocketcalculator.h"

void main(int argc, char* argv[])
{
	/*Definitons for running tests */
	::testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();

	// new comment

	// new comment added 4.2.2018 1406
	// new comment added 4.2.2018 1409
	// new comment added 4.2.2018 1542

	// new comment added 4.2.2018 1546

	// new comment added 4.2.2018 1627


	// New comments !!!!!!!

	while (1) {

			printf("Select wanted mathematic operation by typing corresponding number of the operation\n");

			printf("1 - Sum:\n");
			printf("2 - Subtraction:\n");
			printf("3 - Product:\n");
			printf("4 - Quotient:\n");
			printf("\n");

			int case1;
			scanf_s("%d", &case1);

			int n1, n2, n3;

			switch (case1)
			{

			case 1:

				printf("Enter 'number 1': ");
				scanf_s("%d", &n1);
				printf("Enter 'number 2': ");
				scanf_s("%d", &n2);
				n3 = sum(n1, n2);
				printf("%d\n", n3);
				break;

			case 2:

				printf("Enter 'number 1': ");
				scanf_s("%d", &n1);
				printf("Enter 'number 2': ");
				scanf_s("%d", &n2);
				subtraction(n1, n2);
				n3 = subtraction(n1, n2);
				printf("%d\n", n3);
				break;

			case 3:

				printf("Enter 'number 1': ");
				scanf_s("%d", &n1);
				printf("Enter 'number 2': ");
				scanf_s("%d", &n2);
				product(n1, n2);
				n3 = product(n1, n2);
				printf("%d\n", n3);
				break;

			case 4:

				printf("Enter 'number 1': ");
				scanf_s("%d", &n1);
				printf("Enter 'number 2': ");
				scanf_s("%d", &n2);
				quotient(n1, n2);
				n3 = quotient(n1, n2);
				if(n2 == 0)
					printf("Cant divide by 0 \n\n");
				else
					printf("%d\n", n3);

				break;

			default:
				printf("Invalid selection\n");
			}

		printf("\n");
	}
}

