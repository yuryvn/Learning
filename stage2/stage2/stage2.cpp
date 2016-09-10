// stage2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>


using namespace std;


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

	//int a,b,c,k;
	//for (a = 1; a <= 50; a++){
	//	for (b = 1; (b <= a); b++){
	//		k = b;
	//		for (c = 1; c <= k; c++){
	//			if ((b*b + c*c) == a*a)
	//				cout << b << " " << c << " " << a << "\n";
	//		}
	//	}
	//}
//int RollDice(void);
//void PrintStatus(int);


	//for (int i = 1; i <= 20; i++){
	//	cout << setw(5) << rand() % 6 + 1;
	//	if (i % 5 == 0)
	//		cout << endl;
	//IGRA CRAPS
	//srand(time(NULL));
	//int Status, FirstRoll, Roll;
	//int wins = 0, loses = 0;
	//int cases = 1000000;

	//for (register int cases_ = 1; cases_<=cases; cases_++){

	//	FirstRoll = RollDice();
	//	switch (FirstRoll){
	//	case 2: case 3: case 12: {Status = 2; break; }
	//	case 7: case 11: {Status = 1; break; }
	//	default:{Status = 0; break; }
	//	}

	//	//cout << "First roll is " << FirstRoll << "\n";
	//	//PrintStatus(Status);

	//	while (Status == 0){
	//		Roll = RollDice();
	//		if (Roll == FirstRoll)
	//			Status = 1;
	//		if (Roll == 7)
	//			Status = 2;
	//		//cout << "Your roll:" << Roll << "\n";
	//		//PrintStatus(Status);
	//	}
	//	if (Status == 1)
	//		wins++;
	//	else
	//		loses++;
	//}
	//if (wins + loses != cases)
	//	cout << "warning, wins+loses not equal to amount of cases" << endl;
	//cout << "Wins:" << wins << "; Loses:" << loses << endl;
	//
		//
//int RollDice(void){
//	return rand() % 6 + 2 + rand() % 6;
//}
//
//void PrintStatus(int St){
//	cout << "Status of the game:";
//	switch (St){
//	case 0:{cout << "Continue\n"; break; }
//	case 1:{cout << "Win\n"; break; }
//	case 2:{cout << "Lose\n"; break; }
//	default:{cout << "strange, we should not be here, St=" << St << "\n"; }
//	}
//}

// ob'yavleniya peremennih--------------------static (ne stirayutsya pri vyhode iz funkcii,no vne funkcii ne vidny
// register (pri vozmozhnosti pomeschayutsya v registr proca, a ne v operativku, ideal'no dlya vsyakih counterov
//prichyom o'byavlenie peremennnoi v main ne delaet eyo global'noi, ona Tol'ko local'naya dlya main()

//void xx(void);
//int fact(int);
//
//int y = 1;//global variable y
//
//int _tmain(int argc, _TCHAR* argv[])
//{	
//	int y = 5; //local main variable y
//	cout << "first" << endl;
//	xx();
//	cout << "second" << endl;
//	xx();
//	cout << "y in main=" << y << endl;
//
//	cout << "fact of 5="<<fact(5) << endl;
//
//	return 0;
//}
//
//void xx(void){
//	static int x = 1;
//	for (int i = 1; i <= 10; i++)
//		cout << x++ << " ";
//	cout << endl;
//	cout << "y in one of functions=" << y << endl;
//}
//
////recursiya---------
//int fact(int input){
//	if (input > 1)
//		return input*fact(input - 1);
//	else
//		return input;
//}
//
//
//
//---------------------------ssylki-----------------------------------

//int SquareByValue(int);
//int SquareByLink(int &);
//
//void main(void){
//	int a;
//	cout << "Enter value to square";
//	cin >> a;
//	cout << "Squarebyvalue=" << SquareByValue(a) << " " << "a=" << a << endl;
//	SquareByLink(a); //vot zdes' a izmenitsya.
//	cout << "Squarebylink="<<SquareByLink(a) << " " << "a=" << a << endl;//a vot zdes' a ne izmenyaetsya pochemu-to. vidimo pri vyzove iz cout menyat'sya ne budet
//
//}
//
//int SquareByValue(int c){
//	return c *= c;
//}
//
//int SquareByLink(int &cRef){
//	cRef *= cRef;
//	cout << "cRef=" << cRef << endl;
//	return cRef;
//}
//

//----------------------------znacheniya po umolchaniyu----------------------
//
//int boxvolume(int length=1, int width=1, int height=2);
//
//void main(void){
//	cout << boxvolume(2, 3);
//	return;
//}
//
//int boxvolume(int length, int width, int height){
//	return length*width*height;
//}

//---------------------------unarnaya operaciya razreshiya. dostup k global'noi peremennoi s tem zhe imenem chto i local'naya
//
//float a = 1.55;
//void main(void){
//	int a = 4;
//	cout << "local a=" << a << "; global a=" << ::a << endl;
//	return;
//}

//--------------------------------perezagruzka funkcii--------------------
//funkcii s odinakovim imenem, no raznimim parametrami

int square(int a){ return a*a; }
double square(double a){ return a*a; }

void main(void){
	cout<<square(1)<<endl;
	cout << square(1.1) << endl;
	return;


}





