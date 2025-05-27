#include <stdio.h>
void main()
{
    char str[100],*ptr;
    int length = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  
    ptr = str;
    while (*ptr != '\0' && *ptr != '\n')  
    {
        length++;
        ptr++;
    }
    printf("Length of the string is: %d\n", length);
}


#include <stdio.h>
int cube(int a) 
{
    return a * a * a;
}
void main() 
{
    int b, i, j;
    printf("Enter array's size: ");
    scanf("%d", &b);
    int a[b][b];
    printf("\nEnter array elements:\n");
    for (i = 0; i < b; i++) 
    {
        for (j = 0; j < b; j++)
         {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nCubes of all elements:\n");
    for (i = 0; i < b; i++) 
    {
        for (j = 0; j < b; j++) 
        {
            printf("%d\t", cube(a[i][j]));
        }
        printf("\n");
    }
}