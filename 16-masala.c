#include <stdio.h>

int number_sum(int number){
    if(number == 0) return 0;
    int digit = number % 10;
    return digit + number_sum(number / 10);
}int main(){
    int user;

    printf("Sonni kiriting :");
    scanf("%d\n",&user);
    printf("%d\n",number_sum(user));

return 0;
}