long slowPhi ( long var1 , long * var2 , long var3 ) { long var4 = 0 ; 
 { long var5 = 1 ; 
 label_0: 
 int var10 = var5 < var1 ; 
 if ( var10 ) { long var6 = var5 ; 
 long var7 = var1 ; 
 long var8 ; 
 label_2: 
 long var16 = 0 ; 
 if ( var6 == 0 ) { var16 = 1 ; 
 } else { } int var11 = var16 ; 
 if ( var11 ) { var8 = var6 ; 
 var6 = var7 % var6 ; 
 var7 = var8 ; 
 goto label_2 ; 
 } else { } label_3: 
 int var12 = var7 == 1 ; 
 if ( var12 ) { var4 ; 
 var4 = var4 + 1 ; 
 } else { } var5 ; 
 var5 = var5 + 1 ; 
 goto label_0 ; 
 } else { } label_1: 
 } long var9 = var4 ; 
 return var9 ; 
 }
