
undefined8 FUN_1000dcba0(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(param_1 + 0x58);
  iVar1 = *(int *)(lVar2 + 8);
  if (iVar1 != *(int *)(lVar2 + 0xc)) {
    plVar3 = (long *)(lVar2 + 0x10 + (long)iVar1 * 8);
    lVar2 = (long)*(int *)(lVar2 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      if ((*(byte *)(*plVar3 + 0x24) & 2) == 0) {
        return 0;
      }
      plVar3 = plVar3 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return 1;
}

