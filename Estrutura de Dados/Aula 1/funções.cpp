#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

int soma(int, int);

int soma(int i, int j)
{
	int c;
	c = i + j;
	return c;
}

int main()
{
	int x, y, result;
	int i, j;
	
	cout << "Num 1: " << endl;
	cin >> i;
	
	cout << "Num 2: " << endl;
	cin >> j;
	
	result = soma(i, j);
	
	//cout << "I: " << i << "/t" << "j: " << j << endl;
	
	cout << result;
}
