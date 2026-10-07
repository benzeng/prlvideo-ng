
bool FUN_1003044f0(long param_1,uint param_2)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_2;
  if (*(uint *)(param_1 + 0xc60) < 0x20) {
    uVar3 = 0x20;
    do {
      uVar3 = uVar3 >> 1;
      uVar4 = uVar4 ^ uVar4 >> (sbyte)uVar3;
    } while (*(uint *)(param_1 + 0xc60) < uVar3);
  }
  puVar1 = *(uint **)(param_1 + 0x460 + (ulong)(uVar4 & 0xff) * 8);
  while( true ) {
    if (puVar1 == (uint *)0x0) {
      return false;
    }
    if (*puVar1 == param_2) break;
    puVar1 = *(uint **)(puVar1 + 2);
  }
  if (puVar1[1] != 0) {
    cVar2 = (**(code **)(param_1 + 0x20))();
    return cVar2 != '\0';
  }
  return false;
}

