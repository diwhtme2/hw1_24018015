#include <stdio.h>


void Q1() {
    int time, age;
    
    printf("���� �ð��� ���̸� �Է��ϼ���(�ð� ����): ");
    scanf("%d %d", &time, &age);

    if (!(time >= 0 && time <= 23 && age >= 1)) {
        return;
    }

    if (time < 17) {
        if (age > 12 && age < 65) {
            printf("����� 34000�� �Դϴ�.\n");
        } else {
            printf("����� 25000�� �Դϴ�.\n");
        }
    } else {
        printf("����� 10000�� �Դϴ�.\n");
    }
}


void Q2() {
    int n, a = 0, b = 1, next;
    
    printf("�� ��° �ױ��� ���ұ��? ");
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
    
    printf("�� ��° �ױ��� ���ұ��? ");
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
    Q1();   // ���� �ð��� ���̸� �Է��ϼ���(�ð� ����): 18 33
            // ����� 10000�� �Դϴ�.

    Q2();   // �� ��° �ױ��� ���ұ��? 10
            // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55
            
    Q3();   // �� ��° �ױ��� ���ұ��? 10
            // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55
    return 0;
}