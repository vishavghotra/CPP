#include <cstdio>
#define popcnt __builtin_popcount
int N, p;
int main()
{
    scanf("%d%d", &N, &p);
    for (int i = 0; i <= N - p * i; i++)
        if (i >= popcnt(N - p * i))
        {
            printf("%d\n", i);
            return 0;
        }
    puts("-1");
}
