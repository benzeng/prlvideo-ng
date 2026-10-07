
bool FUN_100304040(long param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
  uVar5 = (ulong)param_2;
  if (uVar1 < 0x20) {
    uVar4 = 0x20;
    uVar5 = (ulong)param_2;
    do {
      uVar4 = uVar4 >> 1;
      uVar5 = (ulong)((uint)uVar5 ^ (uint)uVar5 >> (sbyte)uVar4);
    } while (uVar1 < (uint)uVar4);
  }
  puVar2 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (uVar5 & 0xff) * 8);
  while( true ) {
    if (puVar2 == (uint *)0x0) {
      return false;
    }
    if (*puVar2 == param_2) break;
    puVar2 = *(uint **)(puVar2 + 2);
  }
  if (puVar2[1] != 0) {
    cVar3 = (*(code *)DAT_1011c4a88[0x286])(*DAT_1011c4a88);
    return cVar3 != '\0';
  }
  return false;
}

