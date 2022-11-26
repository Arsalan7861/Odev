/*
 * İki string'in karsilastirilmasi.
 */
#include <stdio.h>

int main ()
{
	int count1 = 0, count2 = 0, flag = 0, i;
	char string1[30], string2[30];

	printf ("Birinci string'i giriniz: ");
	gets (string1);

	printf ("Ikinci stringi giriniz: ");
	gets (string2);

	while (string1[count1] != '\0')
		count1 ++;

	while (string2[count2] != '\0')
		count2 ++;

	i = 0;

	while (string1[i] == string2[i] && string1[i] != '\0')
	{
		i ++;
	}

	if (string1[i] > string2[i])
		printf ("Birinci string ikinci stringden daha buyuktur.\n");
	else if (string1[i] < string2[i])
		printf("Ikinci string birinci stringden daha buyuktur. \n");
	else
		printf ("Iki string esittir. \n");

	return 0;
}
