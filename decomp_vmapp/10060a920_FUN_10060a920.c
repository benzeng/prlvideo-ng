
int FUN_10060a920(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  char *pcVar10;
  ulong uVar11;
  
  uVar6 = *(uint *)((long)param_1 + 0x14);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  uVar5 = *(uint *)(lVar1 + 0x48);
  uVar7 = (**(code **)(*param_2 + 0x2e0))(param_2);
  iVar4 = FUN_100603fb0(lVar1,param_2,((ulong)uVar5 * (ulong)uVar6) / uVar7,lVar2,(int)lVar3);
  if (iVar4 < 0) {
    pcVar10 = "Head of the allocation file writing failed";
  }
  else {
    uVar5 = *(int *)((long)param_1 + 0x14) + *(int *)((long)param_1 + 0x24);
    lVar1 = *param_1;
    lVar2 = param_1[3];
    lVar3 = param_1[4];
    uVar6 = *(uint *)(lVar1 + 0x48);
    uVar7 = (**(code **)(*param_2 + 0x2e0))(param_2);
    iVar4 = FUN_100603fb0(lVar1,param_2,((ulong)uVar6 * (ulong)uVar5) / uVar7,lVar2,(int)lVar3);
    if (-1 < iVar4) {
      lVar1 = *param_1;
      uVar6 = *(uint *)(lVar1 + 0x48);
      uVar7 = (ulong)uVar6;
      pvVar8 = _malloc(uVar7);
      if (pvVar8 == (void *)0x0) {
        FUN_1008e3970("","vdisk",0,"No memory for zero buffer");
        return -0x7ffeffed;
      }
      ___bzero(pvVar8,uVar7);
      uVar6 = *(uint *)(param_1 + 2) / uVar6 + *(int *)((long)param_1 + 0x14);
      if (uVar6 < uVar5) {
        uVar11 = (ulong)uVar6;
        uVar6 = *(uint *)(lVar1 + 0x48);
        uVar9 = (**(code **)(*param_2 + 0x2e0))(param_2);
        iVar4 = FUN_100603fb0(lVar1,param_2,(uVar6 * uVar11) / uVar9,pvVar8,uVar7);
        while (-1 < iVar4) {
          uVar11 = uVar11 + 1;
          if (uVar5 <= (uint)uVar11) goto LAB_10060aaf6;
          lVar1 = *param_1;
          uVar6 = *(uint *)(lVar1 + 0x48);
          uVar9 = (**(code **)(*param_2 + 0x2e0))(param_2);
          iVar4 = FUN_100603fb0(lVar1,param_2,(uVar6 * uVar11) / uVar9,pvVar8,uVar7);
        }
        FUN_1008e3970("","vdisk",0,"Clearing alloc file writing failed at block %u",
                      uVar11 & 0xffffffff);
      }
LAB_10060aaf6:
      _free(pvVar8);
      return iVar4;
    }
    pcVar10 = "Tail of the allocation file writing failed";
  }
  FUN_1008e3970("","vdisk",0,pcVar10);
  return iVar4;
}

