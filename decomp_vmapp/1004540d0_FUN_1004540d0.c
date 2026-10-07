
void FUN_1004540d0(long param_1)

{
  uint uVar1;
  uint *puVar2;
  
  if (*(int *)(param_1 + 0x30) < 0x20) {
    uVar1 = *(uint *)(param_1 + 0x44);
    puVar2 = *(uint **)(param_1 + 0x28);
    *(uint **)(param_1 + 0x28) = puVar2 + 1;
    *puVar2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    *(undefined4 *)(param_1 + 0x30) = 0x20;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  return;
}

