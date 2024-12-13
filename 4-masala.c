#include <stdio.h>

void  juft_numbers(int user){   // Funksiya yaratildi 
    
    if (user % 2 != 0 && user != 1){     // Agar toq bo'lsa hamda 1 ga teng bo'lmasa 
  
        printf(" %d", user - 2);  // Yangi qiymat sifatida ishlaydi
        juft_numbers(user - 1);   
    }
    else if (user != 1 && user != 2 ){   // Agar toq son bo'lsa 
        printf(" %d", user-1);   // To'q o'tkazib chiqariladi 
        juft_numbers(user-1);  
    }
    
}int main(){
    int num;

    printf("Sonni kiritng :");
    scanf("%d",&num);    // Foydanalunchidan olindi va 

    juft_numbers(num);  // Funksiya call qilindi 

return 0;
}