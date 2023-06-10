#include <stdio.h>

int main()
{
    auto int a = 5;

    register int b = 10;
    register int c = 10;
    register int d = 5;
    register int e = 5;
    register int f = 5;
    register int g = 5;
    register int h = 5;
    register int i = 5;
    register int j = 5;
    register int k = 5;
    register int l = 5;
    register int m = 5;
    register int n = 5;

    register int bb = 5;
    register int cc = 5;
    register int dd = 5;
    register int ee = 5;
    register int ff = 5;
    register int gg = 5;
    register int hh = 5;
    register int ii = 5;
    register int jj = 5;
    register int kk = 5;
    register int ll = 5;
    register int mm = 5;
    register int nn = 5;

    printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d,\
        %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d", \
            b, c, d, e, f, g, h, i, j, k, l, m, n,\
            bb, cc, dd, ee, ff, gg, hh, ii, jj, kk, ll, mm, nn);

    return 0;
}