
undefined8 FUN_1008c1100(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_100885590(*(long *)(param_1 + 0x30),FUN_100899890);
    }
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    else {
      lVar3 = FUN_100884e10();
      *(long *)(param_1 + 0x30) = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
      iVar1 = FUN_100885600(param_2);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          uVar4 = FUN_100885620(param_2,iVar1);
          lVar3 = FUN_100822ed0(uVar4);
          if (lVar3 == 0) {
            return 0;
          }
          iVar2 = FUN_1008852e0(*(undefined8 *)(param_1 + 0x30),lVar3);
          if (iVar2 == 0) {
            FUN_100899890(lVar3);
            return 0;
          }
          iVar1 = iVar1 + 1;
          iVar2 = FUN_100885600(param_2);
        } while (iVar1 < iVar2);
      }
      *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 0x80;
    }
    uVar4 = 1;
  }
  return uVar4;
}

