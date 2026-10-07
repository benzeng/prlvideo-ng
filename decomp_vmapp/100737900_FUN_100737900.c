
ulong FUN_100737900(long param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  
  iVar2 = (int)param_2[2];
  if (iVar2 == (int)param_3[2]) {
    uVar3 = FUN_100736d50(param_1);
    *(int *)(param_1 + 0x10) = iVar2;
    return uVar3;
  }
  plVar5 = param_3;
  if (iVar2 == 0) {
    plVar5 = param_2;
    param_2 = param_3;
  }
  iVar2 = (int)plVar5[1];
  lVar4 = (long)iVar2;
  if (iVar2 == (int)param_2[1]) {
    lVar6 = (long)(iVar2 + -1) * 8;
    puVar8 = (ulong *)(*param_2 + lVar6);
    puVar7 = (ulong *)(lVar6 + *plVar5);
    do {
      if (lVar4 < 1) goto LAB_100737992;
      uVar3 = *puVar8;
      lVar4 = lVar4 + -1;
      puVar8 = puVar8 + -1;
      uVar1 = *puVar7;
      puVar7 = puVar7 + -1;
    } while (uVar1 == uVar3);
    if (uVar1 <= uVar3) {
LAB_100737970:
      iVar2 = FUN_100737410(param_1,param_2);
      if (iVar2 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  else if (iVar2 < (int)param_2[1]) goto LAB_100737970;
LAB_100737992:
  iVar2 = FUN_100737410(param_1,plVar5,param_2);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return (ulong)(iVar2 != 0);
}

