
undefined8 FUN_1008d5b80(long *param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (*param_1 == 0) {
    lVar4 = FUN_100884e10();
    *param_1 = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = FUN_100885600();
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        puVar3 = (undefined8 *)FUN_100885620(*param_1,iVar1);
        iVar2 = FUN_100821ab0(*puVar3);
        if (iVar2 == param_2) {
          FUN_1008a06e0(puVar3);
          lVar4 = FUN_1008a0720(param_2,param_3,param_4);
          if (lVar4 == 0) {
            return 0;
          }
          lVar6 = FUN_100885650(*param_1,iVar1,lVar4);
          if (lVar6 != 0) {
            return 1;
          }
          goto LAB_1008d5c67;
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_100885600(*param_1);
      } while (iVar1 < iVar2);
    }
  }
  lVar4 = FUN_1008a0720(param_2,param_3,param_4);
  uVar5 = 0;
  if (lVar4 != 0) {
    iVar1 = FUN_1008852e0(*param_1,lVar4);
    uVar5 = 1;
    if (iVar1 == 0) {
LAB_1008d5c67:
      FUN_1008a06e0(lVar4);
      uVar5 = 0;
    }
  }
  return uVar5;
}

