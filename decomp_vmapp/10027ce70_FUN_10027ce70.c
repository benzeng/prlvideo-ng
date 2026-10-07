
void FUN_10027ce70(long param_1)

{
  long *plVar1;
  long lVar2;
  ssize_t sVar3;
  ulong uVar4;
  ulong uVar5;
  iovec local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar5 = (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x18);
  uVar4 = 0;
  do {
    do {
      lVar2 = *(long *)(param_1 + 0x10);
      if (0x40000 < (uint)(((int)uVar5 + 0x5fe) - *(int *)(lVar2 + 0x14))) goto LAB_10027cf92;
      local_48.iov_base = (void *)(lVar2 + (uVar5 & 0x3ffff) + 0x402);
      local_48.iov_len = 0x5fe;
      sVar3 = _readv(*(int *)(*(long *)(*(long *)(param_1 + 8) + 0x170) + 8),&local_48,1);
      if (sVar3 < 0) goto LAB_10027cf92;
    } while (sVar3 == 0);
    uVar4 = (uVar4 & 0xffffffff) + sVar3;
    *(short *)(lVar2 + 0x400 + (uVar5 & 0x3ffff)) = (short)sVar3;
    uVar5 = (uVar5 & 0xffffffff) + ((ulong)((int)sVar3 + 0x11) & 0xfffffff0);
    *(int *)(*(long *)(param_1 + 0x10) + 0x18) = (int)uVar5;
    FUN_100279c80(*(undefined8 *)(param_1 + 8),1);
    lVar2 = *(long *)(param_1 + 0x10);
    plVar1 = (long *)(lVar2 + 0xc4);
    *plVar1 = *plVar1 + 1;
    plVar1 = (long *)(lVar2 + 0xb4);
    *plVar1 = *plVar1 + sVar3;
  } while ((uint)uVar4 < 0x80000);
  FUN_1007d8b20(*(long *)(param_1 + 8) + 0x1ec);
LAB_10027cf92:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

