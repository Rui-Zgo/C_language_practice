#include <stdio.h>

int main()
{
    int t;
   double v, u, w, L;
    scanf("%d", &t);
    while( t-- )
    {
        scanf("%lf%lf%lf%lf", &v, &u, &w, &L);
        printf("%0.3lf\n", L*w/(v+u) );
    }
    return 0;
}

