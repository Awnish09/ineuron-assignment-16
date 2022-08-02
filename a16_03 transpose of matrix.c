/*program in C to find the transpose of a given matrix.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int n, m;
    printf("Enter the size of the matrix.\n");
    scanf("%d %d",&n, &m);
    int a[n][m], i, j;
    printf("Enter the values for matrix.\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            scanf("%d",&a[i][j]);
    }
    printf("Transpose of the matrix is-\n");
    for(j=0; j<m; j++)
    {
        for(i=0; i<n; i++)
            printf("%d ",a[i][j]);
        printf("\n");
    }


    getch();
    return 0;
}
