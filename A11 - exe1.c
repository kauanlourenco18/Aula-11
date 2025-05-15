#include <stdio.h>

int main() {
int x[5];

x[0] = 7;
x[1] = 5;
x[2] = 9;
x[3] = 8;
x[4] = 3;

for(int i = 0; i < 5; i++) {
    
    printf("x[%d] = %d\n", i, x[i]);

}
 return 0;
}