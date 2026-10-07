
undefined8 FUN_1008c75c0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar1 = FUN_100885600(*(undefined8 *)(param_1 + 8));
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      puVar2 = (undefined8 *)FUN_100885620(*(undefined8 *)(param_1 + 8),iVar3);
      iVar1 = FUN_1008afeb0(*puVar2,param_2);
      if (iVar1 == 0) {
        return puVar2[1];
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_100885600(*(undefined8 *)(param_1 + 8));
    } while (iVar3 < iVar1);
  }
  return 0;
}

