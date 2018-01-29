#include "stdafx.h"
#include <gtest/gtest.h>
#include "pocketcalculator.h"

TEST(TestCalculator, TestSum) {

	/*Test sum function*/
	EXPECT_EQ(15, sum(10,5));
	EXPECT_EQ(-9, sum(-4, -5));

}


TEST(TestCalculator, TestSubtraction) {

	/*Test subtraction function*/
	EXPECT_EQ(5, subtraction(10, 5));
	EXPECT_EQ(10, subtraction(-40, -50));

}


TEST(TestCalculator, TestProduct) {


	/*Test product function*/
	EXPECT_EQ(18, product(9, 2));
	EXPECT_EQ(-72, product(-12, 6));
	EXPECT_EQ(51, product(-17, -3));

}


TEST(TestCalculator, TestQuotient) {

	/*Test quotient function*/
	EXPECT_EQ(0, quotient(10, 0));
	EXPECT_EQ(-20, quotient(-100, 5));
	EXPECT_EQ(15, quotient(31, 2));
	
}