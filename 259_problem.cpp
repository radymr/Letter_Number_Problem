/* If A=1, B=2, C=3, etc., then T+W+O+H+U+N+D+R+E+D+A+N+D+F+I+F+T+Y+N+I+N+E = 259 

This small program will calculate the numerical sum of converting the alphabetic characters that spell out a numbers name to the
number it would be if all letters were in sequential order.

There needs to be a user input, and display only the numbers in which, the name spelled out, will add up to the number itself. 

*/

#include <iostream>
#include <cctype>
#include "entry.h"

using namespace std;

int main () {

	int userin, staticin, total;

	//user input. 
	cout << "Hi!, I am here to convert a number you give me " << endl << "into the number spelled out in letter." << endl << endl
		<< "I will then convert each of those letters into a number, " << endl << "such as A=1, B=2, C=3 and so on... " << endl << endl
		<< "Then I will add those numbers together and see if the sum of " << endl << "those numbers are equal to the number you gave me!.. " << endl << endl
		<< "I will do this for every number from 1 to the number you choose!" << endl << endl
		<< "Please input a number: ";

	//checks for valid numerical input.
	userin = validInput();
	
	while (userin < 0 || userin > 32000) {
		cout << endl << "Please enter a valid numerical value between 0 - 32000!: ";
		cin >> userin;
	}

	//used to compare the input with the calulcated sum. 
	staticin = userin; 


	/* A=1 B=2 C=3 D=4 E=5 F=6 G=7 H=8 I=9 J=10 K=11 L=12 M=13 N=14 O=15 P=16 Q=17 R=18 S=19 T=20 U=21 V=22 W=23 X=24 Y=25 Z=26 */

	total = 0; 


	for (int i = 1; i <= staticin; i++) {

		userin = i;

		if (userin >= 30000) {
			userin = userin % 10000;
			// thirtythousand = 20 + 8 + 9 + 18 + 20 + 25 + 20 + 8 + 15 + 21 + 19 + 1 + 14 + 4 = 202
			total += 202;
		}

		if (userin >= 20000) {
			userin = userin % 10000;
			// twentythousand = 20 + 23 + 5 + 14 + 20 + 25 + 20 + 8 + 15 + 21 + 19 + 1 + 14 + 4 = 209
			total += 209;
		}

		if (userin >= 10000) {
			userin = userin % 10000;
			// tenthousand = 20 + 5 + 14 + 20 + 8 + 15 + 21 + 19 + 1 + 14 + 4 = 141
			total += 141;
		}

		if (userin >= 9000) {
			userin = userin % 1000;
			// nine = 14 + 9 + 14 + 5 = 42
			// thousand = 20 + 8 + 15 + 21 + 19 + 1 + 14 + 4 = 102
			total += 144;
		}

		if (userin >= 8000) {
			userin = userin % 1000;
			// eight = 5 + 9 + 7 + 8 + 20 = 49
			// thousand = 20 + 8 + 15 + 21 + 19 + 1 + 14 + 4 = 102
			total += 151;
		}

		if (userin >= 7000) {
			userin = userin % 1000;
			// seven = 19 + 5 + 22 + 5 + 14 = 65
			// thousand = 20 + 8 + 15 + 21 + 19 + 1 + 14 + 4 = 102
			total += 167;
		}

		if (userin >= 6000) {
			userin = userin % 1000;
			// six = 19 + 9 + 24 = 52
			// thousand = 20 + 8 + 15 + 21 + 19 + 1 + 14 + 4 = 102
			total += 154;
		}

		if (userin >= 5000) {
			userin = userin % 1000;
			// five = 6 + 9 + 22 + 5 = 42
			// thousand = 20 + 8 + 15 + 21 + 19 + 1 + 14 + 4 = 102
			total += 144;
		}

		if (userin >= 4000) {
			userin = userin % 1000;
			// four = 6 + 15 + 21 + 18 = 60
			// thousand = 20 + 8 + 15 + 21 + 19 + 1 + 14 + 4 = 102
			total += 162;
		}

		if (userin >= 3000) {
			userin = userin % 1000;
			// three = 20 + 8 + 18 + 5 + 5 = 56
			// thousand = 20 + 8 + 15 + 21 + 19 + 1 + 14 + 4 = 102
			total += 158;
		}

		if (userin >= 2000) {
			userin = userin % 1000;
			// two = 20 + 23 + 15 = 58
			// thousand = 20 + 8 + 15 + 21 + 19 + 1 + 14 + 4 = 102
			total += 160;
		}

		if (userin >= 1000) {
			userin = userin % 1000;
			// One = 15 + 14 + 5 = 34
			// thousand = 20 + 8 + 15 + 21 + 19 + 1 + 14 + 4 = 102
			total += 136;
		}

		if (userin >= 900) {
			userin = userin % 100;
			// nine = 14 + 9 + 14 + 5 = 42
			// Hundred = 8 + 21 + 14 + 4 + 18 + 5 + 4 = 74
			// AND = 1 + 14 + 4 = 19
			total += 135;
		}

		if (userin >= 800) {
			userin = userin % 100;
			// eight = 5 + 9 + 7 + 8 + 20 = 49
			// Hundred = 8 + 21 + 14 + 4 + 18 + 5 + 4 = 74
			// AND = 1 + 14 + 4 = 19
			total += 142;
		}

		if (userin >= 700) {
			userin = userin % 100;
			// seven = 19 + 5 + 22 + 5 + 14 = 65
			// Hundred = 8 + 21 + 14 + 4 + 18 + 5 + 4 = 74
			// AND = 1 + 14 + 4 = 19
			total += 158;
		}

		if (userin >= 600) {
			userin = userin % 100;
			// six = 19 + 9 + 24 = 52
			// Hundred = 8 + 21 + 14 + 4 + 18 + 5 + 4 = 74
			// AND = 1 + 14 + 4 = 19
			total += 143;
		}

		if (userin >= 500) {
			userin = userin % 100;
			// five = 6 + 9 + 22 + 5 = 42
			// Hundred = 8 + 21 + 14 + 4 + 18 + 5 + 4 = 74
			// AND = 1 + 14 + 4 = 19
			total += 135;
		}

		if (userin >= 400) {
			userin = userin % 100;
			// four = 6 + 15 + 21 + 18 = 60
			// Hundred = 8 + 21 + 14 + 4 + 18 + 5 + 4 = 74
			// AND = 1 + 14 + 4 = 19
			total += 153;
		}

		if (userin >= 300) {
			userin = userin % 100;
			// three = 20 + 8 + 18 + 5 + 5 = 56
			// Hundred = 8 + 21 + 14 + 4 + 18 + 5 + 4 = 74
			// AND = 1 + 14 + 4 = 19
			total += 149;
		}

		if (userin >= 200) {
			userin = userin % 100;
			// two = 20 + 23 + 15 = 58
			// Hundred = 8 + 21 + 14 + 4 + 18 + 5 + 4 = 74
			// AND = 1 + 14 + 4 = 19
			total += 151;
		}

		if (userin >= 100) {
			userin = userin % 100;
			// One = 15 + 14 + 5 = 34
			// Hundred = 8 + 21 + 14 + 4 + 18 + 5 + 4 = 74
			// AND = 1 + 14 + 4 = 19
			total += 127;
		}

		if (userin >= 90) {
			userin = userin % 100;
			// ninety = 14 + 9 + 14 + 5 + 20 + 25 = 87
			total += 87;
		}

		if (userin >= 80) {
			userin = userin % 100;
			// eighty = 5 + 9 + 7+ 8 + 20 + 25 = 74
			total += 74;
		}

		if (userin >= 70) {
			userin = userin % 10;
			// seventy = 19 + 5 + 22 + 5 + 14 + 20 + 25 = 110
			total += 110;
		}

		if (userin >= 60) {
			userin = userin % 10;
			// sixty = 19 + 9 + 24 + 20 + 25 = 97
			total += 97;
		}

		if (userin >= 50) {
			userin = userin % 10;
			// fifty = 6 + 9 + 6 + 20 + 25 = 66
			total += 66;
		}

		if (userin >= 40) {
			userin = userin % 10;
			// four = 6 + 15 + 21 + 18 + 20 + 25 = 105
			total += 105;
		}

		if (userin >= 30) {
			userin = userin % 10;
			// thirty = 20 + 8 + 9 + 18 + 20 + 25 = 100
			total += 100;
		}

		if (userin >= 20) {
			userin = userin % 10;
			// twenty = 20 + 23 + 5 + 14 + 20 + 25 = 107
			total += 107;
		}

		if (userin >= 10) {
			userin = userin % 10;
			// ten = 20 + 5 + 14 = 39
			total += 39;
		}
		
		if (userin >= 9) {
			userin = 0;
			// nine = 14 + 9 + 14 + 5 = 42
			total += 42;
		}

		if (userin >= 8) {
			userin = 0;
			// eight = 5 + 9 + 7 + 8 + 20 = 49
			total += 49;
		}

		if (userin >= 7) {
			userin = 0;
			// seven = 19 + 5 + 22 + 5 + 14 = 65
			total += 65;
		}

		if (userin >= 6) {
			userin = 0;
			// six = 19 + 9 + 24 = 52
			total += 52;
		}

		if (userin >= 5) {
			userin = 0;
			// five = 6 + 9 + 22 + 5 = 42
			total += 42;
		}

		if (userin >= 4) {
			userin = 0;
			// four = 6 + 15 + 21 + 18 = 60
			total += 60;
		}

		if (userin >= 3) {
			userin = 0;
			// three = 20 + 8 + 18 + 5 + 5 = 56
			total += 56;
		}

		if (userin >= 2) {
			userin = 0;
			// two = 20 + 23 + 15 = 58
			total += 58;
		}

		if (userin >= 1) {
			userin = 0;
			// One = 15 + 14 + 5 = 34
			total += 34;
		}

		if (total == i)
			cout << i << "!" << endl;

		total = 0;
	}

	cout << "All numbers have been found!" << endl;
	system("PAUSE");
}