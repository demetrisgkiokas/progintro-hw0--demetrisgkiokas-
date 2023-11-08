#include <stdio.h>

int collatz(long long n) {
    int length = 1;
    while (n != 1) {
    if (n % 2 == 0) {
     n = n / 2;
      } else {
        n = 3 * n + 1;
        }
    length++;
    }
    return length;
}

int findmaxcollatz(long long start, long long end) {
int maxlen = 0;
int maxnum= 0;
for (long long number = start; number <= end; number++) {
    int length = collatz(number);
    if (length > maxlen) {
        maxlen = length;
        maxnum = number;
        }
    }
    return maxnum;
}

int main() {
long long telos = 30000000;
long long arxi = 1;
int apotelesma = findmaxcollatz(arxi, telos);

    printf( arxi, telos, apotelesma);

    return 0;
}
