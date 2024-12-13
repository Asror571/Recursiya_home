#include <stdio.h>

int func(int n, int m) {
    int result = 1;
    for (int i = 0; i < m; i++) {
        result *= n; 
    }
    return result;
}

int main() {

    printf("%d\n", func(2, 3));
    printf("%d\n", func(5, 2)); 

    return 0;
}
