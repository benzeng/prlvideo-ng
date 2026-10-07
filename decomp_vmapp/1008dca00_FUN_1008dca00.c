
long FUN_1008dca00(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_100821ab0(*param_1);
  if (iVar1 == 0x16) {
    uVar6 = 0;
    if (param_1[1] != 0) {
      uVar6 = *(undefined8 *)(param_1[1] + 0x28);
    }
  }
  else {
    FUN_100887ce0(0x2e,0x85,0x6c,"cms_sd.c",0x47);
    uVar6 = 0;
  }
  iVar1 = FUN_100885600(uVar6);
  iVar4 = 0;
  lVar3 = 0;
  if (0 < iVar1) {
    do {
      lVar2 = FUN_100885620(uVar6,iVar4);
      lVar5 = *(long *)(lVar2 + 0x38);
      if (lVar5 != 0) {
        if (lVar3 == 0) {
          lVar3 = FUN_100884e10();
          if (lVar3 == 0) {
            return 0;
          }
          lVar5 = *(long *)(lVar2 + 0x38);
        }
        iVar1 = FUN_1008852e0(lVar3,lVar5);
        if (iVar1 == 0) {
          FUN_100884dd0(lVar3);
          return 0;
        }
      }
      iVar4 = iVar4 + 1;
      iVar1 = FUN_100885600(uVar6);
    } while (iVar4 < iVar1);
  }
  return lVar3;
}

