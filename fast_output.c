long fastPhi ( long var1 , long * var2 , long var3 ) { long var4 = 1 ; 
 long var5 = 1 ; 
 long var6 = 1 ; 
 { long var7 = 0 ; 
 label_0: 
 int var19 = var7 < var3 ; 
 if ( var19 ) {  var27 = var2 [ 0 ] ; 
  var36 = var27 == var5 ; 
 long var48 = 0 ; 
 if ( var36 ) { var48 = 1 ; 
 } else { }  var37 = var48 ; 
  var28 = var37 ; 
  var38 = var28 ; 
  var39 = var5 == 1 ; 
 long var49 = 0 ; 
 if ( var39 ) { var49 = 1 ; 
 } else { }  var40 = var49 ; 
  var29 = var40 ; 
  var41 = var29 ; 
 long var35 = 0 ; 
 if ( var28 ) { if ( var29 ) { var35 = 1 ; 
 } else { } } else { }  var30 = var35 ; 
 int var20 = var30 ; 
  var31 = var20 ; 
 if ( var20 ) { long var8 = 0 ; 
 { long var9 = 1 ; 
 label_2: 
 int var21 = var9 < var6 ; 
 if ( var21 ) { long var10 = var9 ; 
 long var11 = var6 ; 
 long var12 ; 
 label_4: 
  var42 = var10 == 0 ; 
 long var50 = 0 ; 
 if ( var42 ) { var50 = 1 ; 
 } else { }  var43 = var50 ; 
 int var22 = var43 ; 
  var44 = var22 ; 
 if ( var22 ) { var12 = var10 ; 
 var10 = var11 % var10 ; 
 var11 = var12 ; 
 goto label_4 ; 
 } else { } label_5: 
 int var23 = var11 == 1 ; 
 if ( var23 ) { var8 ; 
 var8 = var8 + 1 ; 
 } else { } var9 ; 
 var9 = var9 + 1 ; 
 goto label_2 ; 
 } else { } label_3: 
 } var4 = var4 * ( var8 ) ; 
 var6 = var2 [ 0 ] var7 ) ; 
 } else {  var32 = var2 [ 0 ] ; 
  var33 = var6 * var32 ; 
 var6 = var33 ; 
  var34 = var6 ; 
 } var5 = var2 [ 0 ] var7 ) ; 
 var7 ; 
 var7 = var7 + 1 ; 
 goto label_0 ; 
 } else { } label_1: 
 } long var13 = 0 ; 
 { long var14 = 1 ; 
 label_6: 
 int var24 = var14 < var6 ; 
 if ( var24 ) { long var15 = var14 ; 
 long var16 = var6 ; 
 long var17 ; 
 label_8: 
  var45 = var15 == 0 ; 
 long var51 = 0 ; 
 if ( var45 ) { var51 = 1 ; 
 } else { }  var46 = var51 ; 
 int var25 = var46 ; 
  var47 = var25 ; 
 if ( var25 ) { var17 = var15 ; 
 var15 = var16 % var15 ; 
 var16 = var17 ; 
 goto label_8 ; 
 } else { } label_9: 
 int var26 = var16 == 1 ; 
 if ( var26 ) { var13 ; 
 var13 = var13 + 1 ; 
 } else { } var14 ; 
 var14 = var14 + 1 ; 
 goto label_6 ; 
 } else { } label_7: 
 } var4 = var4 * ( var13 ) ; 
 long var18 = var4 ; 
 return var18 ; 
 }
