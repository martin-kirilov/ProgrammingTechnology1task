#include <stdio.h>

//Zadacha 16

int isPrime(int num);

int main() {
    int x;
    long long arr[10];
    int i = 1;
    int N = 0;
    
    do {
        printf("Enter x : \n");
        scanf("%d", &x);   
    }while(x < 0);
    
    for(N = 0; N < 10; N++) {
        while(1) {
            if(x % i == 0) {
                arr[N] = i;
                printf("Arr[%d] = %d\n", N+1, arr[N]);
                if(isPrime(arr[N])) {
                    printf("%d is prime\n", arr[N]);
                }
                i += 2;
                break;
            }
            i += 2;
        }
    }
    
    getch();
    
    return 0;
}

int isPrime(int num) {
    int i, n;
    int isPr;
    for(i = 3; i <= num; i++) {
        isPr = 1;
        for(n = 2; n < i; n++) {
            if(i % n == 0){
                isPr = 0;
            } 
        }
    }
    return isPr;
}
