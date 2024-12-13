#include <stdio.h>

void  even_numbers(int user){   // Funksiya yaratildi 
    
    if (user % 2 == 0 && user != 2){     // Agar juft bo'lsa hamda 2 ga teng bo'lmasa 
  
        printf(" %d", user - 2);  // Yangi qiymat sifatida ishlaydi
        even_numbers(user - 2);   
    }
    else if (user != 1 && user != 2 ){   // Agar toq son bo'lsa 
        printf(" %d", user-1);   // Juft o'tkazib chiqariladi 
        even_numbers(user-2);  
    }
    
}int main(){
    int num;

    printf("Sonni kiritng :");
    scanf("%d",&num);    // Foydanalunchidan olindi va 

    even_numbers(num);  // Funksiya call qilindi 

return 0;
}