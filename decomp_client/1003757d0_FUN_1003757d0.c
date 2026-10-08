
long FUN_1003757d0(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x30);
  iVar1 = *(int *)(lVar2 + 8);
  lVar4 = 0;
  if (*(int *)(lVar2 + 0xc) != iVar1) {
    plVar3 = *(long **)(lVar2 + 0x10 +
                       ((long)((*(int *)(lVar2 + 0xc) + -1) - iVar1) + (long)iVar1) * 8);
    lVar2 = *plVar3;
    lVar4 = 0;
    if ((lVar2 != 0) && (lVar4 = 0, *(int *)(lVar2 + 4) != 0)) {
      lVar4 = plVar3[1];
    }
  }
  return lVar4;
}

