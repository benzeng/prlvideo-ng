
undefined8 FUN_1002911f0(long *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  bool bVar8;
  
  (**(code **)(*param_1 + 0xf8))(param_1,0,0);
  lVar5 = param_1[0x200];
  uVar4 = *(ushort *)(param_1 + 0x1fe);
  lVar7 = (ulong)*(ushort *)((long)param_1 + 0xfee) * 0x80 + lVar5;
  uVar6 = *(uint *)(lVar7 + 0x4210 + (ulong)uVar4 * 4);
  do {
    puVar1 = (uint *)(lVar7 + 0x4210 + (ulong)uVar4 * 4);
    LOCK();
    uVar2 = *puVar1;
    bVar8 = uVar6 == uVar2;
    if (bVar8) {
      *puVar1 = uVar6 | 0x400000;
      uVar2 = uVar6;
    }
    uVar6 = uVar2;
    UNLOCK();
  } while (!bVar8);
  uVar4 = *(ushort *)((long)param_1 + 0xfee);
  bVar3 = *(byte *)(param_1 + 0x1fe);
  uVar6 = *(uint *)(lVar5 + 0x4000 + (ulong)uVar4 * 4);
  do {
    puVar1 = (uint *)(lVar5 + 0x4000 + (ulong)uVar4 * 4);
    LOCK();
    uVar2 = *puVar1;
    bVar8 = uVar6 == uVar2;
    if (bVar8) {
      *puVar1 = 1 << (bVar3 & 0x1f) | uVar6;
      uVar2 = uVar6;
    }
    uVar6 = uVar2;
    UNLOCK();
  } while (!bVar8);
  if ((uVar6 >> (*(byte *)(param_1 + 0x1fe) & 0x1f) & 1) == 0) {
    *(long *)(param_1[499] + 0xf0) = *(long *)(param_1[499] + 0xf0) + 1;
    FUN_1002effe0(DAT_1011c3e30);
  }
  return 0;
}

