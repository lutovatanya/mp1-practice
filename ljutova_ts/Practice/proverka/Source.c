#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
#define N2 10

void fill(int a[], int n)
{
	int i;
	srand((unsigned int)time(0));
	for (i = 0; i < n; i++)
		a[i] = rand() % 10;
}

void quick_split(int a[], int *i, int *j, int p)
{
	do
	{
		while (a[*i] < p)
			(*i)++;
		while (a[*j] > p)
			(*j)--;
		if (i <= j)
		{
			int tmp = a[*i];
			a[*i] = a[*j];
			a[*j] = tmp;
		}
	} while (*i < *j);
}

void quick_sort(int a[], int n1, int n2)
{
	int m;
	int i = n1; int j = n2;
	m = (n1 + n2) / 2;	
	quick_split(a, &i, &j, a[m]);
	if (i < n2)
		quick_sort(a, n2, i);
}

void output(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d", a[i]);
}

void main()
{
	int a[N], i, j, p;
	fill(a, N);
	printf("massiv: ");
	output(a, N);
	quick_sort(a, N, N2);
	printf("Sort massiv: ");
	output(a, N);
	system("pause");
}