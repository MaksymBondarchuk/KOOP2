// KOOP2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "business_trip.h"

using namespace std;

int main()
{
	const auto bt1 = business_trip("Donald", "Trump", "President", date(3, 6, 2018), 3, (double)25);
	const auto bt2 = business_trip(bt1);
	const auto bt3 = bt2;

	cout << bt1 << endl;
	cout << bt2 << endl;
	cout << bt3 << endl;
	cout << (bt1 == bt2) << endl;
	cout << (bt1 != bt2) << endl;

    return 0;
}

