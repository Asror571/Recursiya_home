#include <stdio.h>

int kvadrat_func(int num1,int daraja){
    if (daraja == 0) return 1;   // Agr daraja 0 ga teng bo'lsa 1 qayatadi

    return  num1 * kvadrat_func(num1,daraja -1); // Hisoblandi 

} int main(){
    int user1,user2;

    printf("Birinchi sonni kiriting :"); scanf("%d",&user1);  // Userdan olindi
    printf("Darajani  kiriting :"); scanf("%d",&user2);
   
    printf("%d",kvadrat_func(user1,user2));  // Funksiya call qilindiva chiqarildi

return 0;
}