#include <stdio.h>


void Q1() {
    int time, age;
    
    printf("현재 시간과 나이를 입력하세요(시간 나이): ");
    scanf("%d %d", &time, &age);

    if (!(time >= 0 && time <= 23 && age >= 1)) {
        return;
    }

    if (time < 17) {
        if (age > 12 && age < 65) {
            printf("요금은 34000원 입니다.\n");
        } else {
            printf("요금은 25000원 입니다.\n");
        }
    } else {
        printf("요금은 10000원 입니다.\n");
    }
}


void Q2() {
    int n, a = 0, b = 1, next;
    
    printf("몇 번째 항까지 구할까요? ");
    scanf("%d", &n);

    if (n < 0) {
        return;
    }

    printf("%d", a);
    
    for (int i = 1; i <= n; i++) {
        printf(", %d", b);
        next = a + b;
        a = b;
        b = next;
    }
    
    printf("\n");
}


void Q3() {
    int n, a = 0, b = 1, next;
    
    printf("몇 번째 항까지 구할까요? ");
    scanf("%d", &n);

    if (n < 0) {
        return;
    }

    printf("%d", a);
    
    int i = 1;
    while (i <= n) {
        printf(", %d", b);
        next = a + b;
        a = b;
        b = next;
        i++;
    }
    
    printf("\n");
}

int main() {
    Q1();   // 현재 시간과 나이를 입력하세요(시간 나이): 18 33
            // 요금은 10000원 입니다.

    Q2();   // 몇 번째 항까지 구할까요? 10
            // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55
            
    Q3();   // 몇 번째 항까지 구할까요? 10
            // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55
    return 0;
}