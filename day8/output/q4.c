#include <stdio.h>
int main() {
    int num;
    for (num = 10; num >= 1; num--) {
        if (num == 5)break;
        if (num % 2 == 0 && num % 3 == 0)
            printf("A");
        else if (num % 2 == 0)
            printf("B");
        else if (num % 3 == 0)
            printf("C");
        else
            printf("%d", num);
    }
    return 0;
}
// 10CB7A       BCBC7A      ACB7A        BCB7A           