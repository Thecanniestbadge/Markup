// Programmer:		Thecanniestbadge
// Date:			7/10/2023
// Program Name:	Markup
// Chapter:			Functions
// Description:		This program determines the markup of an item based on the wholesale cost and how much of percent markup the item has gotten. 

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

// Function 
double CalculateRetail(double wholesaleCost, double markupPercentage);
void DisplayOutput(double wholesaleCost, double markupPercentage, double retailPrice);

int main(void)
{
	// Constant and Variable Declarations
	double wholesaleCost = 0.0;
	double markupPercentage = 0.0;
	double retailPrice = 0.0;


	// *** Your program goes here ***
	printf("Enter the wholesale cost of an item: $");
	scanf("%lf", &wholesaleCost);
	printf("Enter the percent markup for the item: ");
	scanf("%lf", &markupPercentage);
	printf("\n"); // Blank line

	// *** PROCESSING *** 
	// retailPrice = wholesaleCost + (wholesaleCost * (markupPercentage / 100));
	retailPrice = CalculateRetail(wholesaleCost, markupPercentage);

	// *** OUTPUT ***
	DisplayOutput(wholesaleCost, markupPercentage, retailPrice);

	printf("\n"); // Blank line
	return 0;
} // end main()

// Retail Price Calculation Function
double CalculateRetail(double wholesaleCost, double markupPercentage)
{
	// Local Variables
	double markupDecimal = 0.0;
	double markupAmount = 0.0;
	double retailPrice = 0.0;

	// Calculate the retail price of an item based on its
	// wholesale cost and the markup 
	markupDecimal = markupPercentage / 100; // convert markup to decimal
	markupAmount = wholesaleCost * markupDecimal; // calculate the profit 
	retailPrice = wholesaleCost + markupAmount; // retail equals wholesale + profit

	// All-in-one line
	// retailPrice = wholesaleCost + (wholesaleCost * (markupPercentage / 100));

	return retailPrice; // return wholesaleCost * (1 + markupPercentage / 100);
}

void DisplayOutput(double wholesaleCost, double markupPercentage, double retailPrice)
{
	printf("The retail price of an item that has a wholesale cost of %.2lf\n", wholesaleCost);
	printf("and a markup of %.2lf%% is $%.2lf.\n", markupPercentage, retailPrice);

	return;
}