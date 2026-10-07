
void FUN_10039fc90(long param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = param_2 >> 8 & 0x18 | param_2 >> 0x1c & 7;
  uVar6 = (param_2 & 0x7ff) + 1;
  if ((param_2 & 0x2000) != 0) {
    uVar5 = 1 << (sbyte)uVar2 | *(uint *)(param_1 + 0xf8);
    *(uint *)(param_1 + 0xf8) = uVar5;
    if (param_3 == 0) {
      if (*(int *)(param_1 + 100) == 0) {
        *(undefined4 *)(param_1 + 100) = 1;
      }
      *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) | 1;
    }
    else {
      uVar4 = param_3 >> 8 & 0x18 | param_3 >> 0x1c & 7;
      uVar3 = (ulong)uVar4;
      uVar7 = (param_3 & 0x7ff) + 1;
      if ((param_3 & 0x2000) != 0) {
        *(uint *)(param_1 + 0xf8) = uVar5 | 1 << (sbyte)uVar4;
        if (*(int *)(param_1 + 100) == 0) {
          *(undefined4 *)(param_1 + 100) = 1;
        }
        *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) | 1;
        if (uVar4 == 6) {
          uVar7 = 0xc;
        }
        else if (uVar4 == 2) {
          uVar7 = 0x100;
        }
        else if (uVar4 == 1) {
          uVar7 = 10;
        }
      }
      if (*(uint *)(param_1 + 0x58 + uVar3 * 4) < uVar7) {
        *(uint *)(param_1 + 0x58 + uVar3 * 4) = uVar7;
      }
      puVar1 = (uint *)(param_1 + 0xa8 + uVar3 * 4);
      *puVar1 = *puVar1 | ~-(uint)((param_3 & 0x2000) == 0) | 1 << ((byte)(param_3 & 0x7ff) & 0x1f);
    }
    if (uVar2 == 6) {
      uVar6 = 0xc;
    }
    else if (uVar2 == 2) {
      uVar6 = 0x100;
    }
    else if (uVar2 == 1) {
      uVar6 = 10;
    }
  }
  uVar3 = (ulong)uVar2;
  if (*(uint *)(param_1 + 0x58 + uVar3 * 4) < uVar6) {
    *(uint *)(param_1 + 0x58 + uVar3 * 4) = uVar6;
  }
  puVar1 = (uint *)(param_1 + 0xa8 + uVar3 * 4);
  *puVar1 = *puVar1 | ~-(uint)((param_2 & 0x2000) == 0) | 1 << ((byte)(param_2 & 0x7ff) & 0x1f);
  return;
}

