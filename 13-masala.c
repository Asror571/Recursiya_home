#include<stdio.h>

int Faktorial(int user){
    
    if (user == 1) {
        return 1;
    } 

    return user*fuctor1(user - 1);
    
    
}

int main(){

    int num = 5;

    printf("%d", Faktorial(num));
    return 0;
}