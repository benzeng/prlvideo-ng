
void FUN_1002a5f70(void *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  bool bVar4;
  
  iVar2 = *(int *)((long)param_1 + 0x14);
  uVar1 = iVar2 - 1;
  *(uint *)((long)param_1 + 0x14) = uVar1;
  while (iVar2 != 0) {
    uVar3 = *(ulong *)((long)param_1 + (ulong)uVar1 * 0x10 + 0x18);
    if ((0xafffffff < uVar3) && (bVar4 = uVar3 < 0x100000000, uVar3 = uVar3 - 0x50000000, bVar4)) {
      uVar3 = 0xffffffffffffffff;
    }
    FUN_10008c640(DAT_1011c3688,uVar3,0x1000,0,1,1);
    iVar2 = *(int *)((long)param_1 + 0x14);
    uVar1 = iVar2 - 1;
    *(uint *)((long)param_1 + 0x14) = uVar1;
  }
  operator_delete__(param_1);
  return;
}

