// Problem1-2-1_FindAbsoluteValue.c : Defines the entry point for the console application.
//

#include "stdafx.h"

#pragma warning(disable : 4996)


int main()
{
	double number;
	scanf("%lf", &number);
	double absolute = FindAbsoluteValue(number);
	printf("%lf", absolute);
    return 0;
}

