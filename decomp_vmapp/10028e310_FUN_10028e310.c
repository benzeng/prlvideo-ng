
void FUN_10028e310(long param_1,uint param_2)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  
  if (param_2 == 0x40) {
    lVar7 = FUN_100257d80(param_1);
    lVar7 = lVar7 + 0x2f120;
  }
  else {
    uVar5 = *(ushort *)(param_1 + 0xff0);
    lVar8 = (ulong)*(ushort *)(param_1 + 0xfee) * 0x80 + *(long *)(param_1 + 0x1000);
    lVar7 = *(long *)(param_1 + 0x1000) + 0x4000;
    uVar6 = *(uint *)(lVar8 + 0x4210 + (ulong)uVar5 * 4);
    do {
      puVar2 = (uint *)(lVar8 + 0x4210 + (ulong)uVar5 * 4);
      LOCK();
      uVar3 = *puVar2;
      bVar9 = uVar6 == uVar3;
      if (bVar9) {
        *puVar2 = param_2 | uVar6;
        uVar3 = uVar6;
      }
      uVar6 = uVar3;
      UNLOCK();
    } while (!bVar9);
  }
  uVar5 = *(ushort *)(param_1 + 0xfee);
  bVar4 = *(byte *)(param_1 + 0xff0);
  uVar6 = *(uint *)(lVar7 + (ulong)uVar5 * 4);
  do {
    puVar2 = (uint *)(lVar7 + (ulong)uVar5 * 4);
    LOCK();
    uVar3 = *puVar2;
    bVar9 = uVar6 == uVar3;
    if (bVar9) {
      *puVar2 = 1 << (bVar4 & 0x1f) | uVar6;
      uVar3 = uVar6;
    }
    uVar6 = uVar3;
    UNLOCK();
  } while (!bVar9);
  if ((uVar6 >> (*(byte *)(param_1 + 0xff0) & 0x1f) & 1) == 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0xf98) + 0xf0);
    *plVar1 = *plVar1 + 1;
    FUN_1002effe0(DAT_1011c3e30);
    return;
  }
  return;
}

