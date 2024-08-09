#include <stdio.h>
void num(int);
void tum(int*);
int main() {
    int no=4;
    num(no);
    printf("%d\n",no);
    tum(&no);
printf("%d",no);
    return 0;
}
void num(int a){
    a=a*a;
    printf("%d\n",a);
}
void tum(int *ptr){
    *ptr=*ptr * *ptr;
    printf("%d\n",*ptr);
}
