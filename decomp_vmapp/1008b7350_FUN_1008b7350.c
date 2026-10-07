
long * FUN_1008b7350(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  
  iVar2 = FUN_100885600();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      plVar3 = (long *)FUN_100885620(param_1,iVar4);
      lVar1 = *(long *)(*plVar3 + 0x28);
      if ((((*(long *)(lVar1 + 0x18) != 0) && (*(int *)(lVar1 + 8) == 0)) ||
          (iVar2 = FUN_1008a1170(lVar1,0), -1 < iVar2)) &&
         (((*(long *)(param_2 + 0x18) != 0 && (*(int *)(param_2 + 8) == 0)) ||
          (iVar2 = FUN_1008a1170(param_2,0), -1 < iVar2)))) {
        iVar2 = *(int *)(lVar1 + 0x20);
        if (iVar2 == *(int *)(param_2 + 0x20)) {
          iVar2 = _memcmp(*(void **)(lVar1 + 0x18),*(void **)(param_2 + 0x18),(long)iVar2);
        }
        else {
          iVar2 = iVar2 - *(int *)(param_2 + 0x20);
        }
        if (iVar2 == 0) {
          return plVar3;
        }
      }
      iVar4 = iVar4 + 1;
      iVar2 = FUN_100885600(param_1);
    } while (iVar4 < iVar2);
  }
  return (long *)0x0;
}

