#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 6

void get_integers(int list[])
{
    printf("6���� ������ �Է��Ͻÿ�: ");
    for(int i =0; i<SIZE; i++)
    {
        scanf("%d", &list[i]);
    }
    // printf("%d",list[i]); // list ����ϱ�
}
int cal_sum(int list[])
{
    int sum = 0;
    for(int i=0; i<SIZE; i++)
    {
        sum += *(list+1);
    }
    return sum;
}
int main(void)
{
    int list[SIZE];
    get_integers(list);
    printf("�� = %d", cal_sum(list));
    printf("", *list); // list ����ϱ�
    return 0;
}