#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
#define K 10
void fill(int a[], int n)
{
	int i;
	srand((unsigned int)time(0));
	for (i = 0; i < n; i++)
		a[i] = rand() % 10;
}
void chooseSort(int a[], int n)
{
	int i, min, j, minidx;
	for (i = 0; i < n; i++)
	{
		min = a[i];
		minidx = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[j] < min)
			{
				min = a[j];
				minidx = j;
			}
		}
		a[minidx] = a[i];
		a[i] = min;
	}
}
void insertSort(int a[], int n)
{
	int i, tmp, j;
	for (i = 1; i < n; i++)
	{
		tmp = a[i];
		j = i - 1;
		while ((j >= 0) && (a[j] > tmp))
		{
			a[j + 1] = a[j];
			a[j] = tmp;
			j--;
		}
	}
}
void bubbleSort(int a[], int n)
{
	int i, tmp, j;
	{
		for (i = 0; i < n; i++)
		{
			for (j = 1; j < n; j++)
				if (a[j - 1] > a[j])
				{
					tmp = a[j];
					a[j] = a[j - 1];
					a[j - 1] = tmp;
				}
		}
	}
}
void countSort(int a[], int n)
{
	int i, idx = 0, j;
	int count[K];
	for (i = 0; i < K; i++)
		count[i] = 0;
	for (i = 0; i < n; i++)
		count[a[i]] ++;
	for (i = 0; i < K; i++)
	{
		for (j = 0; j < count[i]; j++)
			a[idx++] = i;
	}
}
void output(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d", a[i]);
}
void main()
{
	int a[N], number;
	fill(a, N);
	printf("massiv: ");
	output(a, N);
	printf("\nChoose number of sort:");
	scanf("%d", &number);
	switch (number)
	{
	case 1:
		chooseSort(a, N);
		printf("Sort massiv: ");
		output(a, N);
		break;
	case 2:
		insertSort(a, N);
		printf("Sort massiv: ");
		output(a, N);
		break;
	case 3:
		bubbleSort(a, N);
		printf("Sort massiv: ");
		output(a, N);
		break;
	case 4:
		countSort(a, N);
		printf("Sort massiv: ");
		output(a, N);
		break;
	default:
		printf("Sort do not found");
	}
}