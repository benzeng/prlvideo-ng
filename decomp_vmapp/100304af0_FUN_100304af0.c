
ulong FUN_100304af0(long param_1,int param_2,char param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  int *piVar4;
  
  uVar2 = 0;
  if (param_2 < 0x8c87) {
    if (param_2 == 0x8914) {
      uVar2 = (ulong)*(uint *)(param_1 + 0x25d0);
    }
    else {
      uVar2 = 0;
      if (param_2 == 0x8c2f) {
        uVar2 = (ulong)*(uint *)(param_1 + 0x25d4);
      }
    }
  }
  else if (param_2 == 0x8c87) {
    uVar2 = (ulong)*(uint *)(param_1 + 0x25dc);
  }
  else if (param_2 == 0x8c88) {
    uVar2 = (ulong)*(uint *)(param_1 + 0x25e0);
  }
  if (param_3 != '\0') {
    iVar1 = (int)uVar2;
    if (*(uint *)(param_1 + 0x25c8) < 0x20) {
      uVar3 = 0x20;
      do {
        uVar3 = uVar3 >> 1;
        uVar2 = (ulong)((uint)uVar2 ^ (uint)uVar2 >> (sbyte)uVar3);
      } while (*(uint *)(param_1 + 0x25c8) < uVar3);
    }
    piVar4 = *(int **)(param_1 + 0x1dc8 + (uVar2 & 0xff) * 8);
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    while (*piVar4 != iVar1) {
      piVar4 = *(int **)(piVar4 + 2);
      if (piVar4 == (int *)0x0) {
        return 0;
      }
    }
    uVar2 = (ulong)(uint)piVar4[1];
  }
  return uVar2;
}

