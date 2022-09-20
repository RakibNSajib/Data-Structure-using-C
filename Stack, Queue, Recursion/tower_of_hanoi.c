#include <stdio.h>
void tower(int n, char beg, char aux, char end)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", beg, end);
        return;
    }
    tower(n - 1, beg, end, aux);
    printf("Move disk %d from %c to %c\n", n, beg, end);
    tower(n - 1, aux, beg, end);
}
int main()
{
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    printf("The following moves are required: \n");
    tower(n, 'A', 'B', 'C');

    return 0;
}
