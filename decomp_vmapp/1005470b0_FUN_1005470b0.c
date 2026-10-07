
void FUN_1005470b0(long param_1,uint param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar4 = (ulong)(uint)(*(int *)(param_1 + 0x3c) << 5);
  lVar5 = param_2 * uVar4;
  uVar6 = *(ulong *)(param_1 + 0x10) - lVar5;
  if (lVar5 + uVar4 <= *(ulong *)(param_1 + 0x10)) {
    uVar6 = uVar4;
  }
  if (param_3 == 1) {
    iVar1 = _madvise(lVar5 + *(long *)(param_1 + 8),uVar6,5);
    if (iVar1 != 0) {
      piVar2 = ___error();
      pcVar3 = _strerror(*piVar2);
      FUN_1008e3970("","TransMem",0,"CBufferCompression::handle_chunk() failed: %s",pcVar3);
      return;
    }
  }
  else {
    if (param_3 == 3) {
                    /* WARNING: Could not recover jumptable at 0x0001005470f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x28) + 0x48))
                (*(long **)(param_1 + 0x28),lVar5 + *(long *)(param_1 + 8),uVar6 & 0xffffffff);
      return;
    }
    if (param_3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010054715b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x28) + 0x40))
                (*(long **)(param_1 + 0x28),lVar5,uVar6 & 0xffffffff,*(long *)(param_1 + 8) + lVar5)
      ;
      return;
    }
  }
  return;
}

