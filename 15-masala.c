#include <stdio.h>
#include <string.h>

    int i  = 0;

    void teskari_word(char word[]){
        int length = strlen(word);
        if (i - length == 0)  return;
        putchar(word[length-i-1]);
        i++;
        teskari_word(word);    
        
    }int main(){
        char user[30];

        printf("So'zni kiriting :"); fgets(user,sizeof(user),stdin);

        teskari_word(user);
    return 0;
    }