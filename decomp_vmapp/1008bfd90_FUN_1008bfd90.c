
undefined8 FUN_1008bfd90(int param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  plVar1 = *(long **)(param_2 + 0xb0);
  if (plVar1 != (long *)0x0) {
    if ((plVar1[1] != 0) && (iVar2 = FUN_100885600(), 0 < iVar2)) {
      iVar2 = 0;
      do {
        uVar4 = FUN_100885620(plVar1[1],iVar2);
        iVar3 = FUN_100821ab0(uVar4);
        if (iVar3 == param_1) {
          return 2;
        }
        iVar2 = iVar2 + 1;
        iVar3 = FUN_100885600(plVar1[1]);
      } while (iVar2 < iVar3);
    }
    if ((*plVar1 != 0) && (iVar2 = FUN_100885600(), 0 < iVar2)) {
      iVar2 = 0;
      do {
        uVar4 = FUN_100885620(*plVar1,iVar2);
        iVar3 = FUN_100821ab0(uVar4);
        if (iVar3 == param_1) {
          return 1;
        }
        iVar2 = iVar2 + 1;
        iVar3 = FUN_100885600(*plVar1);
      } while (iVar2 < iVar3);
    }
  }
  return 3;
}

