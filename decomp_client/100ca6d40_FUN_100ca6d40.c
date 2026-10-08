
undefined8 FUN_100ca6d40(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  iVar1 = FUN_100c5c0c0(param_3,"%*sIssuer: ",param_4,"");
  if (0 < iVar1) {
    uVar4 = 0;
    iVar1 = FUN_100c79e60(param_3,*param_2,0,0x82031f);
    if (0 < iVar1) {
      iVar1 = FUN_100c60800(param_2[1]);
      uVar4 = 1;
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          puVar3 = (undefined8 *)FUN_100c60820(param_2[1],iVar1);
          iVar2 = FUN_100c5c0c0(param_3,"\n%*s",param_4 * 2,"");
          if ((((iVar2 < 1) || (iVar2 = FUN_100c74930(param_3,*puVar3), iVar2 < 1)) ||
              (iVar2 = FUN_100c58a70(param_3," - "), iVar2 < 1)) ||
             (iVar2 = FUN_100ca12d0(param_3,puVar3[1]), iVar2 < 1)) {
            return 0;
          }
          iVar1 = iVar1 + 1;
          iVar2 = FUN_100c60800(param_2[1]);
        } while (iVar1 < iVar2);
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

