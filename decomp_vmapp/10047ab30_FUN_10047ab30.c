
void FUN_10047ab30(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN_10047a190(param_2 + 8,0,0,0x2065);
    return;
  }
  plVar3 = *(long **)(param_1 + 8);
  lVar5 = *plVar3;
  iVar1 = *(int *)(lVar5 + 0xc);
  iVar2 = *(int *)(lVar5 + 8);
  if (iVar2 < iVar1) {
    FUN_10047a2c0(param_2,lVar5 + 0x10 + (long)iVar2 * 8);
    if (iVar1 + -1 != iVar2) {
      lVar5 = 1;
      do {
        lVar4 = *plVar3;
        FUN_10047a2c0(param_2,lVar4 + 0x10 + (*(int *)(lVar4 + 8) + lVar5) * 8);
        lVar5 = lVar5 + 1;
      } while (iVar1 - iVar2 != (int)lVar5);
    }
  }
  return;
}

