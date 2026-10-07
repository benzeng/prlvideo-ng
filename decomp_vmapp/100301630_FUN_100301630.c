
ulong FUN_100301630(long param_1,ulong param_2,int param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  int *piVar5;
  
  uVar3 = 0;
  if (param_3 < 0x8c18) {
    if (param_3 < 0x8513) {
      if (param_3 < 0x806f) {
        if (param_3 == 0xde0) {
          uVar3 = (ulong)*(uint *)(param_1 + 0x158 + (param_2 & 0xffffffff) * 0x2c);
        }
        else {
          uVar3 = 0;
          if (param_3 == 0xde1) {
            uVar3 = (ulong)*(uint *)(param_1 + 0x160 + (param_2 & 0xffffffff) * 0x2c);
          }
        }
      }
      else if (param_3 == 0x806f) {
        uVar3 = (ulong)*(uint *)(param_1 + 0x170 + (param_2 & 0xffffffff) * 0x2c);
      }
      else if (param_3 == 0x84f5) {
        uVar3 = (ulong)*(uint *)(param_1 + 0x178 + (param_2 & 0xffffffff) * 0x2c);
      }
    }
    else if (param_3 == 0x8513) {
      uVar3 = (ulong)*(uint *)(param_1 + 0x174 + (param_2 & 0xffffffff) * 0x2c);
    }
  }
  else if (param_3 < 0x8c1a) {
    if (param_3 == 0x8c18) {
      uVar3 = (ulong)*(uint *)(param_1 + 0x15c + (param_2 & 0xffffffff) * 0x2c);
    }
  }
  else if (param_3 < 0x9100) {
    if (param_3 == 0x8c1a) {
      uVar3 = (ulong)*(uint *)(param_1 + 0x164 + (param_2 & 0xffffffff) * 0x2c);
    }
    else if (param_3 == 0x8c2a) {
      uVar3 = (ulong)*(uint *)(param_1 + 0x17c + (param_2 & 0xffffffff) * 0x2c);
    }
  }
  else if (param_3 == 0x9100) {
    uVar3 = (ulong)*(uint *)(param_1 + 0x168 + (param_2 & 0xffffffff) * 0x2c);
  }
  else if (param_3 == 0x9102) {
    uVar3 = (ulong)*(uint *)(param_1 + 0x16c + (param_2 & 0xffffffff) * 0x2c);
  }
  if (param_4 != '\0') {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x828);
    iVar2 = (int)uVar3;
    if (uVar1 < 0x20) {
      uVar4 = 0x20;
      do {
        uVar4 = uVar4 >> 1;
        uVar3 = (ulong)((uint)uVar3 ^ (uint)uVar3 >> (sbyte)uVar4);
      } while (uVar1 < uVar4);
    }
    piVar5 = *(int **)(*(long *)(param_1 + 0x30) + 0x28 + (uVar3 & 0xff) * 8);
    if (piVar5 == (int *)0x0) {
      return 0;
    }
    while (*piVar5 != iVar2) {
      piVar5 = *(int **)(piVar5 + 2);
      if (piVar5 == (int *)0x0) {
        return 0;
      }
    }
    uVar3 = (ulong)(uint)piVar5[1];
  }
  return uVar3;
}

