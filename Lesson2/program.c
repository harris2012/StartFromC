#include<stdio.h>
#include<stdlib.h>

/* 
  * 题目：古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第四个月后每个月又生一对兔子，假如兔子都不
  * 死，问每个月的兔子总数为多少？
  * 程序分析： 兔子的规律为数列1,1,2,3,5,8,13,21....
  */

/*
 * 熟练VS的基本快捷键
 */

void main() {

    for (int i = 1; i < 15; i++) {

        int value = getValue(i);

        printf("%d\n", value);
    }

    system("pause");
}

int getValue(int x) {
    if (x == 1 || x == 2) {
        return 1;
    }
    else {
        return getValue(x - 1) + getValue(x - 2);
    }
}