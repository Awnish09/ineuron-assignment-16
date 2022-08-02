/*program in C to print or display the upper triangular of a given matrix.*/

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
    printf("\n");

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(j<=n-1-i)
                printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}
