
void FUN_100352e40(long param_1,ushort param_2,byte *param_3)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = param_2 - 0x40;
  if (uVar1 < 0x17) {
    if ((0x78379fU >> (uVar1 & 0x1f) & 1) == 0) {
      if ((0x40060U >> (uVar1 & 0x1f) & 1) == 0) {
        return;
      }
      bVar2 = param_3[4];
    }
    else {
      bVar2 = *param_3;
    }
    *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) | 1 << (bVar2 & 0x1f);
  }
  return;
}

