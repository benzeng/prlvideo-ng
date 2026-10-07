
undefined8 FUN_1008c49a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 local_38;
  
  local_38 = 0;
  iVar1 = -1;
  do {
    iVar1 = FUN_1008bb860(param_1,0x30,iVar1);
    if (iVar1 < 0) {
      iVar1 = FUN_100885600(param_2);
      if (iVar1 < 1) {
        return local_38;
      }
      iVar1 = 0;
      while ((piVar4 = (int *)FUN_100885620(param_2,iVar1), *piVar4 != 1 ||
             (iVar2 = FUN_1008c4b20(&local_38,*(undefined8 *)(piVar4 + 2)), iVar2 != 0))) {
        iVar1 = iVar1 + 1;
        iVar2 = FUN_100885600(param_2);
        if (iVar2 <= iVar1) {
          return local_38;
        }
      }
      return 0;
    }
    uVar3 = FUN_1008bb800(param_1,iVar1);
    uVar3 = FUN_1008bb7e0(uVar3);
    iVar2 = FUN_1008c4b20(&local_38,uVar3);
  } while (iVar2 != 0);
  return 0;
}

