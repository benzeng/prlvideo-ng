
void FUN_100595d70(long param_1,code *UNRECOVERED_JUMPTABLE,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  uVar3 = (int)*(undefined8 *)(param_1 + 0x60) - 1;
  plVar1 = *(long **)(*(long *)(*(long *)(param_1 + 0x40) +
                               ((ulong)uVar3 + *(long *)(param_1 + 0x58) >> 9) * 8) +
                     ((ulong)((int)*(long *)(param_1 + 0x58) + uVar3) & 0x1ff) * 8);
  if (*(int *)(param_1 + 0x55c) != 0) {
    FUN_1008e3970("Compact","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0 == m_MoveReqCount",
                  "Storage.cpp",0x1150,"MoveBlocksStart");
  }
  cVar2 = (**(code **)(*plVar1 + 0x100))(plVar1);
  if (cVar2 == '\0') {
    if (3 < DAT_1011b55f8) {
      FUN_1008e3970("Compact","vdisk",4,"[%p] No blocks for move",param_1);
    }
    iVar4 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x558) != 0) {
      puVar5 = (undefined8 *)(param_1 + 0x168);
      uVar3 = 0;
      do {
        puVar5[-1] = UNRECOVERED_JUMPTABLE;
        *puVar5 = param_3;
        puVar5[-2] = param_1;
        uVar3 = uVar3 + 1;
        puVar5 = puVar5 + 8;
      } while (uVar3 < *(uint *)(param_1 + 0x558));
    }
    iVar4 = FUN_100595ea0(param_1);
    if (-1 < iVar4) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100595e9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3,iVar4);
  return;
}

