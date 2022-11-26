//Veri Turlerinin bellekte tutacagi yeri hesaplamak.
#include<stdio.h>
int main()
{
    printf(">>Charachter'in tutacagi yer  = %1d Byte\n", sizeof(char));

    printf(">>Short'un tutacagi yer       = %1d Byte\n", sizeof(short));

    printf(">>Integer'in tutacagi yer     = %ld Byte\n", sizeof(int));

	printf(">>Float'un tutacagi yer       = %ld Byte\n", sizeof(float));

	printf(">>Double'in tutacagi yer      = %ld Byte\n", sizeof(double));

    return 0;
}
