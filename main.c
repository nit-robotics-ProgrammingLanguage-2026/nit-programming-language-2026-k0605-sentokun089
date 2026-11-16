#include <stdio.h>

int main(void)
{
    int input_number;
    scanf("%d", &input_number);

    // 入力値が負の場合は「NG」を表示して終了する
    if (input_number < 0)
    {
        printf("NG");
        return 0;
    }

    long total_sum = 0;

    // breakやcontinueを使わず、for文とif文だけで3・5の倍数以外を合算する
    for (int current_number = 1; current_number <= input_number; current_number++)
    {
        if (current_number % 3 != 0 && current_number % 5 != 0)
        {
            total_sum += current_number;
        }
    }

    printf("%ld", total_sum);
    return 0;
}