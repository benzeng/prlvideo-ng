
void FUN_1003017e0(long param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8,undefined1 param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  ulong uVar7;
  
  iVar6 = 0x8513;
  if (5 < param_2 - 0x8515U) {
    iVar6 = param_2;
  }
  uVar2 = FUN_100301630(param_1,*(undefined4 *)(param_1 + 0x418),iVar6,1);
  if (uVar2 != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x1848);
    if (uVar1 < 0x20) {
      uVar3 = 0x20;
      uVar7 = (ulong)uVar2;
      do {
        uVar3 = uVar3 >> 1;
        uVar7 = (ulong)((uint)uVar7 ^ (uint)uVar7 >> (sbyte)uVar3);
      } while (uVar1 < uVar3);
    }
    else {
      uVar7 = (ulong)uVar2;
    }
    puVar5 = *(uint **)(*(long *)(param_1 + 0x30) + 0x1048 + (uVar7 & 0xff) * 8);
    piVar4 = (int *)0x0;
    if (puVar5 != (uint *)0x0) {
      piVar4 = (int *)0x0;
      do {
        if (*puVar5 == uVar2) {
          piVar4 = *(int **)(puVar5 + 2);
          break;
        }
        puVar5 = *(uint **)(puVar5 + 4);
      } while (puVar5 != (uint *)0x0);
    }
    if (param_3 == 0) {
      *piVar4 = iVar6;
      piVar4[2] = param_4;
      piVar4[3] = param_5;
      piVar4[4] = param_6;
      piVar4[5] = param_7;
      piVar4[6] = param_8;
      *(undefined1 *)(piVar4 + 7) = param_9;
    }
  }
  return;
}

