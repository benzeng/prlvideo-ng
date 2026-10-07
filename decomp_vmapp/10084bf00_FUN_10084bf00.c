
int FUN_10084bf00(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  
  iVar3 = (int)param_1[1];
  lVar4 = (long)iVar3;
  if (iVar3 != (int)param_2[1]) {
    return iVar3 - (int)param_2[1];
  }
  lVar5 = (long)(iVar3 + -1) * 8;
  puVar7 = (ulong *)(*param_2 + lVar5);
  puVar6 = (ulong *)(lVar5 + *param_1);
  do {
    if (lVar4 < 1) {
      return 0;
    }
    uVar1 = *puVar7;
    lVar4 = lVar4 + -1;
    puVar7 = puVar7 + -1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + -1;
  } while (uVar2 == uVar1);
  iVar3 = -1;
  if (uVar1 < uVar2) {
    iVar3 = 1;
  }
  return iVar3;
}

