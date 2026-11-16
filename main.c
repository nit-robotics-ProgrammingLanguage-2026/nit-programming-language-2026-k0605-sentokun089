#include <stdio.h>

int main(void)
{
    int n;
    long total = 0;
    scanf("%d", &n);

    // 入力値が負の場合は「NG」を表示して終了する
    if (n < 0)
    {
        printf("NG");
        return 0;
    }

    // for文を使用し、breakやcontinueを使わずに1からnまでの偶数を合算する
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            total += i;
        }
    }

    printf("%ld", total);
    return 0;
}