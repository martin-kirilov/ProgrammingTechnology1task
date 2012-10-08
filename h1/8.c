/*
Технологично училище „Електронни системи” http://www.elsys-bg.org/
11 А
17
Мартин Красимиров Кирилов
Да се разработи програма, която изисква от потребителя да въведе целочислено число x, където 0<=x<10. 
Да се инициализира масив от 10 елемента. Да се намерят първите 10 числа на Фибоначи в [0; +∞), 
които се делят на x без остатък. Намерените стойности да се зададат като стойности на елементите в масива. 
Елементите на масива да се изведат на стандартния изход.
*/

#include <stdio.h>

int main() {
    int x,i;
    int arrLength = 10;
    int arr[arrLength];
    int temp = 0;
    int a = 0;
    int b = 1;
    int next;
    
    do{
        printf("Enter x: \n");
        scanf("%d", &x);
    }while(!((x > 0) && (x <= 10)));
    
    
    do{
        next = b;
        b = b + a;
        a = next;
        
        if(b % x == 0) {
            temp++;
            arr[temp] = b;   
        }
    }while(temp < 10);

    for(i = 1; i <= arrLength; i++) {
        printf("Element %d : %d\n", i, arr[i]);   
    }
    
    getch();
    return 0;   
}
