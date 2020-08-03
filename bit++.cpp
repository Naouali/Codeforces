#include <iostream>
using namespace std;
#include <string>

int main ()
{
	string op;
	int n;
	int X= 0;
	cin >> n;
	while (n--)
	{
		cin >> op;

		if (op[1] == '+')
		{
			X++;
		}
		if ( op[1] == '-')
		{
			X--;
		}
		
		if (!n)
			cout << X << endl;
	}

	return 0;
}
