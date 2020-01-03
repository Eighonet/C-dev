 using namespace std;
#include <iostream>;
#include <iterator>

void swap(double* mass, int frst, int scnd)
{
	double temp = mass[frst];
	mass[frst] = mass[scnd];
	mass[scnd] = temp;
}

void hoarSort(double* mass, const int first, const int last)
{
	auto midValue = mass[(first + last) / 2];
	int i = first;
	int j = last;
	do {
		while (mass[i] < midValue)
			i++;
		while (mass[j] > midValue)
			j--;
		if (j >= i)
		{
			if (j > i)
				{
				swap(mass, i, j);
				}
			i++;
			j--;
		}
	} while (j >= i);

	if (i < last)
		hoarSort(mass, i, last);
	if (j > first)
		hoarSort(mass, first, j);
}

int main()
{
	cout << "Here we are again!" << endl;
	double data[] = { 5, 4, 3, 1, 2 };
	int a = size(data)-1;
	hoarSort(data, 0,  a);
	for (int i = 0; i < size(data); i++)
	{
		cout << data[i] << " ";
	}

}