#include "stdio.h"
#include "stdlib.h"
int gcd ( int var1 , int var2 ) { int var22 = var1 == 0 ; 
 if ( var22 ) { int var24 = var2 ; 
 return var24 ; 
 } else { } int var26 = var2 == 0 ; 
 if ( var26 ) { int var27 = var1 ; 
 return var27 ; 
 } else { } int var28 = 0 ; 
 label_0: 
  ; 
  ; 
  ; 
 int var33 = ( ( ( var1 | var2 ) & 1 ) == 0 ) ; 
  ; 
 if ( var33 ) { var1 = var1 >> ( 1 ) ; 
 var2 = var2 >> ( 1 ) ; 
 var28 ; 
 var28 = var28 + 1 ; 
 goto label_0 ; 
 } else { } label_1: 
 label_2: 
  ; 
  ; 
 int var37 = ( ( var1 & 1 ) == 0 ) ; 
  ; 
 if ( var37 ) { var1 = var1 >> ( 1 ) ; 
 goto label_2 ; 
 } else { } label_3: 
 label_4: 
  ; 
 long var39 = 1 ; 
 if ( ( var2 == 0 ) ) { var39 = 0 ; 
 } else { }  ; 
 int var42 = ( var39 ) ; 
  ; 
 if ( var42 ) { label_6: 
  ; 
  ; 
 int var46 = ( ( var2 & 1 ) == 0 ) ; 
  ; 
 if ( var46 ) { var2 = var2 >> ( 1 ) ; 
 goto label_6 ; 
 } else { } label_7: 
 int var47 = var1 > var2 ; 
 if ( var47 ) { int var48 = var1 ; 
 var1 = var2 ; 
 var2 = var48 ; 
 } else { } var2 = var2 - var1 ; 
 goto label_4 ; 
 } else { } label_5: 
 int var49 = var1 << var28 ; 
 return var49 ; 
 } int main ( int var5 , char * * var6 ) { ; 
 ; 
 ; 
 ; 
 ; 
 ; 
 int var7 = gcd ( ( atoi ( ( var6 [ ( 1 ) ] ) ) ) , ( atoi ( ( var6 [ ( 2 ) ] ) ) ) ) ; 
 ; 
 ; 
 ; 
 printf ( ( "%d\n" ) , ( var7 ) ) ; 
 ; 
 }
