#include<stdio.h>
#include<stdlib.h>

/* 
  * ��Ŀ���ŵ����⣺��һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�С���ӳ������ĸ��º�ÿ��������һ�����ӣ��������Ӷ���
  * ������ÿ���µ���������Ϊ���٣�
  * ��������� ���ӵĹ���Ϊ����1,1,2,3,5,8,13,21....
  */

/*
 * ����VS�Ļ�����ݼ�
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