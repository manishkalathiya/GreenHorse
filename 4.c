#include <stdio.h>

void printTable(int num, int count) {
    if (count > 10) {
        return;
    }
    
    printf("%d x %d = %d\n", num, count, num * count);
    printTable(num, count + 1);
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Multiplication Table for %d:\n", num);
    printTable(num, 1);
    
    return 0;
}
