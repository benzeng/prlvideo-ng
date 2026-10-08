
bool FUN_10014ab90(long param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = 8;
  if (((uVar2 != 0) && (uVar4 = 7, (int)uVar2 < 0)) && (uVar2 < 0xfffffff9)) {
    uVar5 = 0x1f;
    do {
      uVar1 = uVar5;
      if ((uVar2 >> (uVar5 & 0x1f) & 1) == 0) break;
      uVar1 = uVar5 - 1;
      bVar3 = 1 < (int)uVar5;
      uVar5 = uVar1;
    } while (bVar3);
    if (0 < (int)uVar1) {
      do {
        if ((uVar2 >> (uVar1 & 0x1f) & 1) != 0) {
          return (bool)7;
        }
        bVar3 = 1 < (int)uVar1;
        uVar1 = uVar1 - 1;
      } while (bVar3);
    }
    uVar4 = 2;
    if (*(uint *)(param_1 + 4) != 0) {
      uVar5 = *(uint *)(param_1 + 4) & ~uVar2;
      uVar4 = 1;
      if (uVar5 != 0) {
        return uVar5 == ~uVar2;
      }
    }
  }
  return (bool)uVar4;
}

