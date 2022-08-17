/*program in C to find the sum of right diagonals of a matrix.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int n, m, sum=0;
    printf("Enter the size of the matrix.\nfor example if matrix is 3*3 enter 3 3.\n");
    scanf("%d",&n);
    int a[n][n], i, j;
    printf("Enter the values of each elements of both matrices, 1st element of a then 1st element of b and so on.\n");
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
        j=i;
        sum+=a[i][j];

    }
    printf("The sum of right diagonal of the matrix is %d",sum);

    getch();
    return 0;
}
