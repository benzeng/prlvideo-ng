
undefined8 FUN_100c5f090(long *param_1,long param_2,long *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = FUN_100c58530(&DAT_1023083d0);
  uVar3 = 0;
  lVar5 = 0;
  lVar4 = 0;
  if (lVar2 != 0) {
    lVar5 = FUN_100c58530(&DAT_1023083d0);
    if (lVar5 != 0) {
      if (((param_2 == 0) || (iVar1 = FUN_100c58d60(lVar2,0x88,param_2), iVar1 != 0)) &&
         ((param_4 == 0 || (iVar1 = FUN_100c58d60(lVar5,0x88,param_4), iVar1 != 0)))) {
        iVar1 = FUN_100c58d60(lVar2,0x8a,0,lVar5);
        uVar3 = 1;
        lVar4 = lVar2;
        if (iVar1 != 0) goto LAB_100c5f16c;
      }
      FUN_100c586e0(lVar2);
      lVar2 = lVar5;
    }
    FUN_100c586e0(lVar2);
    uVar3 = 0;
    lVar5 = 0;
    lVar4 = 0;
  }
LAB_100c5f16c:
  *param_1 = lVar4;
  *param_3 = lVar5;
  return uVar3;
}

