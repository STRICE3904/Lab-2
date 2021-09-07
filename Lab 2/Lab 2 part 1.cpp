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
	//Three spaces
	const string FoSp = "    ";
	//Four spaces
	const string FSp = "     ";
	//Five spaces
	const string fct = "8:00 ";
	const string sct = "8:20 ";
	const string tct = "10:00";
	const string foct = "2:00 ";
	const string po = "******Part One******";
	//Header for the first part
	const string pt = "******Part Two******";
	//Header for the second part
	const string STAROne = "*   *   *   *   ";
	const string StarTwo = "  *   *   *   *";
	cout << po << endl;
	//header for part 1
	cout << M << ThSp << fct << ThSp << MAT216 << endl;
	cout << M << ThSp << tct << ThSp << CIS162 << endl;
	cout << M << ThSp << foct << ThSp << PHY212 << endl;
	cout << FSp << endl;
	//Used for gaps between days
	cout << Tu << ThSp << sct << ThSp << MAT180 << endl;
	cout << Tu << ThSp << tct << ThSp << CIS162 << endl;
	cout << Tu << ThSp << foct << ThSp << PHY212 << endl;
	cout << FSp << endl;
	//Used for gaps between days
	cout << WMD << ThSp << fct << ThSp << MAT216 << endl;
	cout << WMD << ThSp << tct << ThSp << CIS162 << endl;
	cout << WMD << ThSp << foct << ThSp << PHY212 << endl;
	cout << FSp << endl;
	//Used for gaps between days
	cout << Th << ThSp << sct << ThSp << MAT180 << endl;
	cout << Th << ThSp << tct << ThSp << CIS162 << endl;
	cout << Th << ThSp << foct << ThSp << PHY212 << endl;
	cout << FSp << endl;
	//Used for gaps between days
	cout << F << ThSp << tct << ThSp << CIS162 << endl;
	cout << pt << endl;
	//Header for part 2
	cout << STAROne << endl;
	cout << StarTwo << endl;
	cout << STAROne << endl;
	cout << StarTwo << endl;
	cout << STAROne << endl;
	cout << StarTwo << endl;
	cout << STAROne << endl;
	cout << StarTwo << endl;
}