
void FUN_100260500(long param_1,byte *param_2)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  
  bVar4 = *param_2;
  if ((bVar4 & 8) != 0) {
    lVar2 = *(long *)(param_1 + 0xa0);
    bVar3 = *(byte *)(lVar2 + 4) & 0xe9;
    *(byte *)(lVar2 + 4) = bVar3;
    bVar4 = param_2[0x15];
    if ((bVar4 & 1) != 0) {
      bVar3 = bVar3 | 2;
      *(byte *)(lVar2 + 4) = bVar3;
      bVar4 = param_2[0x15];
    }
    if ((bVar4 & 2) != 0) {
      bVar3 = bVar3 | 4;
      *(byte *)(lVar2 + 4) = bVar3;
      bVar4 = param_2[0x15];
    }
    if ((bVar4 & 4) != 0) {
      bVar3 = bVar3 | 8;
      *(byte *)(lVar2 + 4) = bVar3;
      bVar4 = param_2[0x15];
    }
    if ((bVar4 & 8) != 0) {
      *(byte *)(lVar2 + 4) = bVar3 | 0x10;
    }
    uVar5 = *(uint *)(lVar2 + 0x18);
    do {
      LOCK();
      uVar1 = *(uint *)(lVar2 + 0x18);
      bVar6 = uVar5 == uVar1;
      if (bVar6) {
        *(uint *)(lVar2 + 0x18) = uVar5 | 8;
        uVar1 = uVar5;
      }
      uVar5 = uVar1;
      UNLOCK();
    } while (!bVar6);
    bVar4 = *param_2;
  }
  if ((bVar4 & 0x10) != 0) {
    lVar2 = *(long *)(param_1 + 0xa0);
    *(byte *)(lVar2 + 5) =
         (byte)(*(byte *)(lVar2 + 5) ^ param_2[0x16] << 4) >> 4 | param_2[0x16] << 4;
    uVar5 = *(uint *)(lVar2 + 0x18);
    do {
      LOCK();
      uVar1 = *(uint *)(lVar2 + 0x18);
      bVar6 = uVar5 == uVar1;
      if (bVar6) {
        *(uint *)(lVar2 + 0x18) = uVar5 | 0x10;
        uVar1 = uVar5;
      }
      uVar5 = uVar1;
      UNLOCK();
    } while (!bVar6);
  }
  FUN_1002effe0(*(undefined8 *)(param_1 + 0xb8));
  return;
}

