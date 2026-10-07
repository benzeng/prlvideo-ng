
undefined4 FUN_1008d1180(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = 0;
  lVar3 = FUN_1008cf3e0(0);
  uVar2 = 0;
  if (lVar3 == 0) {
LAB_1008d1216:
    lVar6 = lVar4;
    if (param_1 != 0) goto LAB_1008d1223;
  }
  else {
    lVar4 = param_1;
    if (param_1 != 0) {
LAB_1008d11cc:
      uVar2 = 0;
      iVar1 = FUN_1008cf440(lVar3,lVar4,0);
      if (iVar1 < 1) {
        if ((param_3 & 0x10) != 0) {
          uVar5 = FUN_1008885f0();
          if ((uVar5 & 0xfff) == 0x72) {
            FUN_100888070();
            uVar2 = 1;
          }
        }
      }
      else {
        uVar2 = FUN_1008d0c30(lVar3,param_2,param_3);
      }
      goto LAB_1008d1216;
    }
    lVar4 = FUN_1008d1240();
    uVar2 = 0;
    lVar6 = 0;
    if (lVar4 != 0) goto LAB_1008d11cc;
  }
  FUN_10081e1a0(lVar6);
LAB_1008d1223:
  FUN_1008cf420(lVar3);
  return uVar2;
}

