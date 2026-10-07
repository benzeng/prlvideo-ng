
ulong FUN_1003040c0(long param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  int *piVar6;
  
  uVar3 = 0;
  if (param_2 < 0x8a11) {
    if (param_2 < 0x88eb) {
      if (param_2 == 0x8892) {
        uVar3 = (ulong)*(uint *)(param_1 + 0x1484);
      }
      else {
        uVar3 = 0;
        if (param_2 == 0x8893) {
          lVar4 = FUN_100303740(param_1);
          uVar3 = (ulong)*(uint *)(lVar4 + 8);
        }
      }
    }
    else if (param_2 == 0x88eb) {
      uVar3 = (ulong)*(uint *)(param_1 + 0x1488);
    }
    else if (param_2 == 0x88ec) {
      uVar3 = (ulong)*(uint *)(param_1 + 0x148c);
    }
  }
  else if (param_2 < 0x8c8e) {
    if (param_2 == 0x8a11) {
      uVar3 = (ulong)*(uint *)(param_1 + 0x1498);
    }
    else if (param_2 == 0x8c2a) {
      uVar3 = (ulong)*(uint *)(param_1 + 0x149c);
    }
  }
  else if (param_2 == 0x8c8e) {
    uVar3 = (ulong)*(uint *)(param_1 + 0x1494);
  }
  else if (param_2 == 0x8dee) {
    uVar3 = (ulong)*(uint *)(param_1 + 0x1490);
  }
  if (param_3 != '\0') {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
    iVar2 = (int)uVar3;
    if (uVar1 < 0x20) {
      uVar5 = 0x20;
      do {
        uVar5 = uVar5 >> 1;
        uVar3 = (ulong)((uint)uVar3 ^ (uint)uVar3 >> (sbyte)uVar5);
      } while (uVar1 < uVar5);
    }
    piVar6 = *(int **)(*(long *)(param_1 + 0x30) + 0x2068 + (uVar3 & 0xff) * 8);
    if (piVar6 == (int *)0x0) {
      uVar3 = 0;
    }
    else {
      do {
        if (*piVar6 == iVar2) {
          return (ulong)(uint)piVar6[1];
        }
        piVar6 = *(int **)(piVar6 + 2);
      } while (piVar6 != (int *)0x0);
      uVar3 = 0;
    }
  }
  return uVar3;
}

