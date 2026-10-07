
long * FUN_1008cd8e0(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  
  iVar1 = FUN_100885600(*(undefined8 *)(param_1 + 8));
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      plVar2 = (long *)FUN_100885620(*(undefined8 *)(param_1 + 8),iVar3);
      if ((plVar2[1] == param_2) &&
         (iVar1 = FUN_1008230a0(*(undefined8 *)(*plVar2 + 8),param_3), iVar1 == 0)) {
        return plVar2;
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_100885600(*(undefined8 *)(param_1 + 8));
    } while (iVar3 < iVar1);
  }
  return (long *)0x0;
}

