#include <stdio.h>

int isPrime(int n) {
	int i;
    for ( i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
	int num,i;
	printf("Enter the number(upto) to print:\n");
	scanf("%d",&num);
    for (i = 2; i <= num; i++)
        if (isPrime(i)) printf("%d ", i);
    return 0;
}
