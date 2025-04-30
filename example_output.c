#include "time.h"
#include "stdio.h"
long gcd ( long var1 , long var2 ) { int var76 = var1 == 0 ; 
 if ( var76 ) { long var53 = var2 ; 
 return var53 ; 
 } else { } long var58 = var2 % var1 ; 
 long var59 = var1 ; 
 long var54 = gcd ( var58 , var59 ) ; 
 ; 
 return var54 ; 
 } int isrelprime ( long var4 , long var5 ) { long var6 = var4 ; 
 long var7 = var5 ; 
 long var8 ; 
 label_0: 
 long var115 = var6 == 0 ; 
 long var133 = 0 ; 
 if ( var115 ) { var133 = 1 ; 
 } else { } long var116 = var133 ; 
 int var77 = var116 ; 
 long var117 = var77 ; 
 if ( var77 ) { var8 = var6 ; 
 var6 = var7 % var6 ; 
 var7 = var8 ; 
 goto label_0 ; 
 } else { } label_1: 
 int var55 = var7 == 1 ; 
 return var55 ; 
 } long slowPhi ( long var10 , long * var11 , long var12 ) { long var13 = 0 ; 
 { long var14 = 1 ; 
 label_2: 
 int var78 = var14 < var10 ; 
 if ( var78 ) { long var15 = var14 ; 
 long var16 = var10 ; 
 long var17 ; 
 label_4: 
 long var118 = var15 == 0 ; 
 long var134 = 0 ; 
 if ( var118 ) { var134 = 1 ; 
 } else { } long var119 = var134 ; 
 int var79 = var119 ; 
 long var120 = var79 ; 
 if ( var79 ) { var17 = var15 ; 
 var15 = var16 % var15 ; 
 var16 = var17 ; 
 goto label_4 ; 
 } else { } label_5: 
 int var80 = var16 == 1 ; 
 if ( var80 ) { var13 ; 
 var13 = var13 + 1 ; 
 } else { } var14 ; 
 var14 = var14 + 1 ; 
 goto label_2 ; 
 } else { } label_3: 
 } long var56 = var13 ; 
 return var56 ; 
 } long fastPhi ( long var19 , long * var20 , long var21 ) { long var22 = 1 ; 
 long var23 = 1 ; 
 long var24 = 1 ; 
 { long var25 = 0 ; 
 label_6: 
 int var81 = var25 < var21 ; 
 if ( var81 ) { long var90 = var20 [ var25 ] ; 
 long var121 = var90 == var23 ; 
 long var135 = 0 ; 
 if ( var121 ) { var135 = 1 ; 
 } else { } long var122 = var135 ; 
 long var91 = var122 ; 
 long var123 = var91 ; 
 long var124 = var23 == 1 ; 
 long var136 = 0 ; 
 if ( var124 ) { var136 = 1 ; 
 } else { } long var125 = var136 ; 
 long var92 = var125 ; 
 long var126 = var92 ; 
 long var114 = 0 ; 
 if ( var91 ) { if ( var92 ) { var114 = 1 ; 
 } else { } } else { } long var93 = var114 ; 
 int var82 = var93 ; 
 long var94 = var82 ; 
 if ( var82 ) { long var26 = 0 ; 
 { long var27 = 1 ; 
 label_8: 
 int var83 = var27 < var24 ; 
 if ( var83 ) { long var28 = var27 ; 
 long var29 = var24 ; 
 long var30 ; 
 label_10: 
 long var127 = var28 == 0 ; 
 long var137 = 0 ; 
 if ( var127 ) { var137 = 1 ; 
 } else { } long var128 = var137 ; 
 int var84 = var128 ; 
 long var129 = var84 ; 
 if ( var84 ) { var30 = var28 ; 
 var28 = var29 % var28 ; 
 var29 = var30 ; 
 goto label_10 ; 
 } else { } label_11: 
 int var85 = var29 == 1 ; 
 if ( var85 ) { var26 ; 
 var26 = var26 + 1 ; 
 } else { } var27 ; 
 var27 = var27 + 1 ; 
 goto label_8 ; 
 } else { } label_9: 
 } var22 = var22 * ( var26 ) ; 
 var24 = var20 [ ( var25 ) ] ; 
 } else { long var95 = var20 [ var25 ] ; 
 long var96 = var24 * var95 ; 
 var24 = var96 ; 
 long var97 = var24 ; 
 } var23 = var20 [ ( var25 ) ] ; 
 var25 ; 
 var25 = var25 + 1 ; 
 goto label_6 ; 
 } else { } label_7: 
 } long var31 = 0 ; 
 { long var32 = 1 ; 
 label_12: 
 int var86 = var32 < var24 ; 
 if ( var86 ) { long var33 = var32 ; 
 long var34 = var24 ; 
 long var35 ; 
 label_14: 
 long var130 = var33 == 0 ; 
 long var138 = 0 ; 
 if ( var130 ) { var138 = 1 ; 
 } else { } long var131 = var138 ; 
 int var87 = var131 ; 
 long var132 = var87 ; 
 if ( var87 ) { var35 = var33 ; 
 var33 = var34 % var33 ; 
 var34 = var35 ; 
 goto label_14 ; 
 } else { } label_15: 
 int var88 = var34 == 1 ; 
 if ( var88 ) { var31 ; 
 var31 = var31 + 1 ; 
 } else { } var32 ; 
 var32 = var32 + 1 ; 
 goto label_12 ; 
 } else { } label_13: 
 } var22 = var22 * ( var31 ) ; 
 long var57 = var22 ; 
 return var57 ; 
 } int main ( int var37 , char * * var38 ) { long var39 [ ( ) = ] { long long long long long ; 
 long var40 = 6 ; 
 long var41 = 1 ; 
 { long var42 = 0 ; 
 label_16: 
 int var89 = var42 < var40 ; 
 if ( var89 ) { long var103 = var39 [ var42 ] ; 
 long var104 = var41 * var103 ; 
 var41 = var104 ; 
 long var105 = var41 ; 
 var42 ; 
 var42 = var42 + 1 ; 
 goto label_16 ; 
 } else { } label_17: 
 } long var43 long var44 = clock ( ) ; 
 ; 
 long var60 = var41 ; 
 long var61 = var39 ; 
 long var62 = var40 ; 
 long var46 = fastPhi ( var60 , var61 , var62 ) ; 
 ; 
 var43 long var47 = clock ( ) ; 
 ; 
 var43 long var48 = clock ( ) ; 
 ; 
 long var63 = var41 ; 
 long var64 = var39 ; 
 long var65 = var40 ; 
 long var49 = slowPhi ( var63 , var64 , var65 ) ; 
 ; 
 var43 long var50 = clock ( ) ; 
 ; 
 long var66 = "fast %ld: %ld\n" ; 
 long var67 = var41 ; 
 long var68 = var49 ; 
 printf ( var66 , var67 , var68 ) ; 
 ; 
 long var69 = "Time spent: %lf\n" ; 
 long var106 = var47 - var44 ; 
 long var107 = ( double ) var106 ; 
 long var108 = var107 / long var52 ; 
 long var70 = var108 ; 
 long var109 = var70 ; 
 printf ( var69 , var70 ) ; 
 ; 
 long var71 = "slow %ld: %ld\n" ; 
 long var72 = var41 ; 
 long var73 = var46 ; 
 printf ( var71 , var72 , var73 ) ; 
 ; 
 long var74 = "Time spent: %lf\n" ; 
 long var110 = var50 - var48 ; 
 long var111 = ( double ) var110 ; 
 long var112 = var111 / var52 ; 
 long var75 = var112 ; 
 long var113 = var75 ; 
 printf ( var74 , var75 ) ; 
 ; 
 }
