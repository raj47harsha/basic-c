#include<stdio.h>

int main(void) {
uint32_t a = 57;
// conversion from incompatible types needs a cast !
unsigned char* ap = (unsigned char*)&a;
for (size_t i = 0; i < sizeof a; ++i) {
/* set each byte of a to 42 */
ap[i] = 42;
}
printf("a now has value %" "\n", a);
return 0;
}