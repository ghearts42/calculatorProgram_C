#include <stdio.h>

int calculation();

int main()
{
    int selection;
    printf("Calculator\n기능 선택\n1.계산기\n2.기록 조회\n3.기록 삭제\n4.종료\n");
    scanf("%d", &selection);
    switch (selection)
    {
    case 1:
        calculation();

    default:
        printf("구현중\n");
        break;
    }
}

int calculation()
{
    char mathematicalExpression[10] = {0};
    printf("Calculator\n");
    scanf("%s", mathematicalExpression);
    printf("%s\n", mathematicalExpression);
}
