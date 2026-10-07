
uint FUN_100304560(long param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x1480);
  if (param_2 != '\0') {
    uVar4 = uVar1;
    if (*(uint *)(param_1 + 0xc60) < 0x20) {
      uVar2 = 0x20;
      do {
        uVar2 = uVar2 >> 1;
        uVar4 = uVar4 ^ uVar4 >> (sbyte)uVar2;
      } while (*(uint *)(param_1 + 0xc60) < uVar2);
    }
    puVar3 = *(uint **)(param_1 + 0x460 + (ulong)(uVar4 & 0xff) * 8);
    if (puVar3 == (uint *)0x0) {
      return 0;
    }
    while (*puVar3 != uVar1) {
      puVar3 = *(uint **)(puVar3 + 2);
      if (puVar3 == (uint *)0x0) {
        return 0;
      }
    }
    uVar1 = puVar3[1];
  }
  return uVar1;
}

