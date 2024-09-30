#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	double n, x, y;
	cin >> n >> x >> y;
	cout << max(0, (int)floor(n - y / x));
	return 0;
}
