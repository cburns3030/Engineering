/* Chris Burns
Project 3
Golf ball distance traveled
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float dstart;
float d;
int g = 32;
float t = 0;
float d2 = 0;
float dinterval;
float dleft;
//d=.5gt^2
float tcalc;//time it takes ball to hit ground

int main()
{
	cout << "Enter starting height" << endl;
	cin >> dstart;

	cout << "             Distance in Current" << endl;
	cout << "Time (sec)      ";
	cout << "Time Interval      ";
	cout << "Total Distance      ";
	cout << "Distance Left      " << endl << endl;
	
	tcalc = sqrt(((2 * dstart) / g)); //figure out how long it takes to hit the ground
	
	while (d < dstart)
	{
		d = .5*g*t*t;
		dinterval = d - d2;
		dleft = dstart - d;
		if (tcalc - t > 1.0)
		{
			cout << setw(5) << t << setw(17) << dinterval << setw(21) << d << setw(20) << dleft << endl;
			t++;
		}

		else
		{
			t = t + .001;
		}
		
		d2 = d;
	}
	cout << setw(5) << fixed << setprecision(3) << t-.001 << setw(17) << dinterval << setw(21) << d << setw(20) << dleft << endl;
	cout << "Hit ground at time = " << tcalc << endl;
	
	
	
	system("PAUSE");
	return 0;
}
