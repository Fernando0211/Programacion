#include <stdio.h>
#include "/mnt/c/Users/HP/StructuredPrograming2A/unit_2/folderTest/utils.h"

int main()
{
    int n1,n2;

    printf("Enter n1: ");
    scanf("%d",&n1);
    printf("Enter n2: ");
    scanf("%d",&n2);

    swap(&n1,&n2);

    printf("Swap: n1 is: %d, n2 is: %d\n",n1,n2);

    return 0;
}