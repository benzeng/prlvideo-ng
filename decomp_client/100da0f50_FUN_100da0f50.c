
uint FUN_100da0f50(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_100db9710();
  uVar2 = iVar1 - 0xf;
  if (uVar2 < 5) {
    return CONCAT31((int3)(uVar2 >> 8),0x19 >> ((byte)uVar2 & 0x1f)) & 0xffffff01;
  }
  return 0;
}

