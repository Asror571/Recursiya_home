#include <stdio.h>

int check_numbers(char s[], int index, int balans){
    if(balans < 0 || s[index] == '\0') return balans;
    if(s[index] == '(') balans++;
    else if(s[index] == ')') balans--;
    return chech_balans(s, index + 1, balans);
}
void print_balans(char s[]){
    if(chech_balans(s, 0, 0) == 0)
        printf("Togri\n");
    else
        printf("Xato\n");
}
int main(){
    
    char s[] = "() (12+5) - (2*5)(()";
    print_balans(s);
}