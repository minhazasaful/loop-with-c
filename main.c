#include <stdio.h>
int main() {
int array[6] = {2, 4, 5, 6, -1, 2};
int start = 5;
int size = 5;
int length = 6;
int st = start;
printf("Circular array elements:\n");
for (int i = 0; i < size; i++) {
printf("%d ", array[st]);
st = (st + 1) % length; // wrap around using modulus
}
printf("\n");
return 0;
}










