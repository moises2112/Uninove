#include <stdio.h>
#define MAX 10
main() {
int n=1;
int m=0;
do {
if (m<n) {printf ("%d \t", n);
++m;}
else {m=0;
++n;}
} while (n<MAX);
system ("pause");
}
