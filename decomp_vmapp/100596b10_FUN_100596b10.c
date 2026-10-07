
void FUN_100596b10(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  plVar2 = *(long **)(param_1 + 0x10);
  lVar8 = *plVar2;
  uVar7 = *(long *)(lVar8 + 0x60) + 0xffffffff;
  uVar9 = *(uint *)(param_1 + 8) & 0xfc;
  if (uVar9 == 0) {
    plVar3 = *(long **)(*(long *)(*(long *)(lVar8 + 0x40) +
                                 ((uVar7 & 0xffffffff) + *(long *)(lVar8 + 0x58) >> 9) * 8) +
                       ((ulong)(uint)((int)*(long *)(lVar8 + 0x58) + (int)uVar7) & 0x1ff) * 8);
    (**(code **)(*plVar3 + 0x110))(plVar3,(int)plVar2[3]);
    *(undefined4 *)(plVar2 + 3) = 0;
    plVar2[4] = 0;
    *(undefined4 *)(plVar2 + 6) = 0xffffffff;
    plVar2[5] = 0;
    plVar2[7] = 0;
    *(int *)(lVar8 + 0x55c) = *(int *)(lVar8 + 0x55c) + -1;
    lVar4 = *(long *)(*(long *)(lVar8 + 0x70) + 0x13b0);
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 0xf0);
      *plVar1 = *plVar1 + 1;
    }
    cVar5 = (*(code *)plVar2[1])(plVar2[2],0x80021017);
    if ((cVar5 != '\0') && (*(int *)(lVar8 + 0x55c) == 0)) {
      cVar5 = (**(code **)(*plVar3 + 0x100))(plVar3);
      if (cVar5 == '\0') {
        if (3 < DAT_1011b55f8) {
          FUN_1008e3970("Compact","vdisk",4,"[%p] No blocks for move - finalize",lVar8);
        }
        (**(code **)(*plVar3 + 0x68))(plVar3);
        UNRECOVERED_JUMPTABLE = (code *)plVar2[1];
        lVar8 = plVar2[2];
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_100595ea0(lVar8);
        if (3 < DAT_1011b55f8) {
          FUN_1008e3970("Compact","vdisk",4,"[%p] InitiateBlocksMove() -> 0x%X",lVar8,iVar6);
        }
        if (-1 < iVar6) {
          return;
        }
        UNRECOVERED_JUMPTABLE = (code *)plVar2[1];
        lVar8 = plVar2[2];
      }
                    /* WARNING: Could not recover jumptable at 0x000100596ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(lVar8,iVar6);
      return;
    }
  }
  else {
    FUN_1008e3970("Compact","vdisk",0,"[%p] Error: di_flags = 0x%X, di_sys_err = %u",lVar8,uVar9,
                  *(undefined4 *)(param_1 + 0x28));
    (*(code *)plVar2[1])(plVar2[2],0x80021000);
    *(undefined4 *)(plVar2 + 3) = 0;
    plVar2[4] = 0;
    *(undefined4 *)(plVar2 + 6) = 0xffffffff;
    plVar2[5] = 0;
    plVar2[7] = 0;
  }
  return;
}

