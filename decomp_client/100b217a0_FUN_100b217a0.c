
long FUN_100b217a0(long param_1)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  
  if (*(int *)(param_1 + 0x4c) == 1) {
    uVar1 = *(uint *)(param_1 + 0x48);
    plVar2 = *(long **)(param_1 + 0x38);
    lVar5 = FUN_100b25fa0(plVar2,*(undefined8 *)(*(long *)(*plVar2 + -0x18) + 0x58 + (long)plVar2));
    lVar6 = (**(code **)(*plVar2 + 0x158))(plVar2);
    if ((ulong)uVar1 < (ulong)(lVar5 - lVar6)) {
      plVar2 = *(long **)(param_1 + 0x38);
      uVar9 = *(undefined8 *)(param_1 + 0x40);
      iVar3 = FUN_100b25fa0(plVar2,*(undefined8 *)(*(long *)(*plVar2 + -0x18) + 0x58 + (long)plVar2)
                           );
      iVar4 = (**(code **)(*plVar2 + 0x158))(plVar2);
      uVar7 = FUN_100ddd570(uVar9,iVar3 - iVar4,0);
      if (uVar7 == 0xffffffffffffffea) {
        *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
        plVar2 = *(long **)(param_1 + 0x38);
        (**(code **)(*(long *)((long)plVar2 + *(long *)(*plVar2 + -0x18)) + 0x1a0))
                  ((long)plVar2 + *(long *)(*plVar2 + -0x18));
      }
      else if ((int)uVar7 != -1) {
        lVar5 = *(long *)(param_1 + 0x20);
        lVar5 = (uVar7 & 0xffffffff) *
                *(long *)(*(long *)(**(long **)(lVar5 + 0x38) + -0x18) + 0x38 +
                         (long)*(long **)(lVar5 + 0x38)) * (ulong)*(uint *)(lVar5 + 0x10) +
                *(long *)(lVar5 + 0x20);
        if (DAT_10230ffd0 < 4) {
          return lVar5;
        }
        FUN_100df99c0("Compact","dimg",4,"[%p] Free block idx %u, file offset %llu bytes",param_1,
                      uVar7 & 0xffffffff,lVar5);
        return lVar5;
      }
      if (*(int *)(param_1 + 0x4c) != -1) {
        return -1;
      }
      pcVar8 = "[%p] Error: GetFreeBlock() internal error";
      uVar9 = 0;
      goto LAB_100b218c1;
    }
    if (DAT_10230ffd0 < 4) {
      return -1;
    }
    pcVar8 = "[%p] No free blocks, return -1";
  }
  else {
    if (DAT_10230ffd0 < 4) {
      return -1;
    }
    pcVar8 = "[%p] m_UsedBlocks not inited, return -1";
  }
  uVar9 = 4;
LAB_100b218c1:
  FUN_100df99c0("Compact","dimg",uVar9,pcVar8,param_1);
  return -1;
}

