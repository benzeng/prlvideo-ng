
void FUN_1007671e0(byte param_1,ulong param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (DAT_1011ccb88 != 0) {
    uVar4 = 0;
    if (*(ulong **)(DAT_1011ccb88 + 0x10) != (ulong *)0x0) {
      uVar4 = **(ulong **)(DAT_1011ccb88 + 0x10);
    }
    if ((uVar4 >> (param_2 & 0x3f) & 1) != 0) {
      uVar4 = rdtsc();
      lVar3 = *(long *)(DAT_1011ccb88 + 0x10);
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
      lVar5 = ((ulong)uVar2 % (ulong)*(uint *)(DAT_1011ccb88 + 0x1c)) * 0x10;
      *(ulong *)(lVar3 + 0x30 + lVar5) =
           uVar4 >> 8 & 0xffffffffffff | (ulong)param_1 << 0x30 | param_2 << 0x38;
      *(undefined8 *)(lVar3 + 0x38 + lVar5) = param_3;
    }
  }
  return;
}

