#include <stdio.h>
void decimalToBinary(int n) {
    int binary[32];
    int i = 0;
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}
int main() {
    int num;
    printf("ecrire un nummber : ");
    scanf("%d", &num);
    printf("binairy code ");
    decimalToBinary(num);
    return 0;
}