
byte FUN_1003ab000(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined **ppuVar3;
  
  bVar1 = *(byte *)(param_1 + 0x28);
  bVar2 = 0xf;
  if (bVar1 < 0x17) {
    if ((0x7ff80eU >> (bVar1 & 0x1f) & 1) == 0) {
      if ((0x7f0U >> (bVar1 & 0x1f) & 1) == 0) {
        if (bVar1 == 0) {
          if ((ulong)*(byte *)(param_1 + 0x2b) < 0x29) {
            ppuVar3 = &PTR_s_R_1011195d0 + (ulong)*(byte *)(param_1 + 0x2b) * 2;
          }
          else {
            ppuVar3 = &PTR_s_operand__101119860;
          }
          bVar2 = *(byte *)((long)ppuVar3 + 9) & 0xf;
        }
      }
      else {
        bVar2 = 3;
      }
    }
    else {
      bVar2 = 8;
    }
  }
  if (*(byte *)(param_1 + 0x2c) == 1) {
    bVar2 = bVar2 & 0xb;
  }
  else if (*(byte *)(param_1 + 0x2c) - 2 < 6) {
    bVar2 = bVar2 & 8;
  }
  return bVar2;
}

