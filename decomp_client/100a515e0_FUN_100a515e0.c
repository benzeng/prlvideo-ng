
ulong FUN_100a515e0(long param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_1 + 8);
  uVar2 = 0;
  if (lVar5 != param_1) {
    uVar2 = 0;
    do {
      bVar1 = *(byte *)(lVar5 + 0x10);
      if ((bVar1 & 1) == 0) {
        uVar3 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar3 = *(ulong *)(lVar5 + 0x18);
      }
      lVar6 = 0;
      if (uVar3 != 0) {
        if ((bVar1 & 1) == 0) {
          uVar3 = (ulong)(bVar1 >> 1);
        }
        else {
          uVar3 = *(ulong *)(lVar5 + 0x18);
        }
        lVar6 = uVar3 + 1;
      }
      bVar1 = *(byte *)(lVar5 + 0x28);
      if ((bVar1 & 1) == 0) {
        uVar3 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar3 = *(ulong *)(lVar5 + 0x30);
      }
      lVar7 = 0;
      if (uVar3 != 0) {
        if ((bVar1 & 1) == 0) {
          uVar3 = (ulong)(bVar1 >> 1);
        }
        else {
          uVar3 = *(ulong *)(lVar5 + 0x30);
        }
        lVar7 = uVar3 + 1;
      }
      bVar1 = *(byte *)(lVar5 + 0x40);
      if ((bVar1 & 1) == 0) {
        uVar3 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar3 = *(ulong *)(lVar5 + 0x48);
      }
      lVar4 = 0;
      if (uVar3 != 0) {
        if ((bVar1 & 1) == 0) {
          uVar3 = (ulong)(bVar1 >> 1);
        }
        else {
          uVar3 = *(ulong *)(lVar5 + 0x48);
        }
        lVar4 = uVar3 + 1;
      }
      uVar2 = lVar4 + 0x18 + (uVar2 & 0xffffffff) + lVar6 + lVar7;
      lVar5 = *(long *)(lVar5 + 8);
    } while (lVar5 != param_1);
  }
  return uVar2;
}

