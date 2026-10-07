
void FUN_1000eef00(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  
  *(uint *)(param_3 + 4) = *(uint *)(param_2 + 4) & *(uint *)(param_1 + 0x4e);
  *(uint *)(param_3 + 8) = *(uint *)(param_2 + 8) & *(uint *)(param_1 + 0x4a);
  *(uint *)(param_3 + 0xc) = *(uint *)(param_2 + 0xc) & *(uint *)(param_1 + 0x66);
  *(uint *)(param_3 + 0x10) = *(uint *)(param_2 + 0x10) & *(uint *)(param_1 + 0x6a);
  *(uint *)(param_3 + 0x14) = *(uint *)(param_2 + 0x14) & *(uint *)(param_1 + 0x6e);
  *(uint *)(param_3 + 0x1c) = *(uint *)(param_2 + 0x1c) & *(uint *)(param_1 + 0x7a);
  *(uint *)(param_3 + 0x20) = *(uint *)(param_2 + 0x20) & *(uint *)(param_1 + 0x7e);
  *(uint *)(param_3 + 0x24) = *(uint *)(param_2 + 0x24) & *(uint *)(param_1 + 0x82);
  uVar1 = *(uint *)(param_2 + 0x18);
  *(uint *)(param_3 + 0x18) = uVar1;
  uVar2 = *(uint *)(param_1 + 0x72);
  if ((uVar2 & 0xff) < (uVar1 & 0xff)) {
    uVar1 = uVar1 & 0xffffff00 | uVar2 & 0xff;
    *(uint *)(param_3 + 0x18) = uVar1;
    uVar2 = *(uint *)(param_1 + 0x72);
  }
  uVar2 = uVar2 >> 8 & 0xff;
  if (uVar2 < (uVar1 >> 8 & 0xff)) {
    *(uint *)(param_3 + 0x18) = uVar1 & 0xffff00ff | uVar2 << 8;
  }
  return;
}

