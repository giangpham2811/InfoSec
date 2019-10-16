#include <stdio.h>
#include<math.h>
int re_square(int a, int x){
    if (x == 0)
        return 1;
    if (x == 1)
        return a;
    if (x % 2 != 0)
        return a * re_square(a * a, (x - 1) / 2);
    else
        return re_square(a * a, x / 2);
	}
int main()
   {
	   int a = 2;
	   int x = 5;
	   int n = 3;
	   printf("%d",re_square(a,x)%n);
	   return 0;
   }
   
