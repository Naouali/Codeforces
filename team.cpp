#include <iostream>
using namespace std;



int main()
{
	int n;
	cin >> n;

	int i = 0;
	int sure;
	int final_num = 0;
	while (n--)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> sure;
		 	i+= sure;
		}
		if (i >= 2)
		 final_num ++;
		i = 0;


	}		
	cout << final_num << endl;

	return 0;
}
