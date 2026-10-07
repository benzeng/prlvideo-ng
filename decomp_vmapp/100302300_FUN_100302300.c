
bool FUN_100302300(long param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  char cVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x1038);
  uVar5 = param_2;
  if (uVar1 < 0x20) {
    uVar4 = 0x20;
    do {
      uVar4 = uVar4 >> 1;
      uVar5 = uVar5 ^ uVar5 >> (sbyte)uVar4;
    } while (uVar1 < (uint)uVar4);
  }
  puVar2 = *(uint **)(*(long *)(param_1 + 0x30) + 0x838 + (ulong)(uVar5 & 0xff) * 8);
  while( true ) {
    if (puVar2 == (uint *)0x0) {
      return false;
    }
    if (*puVar2 == param_2) break;
    puVar2 = *(uint **)(puVar2 + 2);
  }
  if (puVar2[1] != 0) {
    cVar3 = (*DAT_1011c6360)();
    return cVar3 != '\0';
  }
  return false;
}

