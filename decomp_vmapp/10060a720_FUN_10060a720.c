
int FUN_10060a720(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  void *pvVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  
  lVar3 = *param_1;
  uVar1 = *(uint *)(lVar3 + 0xa0);
  *(uint *)((long)param_1 + 0x14) = uVar1;
  *(uint *)((long)param_1 + 0x24) = (uVar1 - 1) + *(int *)(lVar3 + 0xa4);
  uVar2 = *(uint *)(lVar3 + 0x48);
  uVar10 = (ulong)uVar2;
  *(uint *)(param_1 + 4) = uVar2;
  *(uint *)(param_1 + 2) = uVar2;
  pvVar7 = _malloc(uVar10);
  param_1[1] = (long)pvVar7;
  if (pvVar7 == (void *)0x0) {
    *(undefined4 *)(param_1 + 2) = 0;
    pcVar11 = "No memory for head";
  }
  else {
    pvVar8 = _malloc(uVar10);
    param_1[3] = (long)pvVar8;
    if (pvVar8 != (void *)0x0) {
      uVar2 = *(uint *)(lVar3 + 0x48);
      uVar9 = (**(code **)(*param_2 + 0x2e0))(param_2);
      iVar6 = FUN_100603f80(lVar3,param_2,((ulong)uVar2 * (ulong)uVar1) / uVar9,pvVar7,uVar10);
      if (iVar6 < 0) {
        pcVar11 = "Head reading failed";
      }
      else {
        uVar1 = *(uint *)((long)param_1 + 0x24);
        lVar3 = *param_1;
        lVar4 = param_1[3];
        lVar5 = param_1[4];
        uVar2 = *(uint *)(lVar3 + 0x48);
        uVar10 = (**(code **)(*param_2 + 0x2e0))(param_2);
        iVar6 = FUN_100603f80(lVar3,param_2,((ulong)uVar2 * (ulong)uVar1) / uVar10,lVar4,(int)lVar5)
        ;
        if (-1 < iVar6) {
          return iVar6;
        }
        pcVar11 = "Tail reading failed";
      }
      FUN_1008e3970("","vdisk",0,pcVar11);
      goto LAB_10060a8b9;
    }
    *(undefined4 *)(param_1 + 2) = 0;
    pcVar11 = "No memory for tail";
  }
  FUN_1008e3970("","vdisk",0,pcVar11);
  iVar6 = -0x7ffeffed;
LAB_10060a8b9:
  if ((void *)param_1[1] != (void *)0x0) {
    _free((void *)param_1[1]);
    param_1[1] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    _free((void *)param_1[3]);
    param_1[3] = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = -0x100000000;
  *(undefined4 *)((long)param_1 + 0x24) = 0xffffffff;
  return iVar6;
}

