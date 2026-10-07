
bool FUN_100304980(long param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = param_2 & 0xffffffff;
  if (*(uint *)(param_1 + 0x25c8) < 0x20) {
    uVar3 = 0x20;
    uVar4 = param_2 & 0xffffffff;
    do {
      uVar3 = uVar3 >> 1;
      uVar4 = (ulong)((uint)uVar4 ^ (uint)uVar4 >> (sbyte)uVar3);
    } while (*(uint *)(param_1 + 0x25c8) < (uint)uVar3);
  }
  piVar1 = *(int **)(param_1 + 0x1dc8 + (uVar4 & 0xff) * 8);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return false;
    }
    if (*piVar1 == (int)param_2) break;
    piVar1 = *(int **)(piVar1 + 2);
  }
  if (piVar1[1] != 0) {
    cVar2 = (*(code *)DAT_1011c4a88[0x27d])(*DAT_1011c4a88);
    return cVar2 != '\0';
  }
  return false;
}

