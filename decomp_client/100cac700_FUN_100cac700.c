
undefined4 FUN_100cac700(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = 0;
  lVar3 = FUN_100caa960(0);
  uVar2 = 0;
  if (lVar3 == 0) {
LAB_100cac796:
    lVar6 = lVar4;
    if (param_1 != 0) goto LAB_100cac7a3;
  }
  else {
    lVar4 = param_1;
    if (param_1 != 0) {
LAB_100cac74c:
      uVar2 = 0;
      iVar1 = FUN_100caa9c0(lVar3,lVar4,0);
      if (iVar1 < 1) {
        if ((param_3 & 0x10) != 0) {
          uVar5 = FUN_100c637f0();
          if ((uVar5 & 0xfff) == 0x72) {
            FUN_100c63270();
            uVar2 = 1;
          }
        }
      }
      else {
        uVar2 = FUN_100cac1b0(lVar3,param_2,param_3);
      }
      goto LAB_100cac796;
    }
    lVar4 = FUN_100cac7c0();
    uVar2 = 0;
    lVar6 = 0;
    if (lVar4 != 0) goto LAB_100cac74c;
  }
  FUN_100bf3910(lVar6);
LAB_100cac7a3:
  FUN_100caa9a0(lVar3);
  return uVar2;
}

