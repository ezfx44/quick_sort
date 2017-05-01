#include <iostream>
#include <vector>
#include <ctime>
#include "quick_sort.h"
using namespace std;

template <typename Iterator>
void quick_sort(Iterator, Iterator);

int main()
{
	srand(time(0));
	vector <int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(rand() % 10);
	}
	cout << "Unsorted vector:\t";
	for (int i = 0; i < 10; i++)
	{
		cout << v[i];
	}
	cout << "\nSorted vector: \t\t";
	quick_sort(v.begin(), v.end());
	for (int i = 0; i < 10; i++)
	{
		cout << v[i];
	}
	cin.get();
	return 0;
}
