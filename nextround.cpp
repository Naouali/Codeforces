#include <iostream>
using namespace std;


int main() 
{
	int n, k;
	int score;
	int num = 1;
	cin >> n >> k;

	while (n--)
	{
		cin >> score;
		num++;
		if (num == k)
			break;
	}
	cout << num <<endl;
	return (0);
}	
