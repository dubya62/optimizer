#include "stdio.h"
int gcd ( int var1 , int var2 ) { int var19 =  == 0 ; 
 if ( var19 ) { int var21 =  ; 
 return var21 ; 
 } else { } int var23 = var22 == 0 ; 
 if ( var23 ) { int var24 = var20 ; 
 return var24 ; 
 } else { } int var25 = 0 ; 
 label_0: 
  ; 
  ; 
  ; 
 int var30 = var20 | var22 & 1 == 0 ; 
  ; 
 if ( var30 ) { var20 = var20 >> ( 1 ) ; 
 var22 = var22 >> ( 1 ) ; 
 var25 ; 
 var25 = var25 + 1 ; 
 goto label_0 ; 
 } else { } label_1: 
 label_2: 
  ; 
  ; 
 int var34 = var20 & 1 == 0 ; 
  ; 
 if ( var34 ) { var20 = var20 >> ( 1 ) ; 
 goto label_2 ; 
 } else { } label_3: 
 label_4: 
  ; 
 long var36 = 1 ; 
 if ( var22 == 0 ) { var36 = 0 ; 
 } else { }  ; 
 int var39 = var36 ; 
  ; 
 if ( var39 ) { label_6: 
  ; 
  ; 
 int var43 = var22 & 1 == 0 ; 
  ; 
 if ( var43 ) { var22 = var22 >> ( 1 ) ; 
 goto label_6 ; 
 } else { } label_7: 
 int var44 = var20 > var22 ; 
 if ( var44 ) { int var45 = var20 ; 
 var20 = var22 ; 
 var22 = var45 ; 
 } else { } var22 = var22 - var20 ; 
 goto label_4 ; 
 } else { } label_5: 
 int var46 = var20 << var25 ; 
 return var46 ; 
 } int main ( int var5 , char * * var6 ) { ; 
 ; 
 int var7 = gcd ( 40 , 16 ) ; 
 ; 
 ; 
 ; 
 printf ( "%d\n" , var7 ) ; 
 ; 
 }
