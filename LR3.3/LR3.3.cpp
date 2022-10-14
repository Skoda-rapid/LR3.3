#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double x;
	double R;
	double y;

	cout << "x= ";
	cin >> x;
	cout << "R= ";
	cin >> R;

	// розгалуження в повній формі
	if (x <= -8)
		y = -R;
	else
		if (-8 < x && x <= -R)
			y = -R + (R / (-R + 8)) * (x - R);
		else
			if (-R < x && x <= R)
				y = -sqrt(R * R - x * x);
			else
				if (R < x && x <= 5)
					y = (2 * x - 2 * R) / (5 - R);
				else
					y = 3;
	cout << endl;
	cout << "y= " << y << endl;
	
	system("pause");
	
	cin.get();
	return 0;


}