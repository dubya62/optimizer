#include "stdio.h"
struct TestStruct { int a ; } ; 
 int add ( int var1 , int var2 ) { int var10 = var1 + var2 ; return var10 ; } int main ( int var4 , char * * var5 ) { struct TestStruct var6 ; label_0: 
 if ( 1 ) { goto label_1 ; } else { } label_1: 
 var6.a = 2 ; var12 = 2 ; var13 = 3 ; var14 = "%d\n" ; var15 = int var8 ; var16 = var12 ; var17 = var13 ; var8 = add ( var16 , var17 ) ; printf ( var14 , var15 ) ; ; int var11 = var8 ; return var11 ; }
