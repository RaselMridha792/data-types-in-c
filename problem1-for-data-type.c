#include <stdio.h>

int main () {

      // ইউজার থেকে দুইটি পূর্ণসংখ্যা (int) ইনপুট নিয়ে তাদের যোগফল বের করো। 
      int a, b;
      printf("enter your numbers: ");
      scanf("%d %d", &a, &b);
      int sum = a + b;
      printf("the sum is:  %d ", sum);
    return 0;
}