#include <stdio.h>

int main()
{

    int n, i, max_marks = 0, previous = 0, actual;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &actual);
        if (previous != actual)
        {
            ++max_marks;
            previous = actual;
        }
    }

    printf("%d\n", max_marks);

    return 0;
}