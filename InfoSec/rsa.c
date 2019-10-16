#include <stdio.h>
#include<math.h>
int gcd(int a, int b){ 
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
 }   
  int lcm(int a, int b)  
 {  
    return (a*b)/gcd(a, b);  
 }  
 int Carmichael(p,q){
     return lcm(p-1,q-1);
 }
int encryption(m,e){
    
}
