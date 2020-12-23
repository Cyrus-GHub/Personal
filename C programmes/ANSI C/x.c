#include <stdio.h>

int main()
{
    int n, a[100], z, b, c, d, e, f, g, h, i;
    z = b = c = d = e = f = g = h = 0;

    printf("enter the number of students--");
    scanf("%d", &n);

    printf("\n enter the marks of %d students--", n);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    for (i = 1; i < n; i++)
    {
        if (a[i] > 80 && a[i] < 100)
            z++;
        if (a[i] > 60 && a[i] < 100)
            b++;
        if (a[i] > 40 && a[i] < 100)
            c++;
        if (a[i] <= 40 && a[i] > 0)
            d++;
        if (a[i] > 80 && a[i] < 100)
            e++;
        if (a[i] > 60 && a[i] < 80)
            f++;
        if (a[i] > 40 && a[i] < 60)
            g++;
        if (a[i] > 0 && a[i] < 40)
            h++;
    }
    printf("\nmore than 80 is--%d", z);
    printf("\nmore than 60 is--%d", b);
    printf("\nmore than 40 is--%d", c);
    printf("\nless than 40 is--%d", d);
    printf("\n81-100 is--%d", e);
    printf("\n61-80 is--%d", f);
    printf("\n41-60 is--%d", g);
    printf("\n0-40 is--%d", h);

    return 0;
}