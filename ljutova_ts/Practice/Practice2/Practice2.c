#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
void main()
{
	double n1, n2;
	int n, i, a[N], m, p;
	scanf("%lf %lf", &n1, &n2);
	srand((unsigned int)time(0));
	for (i = 0; i < N; i++)
	{
		a[i] = (n2 - n1) / RAND_MAX * rand() + n1;
		printf("%d", a[i]);
	
	do
	{
		printf("Enter n:");
		scanf("%d", &n);
	} while ((n < 0) || (n > 10));
	for (p = 0; p < n; p++)

	{
		printf("Enter number p:");
		scanf("%d", &a[p]);

	}
	if ((a[0] = a[1]) || (a[0] = a[2]) || (a[0] = a[3]) || (a[0] = a[4]) || (a[0] = a[5]) || (a[0] = a[6]) || (a[0] = a[7]) || (a[0] = a[8]) || (a[0] = a[9]))
		printf("Eror (2 simple number)");
	return 0;
	if (a[i] == a[p])
	printf("you win");
	else
		printf("you does not win");

}

