#include <stdio.h>
int main() {
    int num, sum_square=0, square_sum=0, i;
    for (num=1; num<=100; num++) {
        sum_square+=num*num;
    }
    for (num=1; num<=100; num++) {
        square_sum+=num;
    }
    square_sum*=square_sum;
    printf("%d", square_sum-sum_square);
    return 0;
}