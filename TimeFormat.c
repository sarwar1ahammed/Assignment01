#include <stdio.h>
int main()
{
    int hour, mintue;
    printf("Enter your time like (\"HH : MM\") : ");
    scanf("%d : %d", &hour, &mintue);

    printf("%d hour and %d Minute", hour, mintue);

    return 0;
}