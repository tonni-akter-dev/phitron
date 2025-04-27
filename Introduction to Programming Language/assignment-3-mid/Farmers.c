#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int m1, m2, d;
    int res;

    while (n--)
    {
        scanf("%d %d %d", &m1, &m2, &d);

        res = (m1 * d) / (m1 + m2);
        int lesDays = d - res;
        if (m2 == 0)
        {
            lesDays = 0;
        }
        printf("%d \n", lesDays);
    }

    return 0;
}