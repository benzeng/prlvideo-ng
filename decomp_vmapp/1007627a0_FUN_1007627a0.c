
void FUN_1007627a0(long param_1,byte param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  
  puVar2 = *(ulong **)(param_1 + 0x10);
  if ((puVar2 != (ulong *)0x0) && ((*puVar2 >> (param_3 & 0x3f) & 1) != 0)) {
    LOCK();
    puVar1 = puVar2 + 1;
    uVar3 = *puVar1;
    *(uint *)puVar1 = (uint)*puVar1 + 1;
    UNLOCK();
    uVar3 = (ulong)(uint)uVar3 % (ulong)*(uint *)((long)puVar2 + 0xc);
    puVar2[uVar3 * 2 + 6] = param_5 >> 8 & 0xffffffffffff | (ulong)param_2 << 0x30 | param_3 << 0x38
    ;
    puVar2[uVar3 * 2 + 7] = param_4;
  }
  return;
}

