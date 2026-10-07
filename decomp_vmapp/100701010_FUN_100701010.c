
void FUN_100701010(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + -1;
  lVar1 = *(long *)(*param_2 + 8);
  lVar2 = *(long *)(*param_2 + 0x10);
  if (lVar2 == 0) {
    *param_1 = lVar1;
  }
  else {
    *(long *)(lVar2 + 8) = lVar1;
  }
  lVar2 = *(long *)(*param_2 + 8);
  lVar3 = *(long *)(*param_2 + 0x10);
  if (lVar2 == 0) {
    param_1[1] = lVar3;
  }
  else {
    *(long *)(lVar2 + 0x10) = lVar3;
  }
  _free((void *)*param_2);
  *param_2 = lVar1;
  return;
}

