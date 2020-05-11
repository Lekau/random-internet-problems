#include <stdio.h>
int main()
{
    int prt_num;
    int this_row = 1; 
    int num = 1;
    int rows_needed;

    rows_needed = 10;
    prt_num = 1;

    while (this_row <= rows_needed)
    {
        while(num++ <= this_row)
            printf("%d ",prt_num++);

        printf("\n");
        this_row++;
        num = 1;    
    }
    return (0);
}