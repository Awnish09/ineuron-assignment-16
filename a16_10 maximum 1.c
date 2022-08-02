/*program in C to find the row with maximum number of 1s.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter the size of the matrix.\n");
    scanf("%d",&n);
    int a[n][n], i, j, k, r[n], s;
    printf("Enter the values for matrix.\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    }
    printf("\n");

    for(j=0; j<n; j++)
    {
        r[j]=0;
        for(i=0; i<n; i++)
        {
            if(a[i][j]==1)
                r[j]++;
        }
    }
    for(i=0, s=r[0], k=0; i<n; i++)
    {
        if(s<r[i+1])
        {
            s=r[i+1];
            k=i+1;
        }
        //printf("%d ",r[i]);
    }
    printf("Row %d has the maximum numbers of 1s.",k+1);

    getch();
    return 0;
}
