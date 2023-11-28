#include <iostream>

using namespace std;

int main()
{
	int n, sum_r = 0, sum_l = 0, left = 0, right = 0;
	cin >> n;

	int* a = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		sum_r += a[i];
 		right += a[i] * (i + 1);
	}

	right -= sum_r;
	int min = right;

	for (int i = 1; i < n; ++i)
	{
		sum_l += a[i - 1];
		left += sum_l;
		sum_r -= a[i - 1];
		right -= sum_r;
		int dif = left + right;
		if (dif < min)
			min = dif;
	}

	cout << min;

	delete[] a;
}