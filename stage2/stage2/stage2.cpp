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
//
//int square(int a){ return a*a; }
//double square(double a){ return a*a; }
//
//void main(void){
//	cout<<square(1)<<endl;
//	cout << square(1.1) << endl;
//	return;
//
//
//}

//----------------------------function templates-------------------------

//template <class T>
//T FindMax(T, T, T);
//
//void main(void){
//	int a, b, c;
//	char aa, bb, cc;
//	cout << "Enter 3 numbers" << endl;
//	cin >> a >> b >> c;
//	cout << "Maximum is " << FindMax(a, b, c) << endl;
//	cout << "Enter 3 chars" << endl;
//	cin >> aa >> bb >> cc;
//	cout << "Maximum is " << FindMax(aa, bb, cc) << endl;
//	return;
//}
//
//template <class T>
//T FindMax(T x, T y, T z){
//	T max=x;
//	if (y > max) max = y;
//	if (z > max) max = z;
//	return max;
//}


////uprazhnenie 3.12
//
//
//double calculateCharges(float);
//
//void main(void){
//	float dur1, dur2, dur3;
//	cout << "Enter duration for 3 clients"<<endl;
//	cin >> dur1 >> dur2 >> dur3;
//	cout << "Car\t" << "Duration\t" << "cost" << endl;
//	for (int count = 0; count < 3;count++){
//		switch (count)
//		{
//		case 0:{
//			cout << count << "\t" << setw(3) << setprecision(1) << fixed << right << dur1<<"\t\t" << setw(3) << setprecision(1) << calculateCharges(dur1)<<endl;
//			break; }
//		case 1:{
//			cout << count << "\t" << setw(3) << setprecision(1) << fixed << right << dur2 << "\t\t" << setw(3) << setprecision(1) << calculateCharges(dur2) << endl;
//			break; }
//		case 2:{
//			cout << count << "\t" << setw(3) << setprecision(1) << fixed << right << dur3 << "\t\t" << setw(3) << setprecision(1) << calculateCharges(dur3) << endl;
//			break; }
//		default:
//			break;
//		}
//	}
//}
//
//double calculateCharges(float duration){
//	int Dur;
//	double Charges = 0;
//	Dur = (int)duration;
//	int sutok = Dur / 24;
//	double chasov = duration - sutok * 24;
//	if (chasov >= 3 && chasov <= 19)
//		Charges = 10 * sutok + 2.0 + ((int)chasov - 3)*0.5;
//	else
//		if (chasov > 19)
//			Charges = 10 * sutok + 10.0;
//		else
//			if (chasov >= 0.001)
//				Charges = 10 * sutok + 2.0;
//			else
//				Charges = 10 * sutok;
//
//	return Charges;
//}

//-------------------------------------------------- ex 3.17  ex 3.29

int perfect(int);

void main(void){
	for (int i = 0; i < 10; i++)
	{
		cout << (1 + rand() % 5) * 2 << "\t" << (6 + rand() % 5 * 4) << endl;
	}
	int maxnumber = 100000;
	for (int count = 1; count <= maxnumber; count++){
		if (perfect(count) == 1) { 
			cout << count << endl;
			for (int count1 = 1; count1 <= count / 2 + 1; count1++){
				if (count%count1 == 0) cout << count1 << " ";
			}
			cout << endl;
		}

	}
}

int perfect(int number){
	int sum=0;
		for (int i = 1; i <= number / 2 + 1; i++){
			if (number%i == 0) sum += i;
		}
		if (sum == number) return 1;
		else return 0;
}
//endings