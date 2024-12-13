#include <stdio.h>
 
void numbers(int num1,int num2){  // Funksiya yaratildi 
    printf(" %d",num1);

    if (num1 != num2){   // Ikkita son bir xil bo'lguncha tekshiradi 
        if (num1 < num2)     //  Num1 kichik bo'lsa o'sish tartibida chiqaradi 
            numbers(num1 + 1,num2);  // Rekursiya 
        else if (num1 > num2) 
            numbers(num2 - 1,num1 );    // Aks holda kammayish tartibida    
    }
} int main(){
    int user1,user2;  

    printf("Birinchi sonni kiriting :"); scanf("%d",&user1);  // User dan so'raldi 
    printf("Ikkinchi  sonni kiriting :"); scanf("%d",&user2);

    numbers(user1,user2);  // Funksiya call qilindi 

return 0;
}