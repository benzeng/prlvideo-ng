
long FUN_100303740(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x1480);
  uVar4 = uVar1;
  if (*(uint *)(param_1 + 0xc60) < 0x20) {
    uVar2 = 0x20;
    do {
      uVar2 = uVar2 >> 1;
      uVar4 = uVar4 ^ uVar4 >> (sbyte)uVar2;
    } while (*(uint *)(param_1 + 0xc60) < uVar2);
  }
  puVar3 = *(uint **)(param_1 + 0x460 + (ulong)(uVar4 & 0xff) * 8);
  while( true ) {
    if (puVar3 == (uint *)0x0) goto LAB_1003037f7;
    if (*puVar3 == uVar1) break;
    puVar3 = *(uint **)(puVar3 + 2);
  }
  uVar1 = puVar3[1];
  if (uVar1 == 0) goto LAB_1003037f7;
  uVar4 = uVar1;
  if (*(uint *)(param_1 + 0x1470) < 0x20) {
    uVar2 = 0x20;
    do {
      uVar2 = uVar2 >> 1;
      uVar4 = uVar4 ^ uVar4 >> (sbyte)uVar2;
    } while (*(uint *)(param_1 + 0x1470) < uVar2);
  }
  puVar3 = *(uint **)(param_1 + 0xc70 + (ulong)(uVar4 & 0xff) * 8);
  do {
    if (puVar3 == (uint *)0x0) {
LAB_1003037f7:
      return *(long *)(param_1 + 0x1478);
    }
    if (*puVar3 == uVar1) {
      if (*(long *)(puVar3 + 2) != 0) {
        return *(long *)(puVar3 + 2);
      }
      goto LAB_1003037f7;
    }
    puVar3 = *(uint **)(puVar3 + 4);
  } while( true );
}

