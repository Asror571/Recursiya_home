#include <stdio.h>

int ekub_function(int num1, int num2){  // Funksiya yaratildi 

    if(num1 == num2) return num1;  // Agar user kiritgan sonlar teng bo'lsa o'zlari ekub bo'ladi

    if (num1 > num2) num1 = num1 - num2;  // ekubni topish uchu kattasidan kichikgi ayirildi
    else num2 = num2 - num1;

 return ekub_function(num1,num2); // Return qiymatlarni qaytaradi 

}
int ekuk_func(int  num1,int num2){   
    return num1 * num2 / ekuk_func(num1,num2);  //Ekukni hisoblash uchun

}
int main(){
    int user1,user2;

    printf("Birinchi sonni kiriting :"); scanf("%d",&user1);  // Foydalanuvchidan olindi 
    printf("Ikkinchi sonni kiriting :"); scanf("%d",&user2);

    printf(" %d\n",ekub_function(user1,user2));  // Funksiya call qilindi 

return 0;

}