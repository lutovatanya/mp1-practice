#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
void fill(int a[], int n)
{
	int i;
	srand((unsigned int)time(0));
	for (i = 0; i < n; i++)
		a[i] = rand() % 10;
}
void merge_sort (int a[], int l, int r)
{
	int m;
	{
		if (l >= r)
			return;
	}
	m = (l + r) / 2;
	merge_sort(a, l, m);
	merge_sort(a, m + 1, r);
	merge(a, l, m, r);
}
void output(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d", a[i]);
}
void main()
{
	int a[N], l, r;
	fill(a, N);
	printf("massiv: ");
	output(a, N);
	merge_sort(a, l, r);
	printf("Sort massiv: ");
	output(a, N);
	system("pause");
}