#include <bits/stdc++.h>

using namespace std;

void update(int *a, int *b)
{
    int b2 = *b;
    int a2 = *a;

    *a = a2 + b2;
    *b = abs(a2 - b2);
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}