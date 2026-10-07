
long FUN_1008a2e00(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 local_38;
  
  local_38 = *param_2;
  uVar2 = FUN_1008a8b40(0,&local_38);
  local_38 = *param_2;
  iVar1 = FUN_100885600(uVar2);
  uVar5 = 0x74;
  if (iVar1 != 6) {
    iVar1 = FUN_100885600(uVar2);
    uVar5 = 0x198;
    if (iVar1 != 4) {
      iVar1 = FUN_100885600(uVar2);
      uVar5 = 6;
      if (iVar1 == 3) {
        lVar3 = FUN_1008b1bd0(0,&local_38,param_3);
        FUN_100885590(uVar2,FUN_1008a89a0);
        if (lVar3 == 0) {
          FUN_100887ce0(0xd,0xcf,0xa7,"d2i_pr.c",0x9f);
          return 0;
        }
        lVar4 = FUN_100894790(lVar3);
        FUN_1008b1c30(lVar3);
        if (lVar4 == 0) {
          return 0;
        }
        *param_2 = local_38;
        if (param_1 == (long *)0x0) {
          return lVar4;
        }
        *param_1 = lVar4;
        return lVar4;
      }
    }
  }
  FUN_100885590(uVar2,FUN_1008a89a0);
  lVar3 = FUN_1008a2c80(uVar5,param_1,param_2,param_3);
  return lVar3;
}

