#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, r;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "r = "; cin >> r;
		if ((x * x + y * y >= 0 && y >= 0 && x <= 0 && y <= r && x >= r) || (x * x + y * y >= 0 && x >= 0 && y <= 0 && x <= r && y >= r))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;
		for (int i = 0; i < 10; i++)
		{
			x = 6. * rand() / RAND_MAX - 3;
			y = 6. * rand() / RAND_MAX - 3;
			if ((x * x + y * y >= 0 && y >= 0 && x <= 0 && y <= r && x >= r) || (x * x + y * y >= 0 && x >= 0 && y <= 0 && x <= r && y >= r))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}