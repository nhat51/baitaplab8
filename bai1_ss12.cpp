#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int so[5];
	int max,min;
	int i;
	for (i=0;i<5;i++)
	{
		printf ("nhap so thu %d : ",i+1);
		scanf ("%d",&so[i]);
		}
	max=so[0];
	min=so[0];
	for (i=0;i<5;i++)
	{
		if (so[i]>max)
		max=so[i];
		if (so[i]<min)
		min=so[i];
		}
	printf ("\n gia tri lon nhat la: %d\n",max);
	printf ("\n gia tri nho nhat la: %d\n",min);
	return 0;
}
