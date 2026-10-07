
int FUN_1007d9ef0(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  
  iVar4 = FUN_1007d8850();
  *(int *)(param_1 + 0x20) = iVar4;
  plVar1 = (long *)(param_1 + 0x28);
  plVar5 = *(long **)(param_1 + 0x28);
  if (plVar5 == plVar1) {
LAB_1007d9f4b:
    iVar4 = -1;
  }
  else {
    iVar4 = (int)plVar5[2] - iVar4;
    while (iVar4 < 1) {
      lVar2 = *plVar5;
      plVar3 = (long *)plVar5[1];
      *(long **)(lVar2 + 8) = plVar3;
      *plVar3 = lVar2;
      *plVar5 = (long)plVar5;
      plVar5[1] = (long)plVar5;
      (*(code *)plVar5[3])();
      plVar5 = (long *)*plVar1;
      if (plVar5 == plVar1) goto LAB_1007d9f4b;
      iVar4 = (int)plVar5[2] - *(int *)(param_1 + 0x20);
    }
  }
  return iVar4;
}

