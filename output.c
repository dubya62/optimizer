#include "stdio.h"
struct TestStruct { int a ; } ; 
 int add ( int var1 , int var2 ) { int var10 = var1 + var2 ; return var10 ; } int main ( int var4 , char * * var5 ) { struct TestStruct var6 ; label_0: 
 if ( 1 ) { goto label_1 ; goto label_0 ; } else { } label_1: 
 var6.a = 2 ; int var8 = add ( 2 , 3 ) ; ; printf ( "%d\n" , var8 ) ; ; int var11 = var8 ; return var11 ; }
