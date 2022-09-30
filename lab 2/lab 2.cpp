#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i, d, i1, del, cnt, min;
    del = 0;
    cnt = 0;
    min = 1000;
    for (i = 320; i <= 350; i++) {
        printf("\n%d    ", i);
        for (i1 = 2; i1 < i; i1++)
        {
            if (i % i1 == 0 && i1 <= 9)
            {
                del++;
                cnt++;
                printf(",  %d", i1);
                if (del % 4 == 0) {
                    printf("\n       ");
                    del = 0;
                }
            }
            else if (i % i1 == 0 && i >= 10 && i1 <= 99)
            {
                del++;
                cnt++;
                printf(", %d", i1);
                if (del % 4 == 0) {
                    printf("\n      ");
                    del = 0;
                }
            }
            else if (i % i1 == 0 && i1 >= 100)
            {
                del++;
                cnt++;
                printf(",%d", i1);
                if (del % 4 == 0) {
                    printf("\n     ");
                    del = 0;
                }
            }
        }
        if (min > cnt)
            min = min;
        else if (min < cnt)
            min = cnt;
        printf("            %d", cnt);
        cnt = 0;
    }
    printf("%d", min);
}