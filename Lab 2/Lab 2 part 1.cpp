/* Samuel Trice
*  C++ 2021 Fall
*  Sept 15
*  Lab 2
*  Class Schedule
*/
#include <iostream>
#include <string>

using namespace std;


int main()
{
	const string M = "Monday   ";
	const string Tu = "Tuesday  ";
	const string WMD = "Wednesday";
	const string Th = "Thursday ";
	const string F = "Friday   ";
	const string CIS162 = "C++ 109";
	const string MAT216 = "Calculus II 109";
	const string PHY212 = "Classical Physiscs 302";
	const string MAT180 = "Engineering Problems 109";
	const string ThSp = "   ";
	const string FoSp = "    ";
	const string FSp = "     ";
	const string fct = "8:00 ";
	const string sct = "8:20 ";
	const string tct = "10:00";
	const string foct = "2:00 ";
	const string po = "******Part One******";
	const string pt = "******Part Two******";
	const string STAROne = "*   *   *   *   ";
	const string StarTwo = "  *   *   *   *";
	cout << po << endl;
	/*
	Part 1 class schedule
	*/
	cout << M << ThSp << fct << ThSp << MAT216 << endl;
	cout << M << ThSp << tct << ThSp << CIS162 << endl;
	cout << M << ThSp << foct << ThSp << PHY212 << endl;
	cout << FSp << endl;
	cout << Tu << ThSp << sct << ThSp << MAT180 << endl;
	cout << Tu << ThSp << tct << ThSp << CIS162 << endl;
	cout << Tu << ThSp << foct << ThSp << PHY212 << endl;
	cout << FSp << endl;
	cout << WMD << ThSp << fct << ThSp << MAT216 << endl;
	cout << WMD << ThSp << tct << ThSp << CIS162 << endl;
	cout << WMD << ThSp << foct << ThSp << PHY212 << endl;
	cout << FSp << endl;
	cout << Th << ThSp << sct << ThSp << MAT180 << endl;
	cout << Th << ThSp << tct << ThSp << CIS162 << endl;
	cout << Th << ThSp << foct << ThSp << PHY212 << endl;
	cout << FSp << endl;
	cout << F << ThSp << tct << ThSp << CIS162 << endl;
	cout << pt << endl;
	/*
	Part 2 Star chart
	*/
	cout << STAROne << endl;
	cout << StarTwo << endl;
	cout << STAROne << endl;
	cout << StarTwo << endl;
	cout << STAROne << endl;
	cout << StarTwo << endl;
	cout << STAROne << endl;
	cout << StarTwo << endl;
}