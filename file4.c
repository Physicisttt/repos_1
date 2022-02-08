#include <stdio.h>
#include <stdlib.h>

#define n 10

int RandomInt(int k, int l)
{
	int t;
	t = k + rand() % (l - k + 1);
	return t;
}

int main(void)
{
	int ar[n];
	int ar2[n - 2];
	int a, b, i, k;
	FILE * f4;

	a = 12;
	b = 48;
	/*
	f4 = fopen("file4.txt", "w");
	for (i = 0; i < n; i++)
	{
		fprintf(f4, "%d ", RandomInt(a, b));
	}
	fclose(f4);
	*/

	f4 = fopen("file4.txt", "r");

	for (i = 0; i < n; i++)//filling the array
	{
		fscanf(f4, "%d", &ar[i]);
	}

	printf("array 1: \n");
	for (i = 0; i < n; i++)//printing the array
	{
		printf(" [%d] = %d ; ", i, ar[i]);
	}

	printf("\n");

	k = 0;
	for (i = 1; i < n - 1; i++)
	{
		ar2[k] = (ar[i - 1] % 10) * (ar[i - 1] % 10);
		k = k + 1;
	}

	printf("\n");
	printf("array 2: \n");
	for (i = 0; i < n-2; i++)//printing the array
	{
		printf(" [%d] = %d ; ", i, ar2[i]);
	}

}
