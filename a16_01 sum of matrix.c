/*program to calculate the sum of two matrices each of order 3x3.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a[3][3], b[3][3], i, j;
    printf("Enter the values of both matrices.\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d %d",&a[i][j], &b[i][j]);
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    getch();
    return 0;
}
