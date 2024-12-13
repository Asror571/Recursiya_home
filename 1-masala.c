#include <stdio.h>

void numbers(int num){   // Funksiya yaratildi
    printf("%d ",num);   

    if (num > 1)      // User kiritgan son 1 ga teng bo'lgancha ishlaydi va rekursiya ishlaydi
       numbers(num-1);    
    else if(num < 1)      // Agar kichik bo'lsa o'sish tartibida ishlaydi
       numbers(num+1);  
    
}int main(){
    int user;

    printf("Sonni kiriting :");  scanf(" %d",&user);  // Foydalanuvchidan olindi 

    numbers(user);   // Funksiya olindi 

return 0;
}