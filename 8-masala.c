#include <stdio.h>

 void out_hello(int num){  // Funksiya yaratildi 
    if (num < 1) return;  //  Recursiya 0 dan kichik bo'lgancha ishlaydi
    
    out_hello(num -1);    // Kamayish tartibida recursiya ishlaydi
    printf("Hello code\n"); 
 }
 int main(){
    int user;

    printf("Sonni kiriting :"); scanf("%d",&user); // Userdan so'raldi

    out_hello(user); // Funksiya call qilindi 

return 0;
 }