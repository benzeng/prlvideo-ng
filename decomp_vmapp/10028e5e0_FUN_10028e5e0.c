
void FUN_10028e5e0(long *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  bool bVar8;
  
  iVar5 = (**(code **)(*param_1 + 0xf8))(param_1,1,0);
  if (-1 < iVar5) {
    lVar7 = FUN_100257d80(param_1);
    uVar4 = *(ushort *)((long)param_1 + 0xfee);
    bVar3 = *(byte *)(param_1 + 0x1fe);
    uVar6 = *(uint *)(lVar7 + 0x2f120 + (ulong)uVar4 * 4);
    do {
      puVar1 = (uint *)(lVar7 + 0x2f120 + (ulong)uVar4 * 4);
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
      return;
    }
  }
  return;
}

