#include <iostream>
using namespace std;
#include <string>

int main()
{
	int n, i = 0;
	cin >> n;
	string word;

	while (n--)
	{
		cin >> word;
		if (word.length() <= 10)
			cout << word <<endl;
		else
			cout << word[0] << word.length()-2 << word[word.length()-1] <<endl;
	}
	return 0;




}
