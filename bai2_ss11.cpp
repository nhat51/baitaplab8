#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char s[20];
	int i=0;
	int vowels=0;
	printf ("nhap van ban: \n");
	gets(s);

	while (s[i++]!='\0')
	{
		if (s[i]=='i'|| s[i]=='a' || s[i]=='u' || s[i]=='o' || s[i]=='e')
		vowels++;
		}
		printf ("van ban co %d nguyen am",vowels);
	return 0;
}
