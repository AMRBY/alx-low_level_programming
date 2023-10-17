#include <stdio.h>
int b = 5;
int a = 0;
int main(void){
do {
    printf("%d\n", a);
    a++;
} while (a < b);
return 0;
}
