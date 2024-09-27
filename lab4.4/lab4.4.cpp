#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{

	double y, x, R, xp, dx, xk;

	cout << "R = "; cin >> R;
	cout << "dx = "; cin >> dx;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;

	cout << fixed;
	cout << "----------------" << endl;
	cout << "| " << setw(3) << "x" << setw(5) << "| " << setw(3) << "y" << setw(3) << "|" << endl;
	cout << "----------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (x <= -8)
			y = -R;
		else
			if (x > -8 && x <= -(R))
				y = ((-R) + (R * (x + 8)) / (8 - R));
			else
				if (x > -(R) && x <= R)
					y = (-1) * (sqrt((R * R) - (x * x)));
				else
					if (x > R && x <= 5)
						y = (2 * (x - R) / (5 - R));
					else
						y = 3;
		cout << "| " << setw(6) << setprecision(2) << x << "|" << setw(6) << setprecision(2) << y << "|" << endl;
		x += dx;
	}
	cout << "----------------" << endl;
	system("pause");
	return 0;
}



