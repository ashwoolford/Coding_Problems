int divn(int n) {
 int res = 1, i, c;
 for(i=2; i*i<=n; i++) {
  if(n % i == 0) {
   c = 0;
   while(n % i == 0) {
    n /= i;
    c++;
   }
   res *= (2*c+1);   
  }
 }
 if(n>1) res *= 3;
 return res;  // Note : res is the number of divisors of n*n 
              // as i told you only need to concern about perfect squares
}