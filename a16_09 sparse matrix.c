/*program in C to accept a matrix and determine whether it is a sparse matrix.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter the size of the matrix.\n");
    scanf("%d",&n);
    int a[n][n], i, j, zero=0;
    printf("Enter the values for matrix.\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    }
    printf("\n");

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i][j]==0)
                zero++;
        }
    }
    if(zero> n*n-zero)
        printf("It is a sparse matrix.");
    else
        printf("It is not a sparse matrix.");

    getch();
    return 0;
}
