
undefined1 FUN_10069d2c0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar11;
  undefined8 uVar10;
  ulong local_38;
  
  uVar11 = (undefined4)((ulong)in_stack_ffffffffffffffb8 >> 0x20);
  if (*(int *)((long)param_1 + 0x4c) != 1) {
    return 0;
  }
  iVar4 = (**(code **)(*param_1 + 0x28))(param_1);
  if (iVar4 < 0) {
    *(undefined4 *)((long)param_1 + 0x4c) = 0xffffffff;
    plVar1 = (long *)param_1[7];
    (**(code **)(*(long *)((long)plVar1 + *(long *)(*plVar1 + -0x18)) + 0x1a0))
              ((long)plVar1 + *(long *)(*plVar1 + -0x18));
    return 0;
  }
  (**(code **)(*param_1 + 0x100))(param_1);
  lVar6 = (**(code **)(*param_1 + 0x120))(param_1,&local_38);
  (**(code **)(*param_1 + 0x108))(param_1);
  if (lVar6 == -1) {
    return 0;
  }
  if (*(int *)((long)param_1 + 0x4c) != -1) {
    plVar1 = (long *)param_1[7];
    lVar6 = param_1[8];
    iVar4 = FUN_10069d930(plVar1,*(undefined8 *)(*(long *)(*plVar1 + -0x18) + 0x58 + (long)plVar1));
    iVar5 = (**(code **)(*plVar1 + 0x158))(plVar1);
    lVar6 = FUN_1007dc0f0(lVar6,iVar4 - iVar5,0);
    if (-2 < lVar6) {
      lVar2 = param_1[4];
      uVar9 = (ulong)*(uint *)(lVar2 + 0x10);
      lVar3 = *(long *)(*param_1 + -0x18);
      uVar7 = ((ulong)((int)lVar6 + 1) *
               *(long *)(*(long *)(**(long **)(lVar2 + 0x38) + -0x18) + 0x38 +
                        (long)*(long **)(lVar2 + 0x38)) * uVar9 + *(long *)(lVar2 + 0x20)) /
              *(ulong *)(lVar3 + 0x38 + (long)param_1);
      if (local_38 == uVar7) {
        return 1;
      }
      if (uVar7 <= local_38) {
        local_38 = ((uVar9 - 1) - uVar7) + local_38;
        iVar4 = (**(code **)(*(long *)((long)param_1 + lVar3) + 0xb8))
                          ((long)param_1 + lVar3,local_38 / uVar9 & 0xffffffff,local_38 % uVar9);
        if (iVar4 < 0) {
          *(undefined4 *)((long)param_1 + 0x4c) = 0xffffffff;
          plVar1 = (long *)param_1[7];
          (**(code **)(*(long *)((long)plVar1 + *(long *)(*plVar1 + -0x18)) + 0x1a0))
                    ((long)plVar1 + *(long *)(*plVar1 + -0x18));
          (**(code **)(*param_1 + 0xf0))(param_1);
          return 0;
        }
        return 1;
      }
      FUN_1008e3970("Compact","dimg",0,"[%s] Wrong newSizeSectors: new (%llu) >= current (%llu)",
                    "virtual bool CStructImage::TruncateCompacted()",uVar7,local_38);
      uVar11 = (undefined4)(local_38 >> 0x20);
      FUN_10069c4a0(param_1 + 7,0);
      uVar10 = CONCAT44(uVar11,0x84a);
      pcVar8 = "0";
      goto LAB_10069d3d9;
    }
  }
  FUN_1008e3970("Compact","dimg",0,"[%s] m_UsedBlocks.LastUsed() failed (%lld)",
                "virtual bool CStructImage::TruncateCompacted()");
  FUN_10069c4a0(param_1 + 7,0);
  uVar10 = CONCAT44(uVar11,0x83a);
  pcVar8 = "false";
LAB_10069d3d9:
  FUN_1008e3970("Compact","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]",pcVar8,"StructuredBase.cpp",
                uVar10,"TruncateCompacted");
  return 0;
}

