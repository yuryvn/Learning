// stage2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	//int dev,product, x;
	//product = 5; x = 5; dev = 5;
	//product *= x++;
	//cout << product << " " << x;
	//product = 5; x = 5;
	//product /= ++x;
	//cout << product << " " << x;
	//cout << "inforgrafika";

	//ex 2.8----------------------------------------------------------------
	//int x, y, count=0, product=1;
	//cout << "Enter X\n";
	//cin >> x;
	//cout << "Enter Y\n";
	//cin >> y;
	//while (count < y){
	//	product *= x;
	//	count++;
	//}
	//cout << "x^y=" << product << "\n";

//operator switch; pokazyvaet chto budet bez break v case 3; snachal vypolnitsya case3, a zatem srazu sleduysuchii case
	//int x;
	//while ((x = (int)cin.get()) != EOF){
	//	switch (x)
	//	{
	//	case '1':{
	//		cout << "ya v pervoi vetke \n";
	//		break;
	//	}
	//	case '2':{
	//		cout << "ya vo vtoroi vetke \n";
	//		break;
	//	}
	//	case '3':
	//		cout << "ya v tret;ey vetke i hochu 4tuyu \n";
	//	case '4': {
	//		cout << "ya v chetvertoi vetke \n";
	//		break;
	//	}
	//	default:{
	//		cout << "strannii x " << x << "\n";
	//		break;
	//	}
	//	}
	//}
	//------------------------------------------------------------------------------------

	/*int counter = 0;
	float distance, cons, cons_per_dist, dist_total=0.0, cons_total=0.0;

	cout << "enter distance or EOF\n";
	cin >> distance;
	while (distance > 0.0){
		cout << "enter consumption\n";
		cin >> cons;
		cons_per_dist = cons / distance;
		cout << "Your consumption per mile is " << cons_per_dist << "\n";
		cons_total += cons;
		dist_total += distance;
		cout << "enter distance or EOF\n";
		cin >> distance;
	}
	cout << "your average consumption is " << dist_total / cons_total << "\n";*/

	//---------------------------------continue----------------------------------
	//int ping;
	//cin >> ping;
	//while (ping != -1){
	//	if ((ping != 1) && (ping != 2)){
	//		cout << "novalid character/number, enter 1 or 2, or -1 for exit\n";
	//		cin >> ping;
	//		continue;
	//	}
	//	cout << "ping=" << ping << "\n"<<"Enter new ping\n";
	//	cin >> ping;
	//}
	//-------------------------------------------------------------

	int a,b,c,k;
	for (a = 1; a <= 50; a++){
		for (b = 1; (b <= a); b++){
			k = b;
			for (c = 1; c <= k; c++){
				if ((b*b + c*c) == a*a)
					cout << b << " " << c << " " << a << "\n";
			}
		}
	}

	//
	return 0;
	}

