
void FUN_1002f1e10(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined1 local_628 [1520];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar4 = *(long *)(param_1 + 0x160);
  local_38 = lVar2;
  while( true ) {
    while (uVar1 = *(uint *)(lVar4 + 0x18), 0x40000 < (uVar1 + 0x5fe) - *(int *)(lVar4 + 0x14)) {
      iVar3 = (**(code **)(**(long **)(param_1 + 0x170) + 0xa8))
                        (*(long **)(param_1 + 0x170),local_628,0x5ee);
      if (iVar3 < 1) goto LAB_1002f1efc;
      lVar4 = *(long *)(param_1 + 0x160);
      *(long *)(lVar4 + 0xe4) = *(long *)(lVar4 + 0xe4) + 1;
    }
    iVar3 = (**(code **)(**(long **)(param_1 + 0x170) + 0xa8))
                      (*(long **)(param_1 + 0x170),(ulong)(uVar1 & 0x3ffff) + 0x402 + lVar4,0x5ee);
    if (iVar3 < 1) break;
    *(short *)(lVar4 + 0x400 + (ulong)(uVar1 & 0x3ffff)) = (short)iVar3;
    *(uint *)(*(long *)(param_1 + 0x160) + 0x18) = (iVar3 + 0x11U & 0xfffffff0) + uVar1;
    FUN_100279c80(param_1,1);
    lVar4 = *(long *)(param_1 + 0x160);
    *(long *)(lVar4 + 0xc4) = *(long *)(lVar4 + 0xc4) + 1;
    *(long *)(lVar4 + 0xb4) = *(long *)(lVar4 + 0xb4) + (long)iVar3;
  }
LAB_1002f1efc:
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

