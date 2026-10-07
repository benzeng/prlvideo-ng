
undefined8 FUN_10073db40(long *param_1,int param_2,long param_3,int param_4,int param_5)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 *puVar5;
  
  if ((*(int *)((long)param_1 + 0xc) < param_2) &&
     (lVar1 = FUN_10072d730(param_1,param_2), lVar1 == 0)) {
    return 0;
  }
  iVar2 = (int)param_1[1];
  if (iVar2 < param_2) {
    ___bzero(*param_1 + (long)iVar2 * 8,(ulong)(uint)((param_2 + -1) - iVar2) * 8 + 8);
    *(int *)(param_1 + 1) = param_2;
    iVar2 = param_2;
  }
  if (param_2 != 0) {
    puVar5 = (undefined1 *)(param_3 + param_4);
    uVar3 = 0;
    do {
      *puVar5 = *(undefined1 *)(*param_1 + uVar3);
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + param_5;
    } while (uVar3 < (ulong)((long)param_2 << 3));
    iVar2 = (int)param_1[1];
  }
  if (0 < iVar2) {
    plVar4 = (long *)((long)(iVar2 + -1) * 8 + *param_1);
    iVar2 = iVar2 + 1;
    do {
      if (*plVar4 != 0) {
        return 1;
      }
      plVar4 = plVar4 + -1;
      *(int *)(param_1 + 1) = iVar2 + -2;
      iVar2 = iVar2 + -1;
    } while (1 < iVar2);
  }
  return 1;
}

