
undefined8 FUN_100ca2d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  
  iVar1 = FUN_100c60800(param_2);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      puVar3 = (undefined8 *)FUN_100c60820(param_2,iVar1);
      FUN_100c5c0c0(param_3,"%*sPolicy: ",param_4,"");
      FUN_100c74930(param_3,*puVar3);
      FUN_100c58a70(param_3,"\n");
      if (puVar3[1] != 0) {
        FUN_100ca3cc0(param_3,puVar3[1],param_4 + 2);
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_100c60800(param_2);
    } while (iVar1 < iVar2);
  }
  return 1;
}

