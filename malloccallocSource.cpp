#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>
#include <malloc.h>

void OneDimentional()
{
    int *p;
    int col, i;
    printf("Enter number of elemets\n");
    scanf("%d", &col);
    p = (int *)malloc(sizeof(int) * col);
    printf("Enter the elements\n");
    for (i = 0; i < col; i++)
    {
        scanf("%d", &p[i]);
    }
    printf("Elemets in 1D array are\n");
    for (i = 0; i < col; i++)
    {
        printf(" %d ", p[i]);
    }
    printf("\nFreeing the allocated memory for the 1D array\n");
    free(p);
}
void TwoDimentional()
{
    int **p = NULL;
    int col, row, i, j;
 printf("Enter number of rows & columns\n");
 scanf("%d %d" , &row, &col);
 p = (int**)malloc(sizeof(int) * row);
 for(i = 0 ; i < row ; i++)
 {
        p[i] = (int *)malloc(sizeof(int) * col);
 }
 printf("Enter elemets in the array\n");
 for(i = 0 ; i < row ; i++)
 {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &p[i][j]);
        }
 }
 printf("Elemets in 2D array are\n");
 for(i = 0;i < row ; i++)
 {
        printf("\n");
        for (j = 0; j < col; j++)
        {
            printf(" %d ", p[i][j]);
        }
 }
 printf("\nFree the allocated memory for the 1D array\n");
 for(i = 0 ; i < row ; i++)
 {
        free(p[i]);
 }
 free(p);
}
void ThreeDimentional()
{
    int ***p;
    int first, second, third, i, j, k;
    printf("Enter first, second and third dimention\n");
    scanf("% d % d % d", &first, &second, &third);
    p = (int ***)malloc(sizeof(int **) * first);
    for (i = 0; i < first; i++)
    {
        p[i] = (int **)malloc(sizeof(int *) * second);
        for (j = 0; j < second; j++)
        {
            p[i][j] = (int *)malloc(sizeof(int) * third);
        }
    }
    printf("Enter the elements\n ");
    for (i = 0; i < first; i++)
    {
        for (j = 0; j < second; j++)
        {
            for (k = 0; k < third; k++)
            {
                scanf("%d", &p[i][j][k]);
            }
        }
    }
    printf("Enter the elements\n ");
    for (i = 0; i < first; i++)
    {
        for (j = 0; j < second; j++)
        {
            printf("\n");
            for (k = 0; k < third; k++)
            {
                printf(" %d ", p[i][j][k]);
            }
        }
    }
    printf("\nFree the memory of array\n");
    for (i = 0; i < first; i++)
    {
        for (j = 0; j < second; j++)
        {
            free(p[i][j]);
        }
        free(p[i]);
    }
    free(p);
}
int main()
{
    int choice = 0, i = 0, sizeX = 4, sizeY = 5;
    printf("Enter your choice:\n");
    printf("1: One Dimentional\n2: Two Dimentional\n3: Three Dimentional\n");
 scanf("%d",&choice);
 switch(choice)
 {
    case 1:
        OneDimentional();
        break;
    case 2:
        TwoDimentional();
        break;
    case 3:
        ThreeDimentional();
        break;
    default:
        printf("Not a valid choice");
 }
 return 0;
}