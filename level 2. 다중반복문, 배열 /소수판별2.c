#include <stdio.h>

int main() {

 //Please Enter Your Code Here
 int n, m;
 scanf("%d %d", &n, &m);

 for(int i=n; i<=m; i++){

   if(i==1) continue;
   else if(i==2) printf("%d ", i);
   else{
     bool flag = true;
     for(int j=2; j<i; j++){
       if(i%j==0){
         flag = false;
         break;
       }
     }
     if(flag == true)
         printf("%d ", i);
   }

 }

 return 0;
}
