// Online C compiler to run C program online
#include <stdio.h>


struct Person{
    char name;
    int age;
};


int main() {
    
    struct Person p1;
    p1.name = 'v';
    p1.age = 97;
    
    
    printf("name: %c\n", p1.name);
    printf("age: %d\n", p1.age);
    
    printf("address of p1: %p\n", &p1);
    
    struct Person* p = &p1;
    printf("%p\n",p);
    
    printf("Age by pointer: %d\n",p->age);
    
    printf("asdas pointer: %c\n",*p);
    printf("asdas pointer: %p\n",p);


    
    
    char a[] = "abcde";
    
    printf("charData: %s", a);
    
    
    return 0;
}