#include <stdio.h>
#include <cstdlib>
void update(int *a,int *b) {
    // Complete this function
    int  temp_a=*a,temp_b=*b;
    *a=temp_b+temp_a;
    *b=abs(temp_a-temp_b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
