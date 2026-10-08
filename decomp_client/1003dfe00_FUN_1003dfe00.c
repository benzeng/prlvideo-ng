
void FUN_1003dfe00(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  
  lVar1 = *param_1;
  iVar3 = *(int *)(lVar1 + 0x20);
  lVar4 = lVar1;
  if (iVar3 != 0) {
    plVar2 = *(long **)(lVar1 + 8);
    do {
      lVar4 = *plVar2;
      if (*plVar2 != lVar1) break;
      iVar3 = iVar3 + -1;
      plVar2 = plVar2 + 1;
      lVar4 = lVar1;
    } while (iVar3 != 0);
  }
  plVar2 = operator_new(8);
  *plVar2 = lVar4;
  *param_2 = plVar2;
  return;
}

