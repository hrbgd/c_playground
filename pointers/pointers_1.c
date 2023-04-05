// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a =5;
    char ch = 'a';
    printf("%d\n",a);
    printf("%p\n",&a);
    
    int* b = &a;
    printf("%p\n", b);
    
    printf("%d\n", *b);
    
    int* c = &a;
    printf("%p\n", c);
    
    char* chPtr = &ch;
    printf("%p\n", chPtr);
    
    printf("%c\n", *chPtr);

    return 0;
}