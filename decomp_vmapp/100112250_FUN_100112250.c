
undefined8 FUN_100112250(long param_1,undefined8 param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar11;
  
  uVar11 = (undefined4)((ulong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar8 = *(long *)(param_1 + 0x10);
  iVar1 = *(int *)(lVar8 + 0x5ac);
  uVar9 = *(int *)(lVar8 + 0x5b0) + iVar1;
  *(ulong *)(param_3 + 5) = (ulong)(uVar9 * 0x100);
  cVar2 = CVmMemory::isAutoQuota();
  if (cVar2 == '\0') {
    uVar4 = CVmMemory::getHostMemQuotaMax();
    *(ulong *)(param_3 + 1) = (ulong)uVar4;
    uVar4 = CVmMemory::getHostMemQuotaPriority();
    *(ulong *)(param_3 + 3) = (ulong)uVar4;
    uVar4 = CVmMemory::getMaxBalloonSize();
    *(ulong *)(param_3 + 7) = (ulong)uVar4;
    if (100 < uVar4) {
      pcVar6 = "Balloon exceed 100%% %llu";
LAB_10011251d:
      FUN_1008e3970("","vm",0,pcVar6);
      return 0x80000536;
    }
    if ((100 < *(long *)(param_3 + 3)) || (*(long *)(param_3 + 3) == 0)) {
      pcVar6 = "Memory quota: Invalid prio (%llu)";
      goto LAB_10011251d;
    }
    if ((param_4 != 0) &&
       ((lVar7 = *(long *)(param_3 + 1), lVar7 != 0xffffffff &&
        (iVar5 = (uVar9 >> 9) + (uVar9 >> 6),
        (long)(ulong)(uVar9 + 0x6a + iVar5 + uVar9 / 200) < lVar7)))) {
      FUN_1008e3970("","vm",0,"Memory quota: Too large limit. limit=%u overhead=%u swap=%u",lVar7,
                    uVar9 / 200 + 0x6a + iVar5,CONCAT44(uVar11,uVar9));
      FUN_1008e3970("","vm",0,"Memory quota: Reset to default values");
      *(undefined8 *)(param_3 + 1) = 0xffffffff;
    }
  }
  else {
    uVar4 = CVmMemory::getMaxBalloonSize();
    *(ulong *)(param_3 + 7) = (ulong)uVar4;
    *(undefined8 *)(param_3 + 1) = 0xffffffff;
    *(undefined8 *)(param_3 + 3) = 0x32;
  }
  iVar5 = FUN_1007da300("kernel.lock_all_mem",*(undefined4 *)(lVar8 + 0xb90));
  if (iVar5 == 0) {
    if (*(int *)(lVar8 + 0xb50) == 0) {
      *param_3 = 0;
      lVar8 = *(long *)(param_3 + 1);
      goto LAB_10011245f;
    }
    FUN_1008e3970("","vm",0,"Memory is not preemptable. Ballooning allowed");
    *(undefined8 *)(param_3 + 1) = 0xffffffff;
  }
  else {
    FUN_1008e3970("","vm",0,"Memory is not preemptable");
    *(undefined8 *)(param_3 + 1) = 0xffffffff;
    *(undefined8 *)(param_3 + 7) = 0;
  }
  *param_3 = 1;
  lVar8 = 0xffffffff;
LAB_10011245f:
  lVar7 = (ulong)(uVar9 / 200 + 0x6a + iVar1 + (uVar9 >> 6) + (uVar9 >> 9)) * *(long *)(param_3 + 7)
  ;
  lVar7 = ((SUB168(SEXT816(lVar7) * ZEXT816(0xa3d70a3d70a3d70b),8) >> 6) - (lVar7 >> 0x3f)) * 0x100;
  *(long *)(param_3 + 7) = lVar7;
  lVar10 = 0xffffffff;
  if (lVar8 != 0xffffffff) {
    lVar10 = lVar8 << 8;
    *(long *)(param_3 + 1) = lVar10;
  }
  uVar11 = param_3[3];
  uVar3 = CVmMemory::isAutoQuota();
  FUN_1008e3970("","vm",0,"Setting quota-> %llu, %u%%, %llu (auto=%u)",lVar10,uVar11,lVar7,uVar3);
  return 0;
}

