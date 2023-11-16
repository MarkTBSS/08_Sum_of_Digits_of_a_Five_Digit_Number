/* #include <stdio.h>

int main() {
    int a = 5; 
    int b = 3;

    int resultModulus = a % b;
    printf("resultModulus = : %d\n", resultModulus);

    int resultDivide = a / b;
    printf("resultDivide == : %d\n", resultDivide);

    return 0;
} */

#include <stdio.h>

int main() {
    int n = 10564;
    int sumOfMod = 0;
    while (n != 0) {
        printf("n start ===== : %d\n", n);
        int modResult = 0;
        modResult = n % 10; 
        printf("modResult === : %d\n", modResult);
        sumOfMod = sumOfMod + modResult;
        printf("sumOfMod ==== : %d\n", sumOfMod);
        n = n / 10;
        printf("n left ====== : %d\n", n);
        printf("========== END Loop ========== \n");
    }
    printf("%d", sumOfMod);
    return 0;
} 