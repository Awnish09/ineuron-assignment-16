/*program in C to find the sum of left diagonals of a matrix.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int n, m, sum=0;
    printf("Enter the size of the matrix.\n");
    scanf("%d",&n);
    int a[n][n], i, j;
    printf("Enter the values for matrix.\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    }
    /*printf("Matrix is\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }*/

    for(i=0; i<n; i++)
    {
        j=2-i;
        sum+=a[i][j];

    }
    printf("The sum of left diagonal of the matrix is %d",sum);

    getch();
    return 0;
}
