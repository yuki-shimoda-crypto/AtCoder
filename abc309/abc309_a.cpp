#include <iostream>
using namespace std;

int main(void)
{
	int	a, b;

	cin >> a >> b;
	if (a % 3 != 0 && b == a + 1)
		cout <<  "Yes" << endl;
	else
		cout <<  "No" << endl;
}