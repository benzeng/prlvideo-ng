
void FUN_10042c160(long param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (uint *)(param_1 + 0x48);
    do {
      uVar2 = *(ulong *)(puVar3 + -10);
      *(ulong *)(puVar3 + -10) =
           uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
           (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
           (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
      uVar2 = *(ulong *)(puVar3 + -8);
      *(ulong *)(puVar3 + -8) =
           uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
           (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
           (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
      uVar1 = puVar3[-6];
      puVar3[-6] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      uVar1 = puVar3[-5];
      puVar3[-5] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      uVar1 = puVar3[-4];
      puVar3[-4] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      uVar1 = puVar3[-3];
      puVar3[-3] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      uVar1 = puVar3[-2];
      puVar3[-2] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      uVar1 = puVar3[-1];
      puVar3[-1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      uVar1 = *puVar3;
      *puVar3 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      puVar3 = puVar3 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

