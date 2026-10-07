
undefined8 FUN_1003a0030(long param_1,undefined8 param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar4;
  ulong uVar3;
  
  uVar2 = param_3 >> 8 & 0x18 | param_3 >> 0x1c & 7;
  uVar3 = (ulong)uVar2;
  uVar4 = (param_3 & 0x7ff) + 1;
  if ((param_3 & 0x2000) != 0) {
    *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) | 1 << (sbyte)uVar2;
    if (*(int *)(param_1 + 100) == 0) {
      *(undefined4 *)(param_1 + 100) = 1;
    }
    *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) | 1;
    if (uVar2 == 6) {
      uVar4 = 0xc;
    }
    else if (uVar2 == 2) {
      uVar4 = 0x100;
    }
    else if (uVar2 == 1) {
      uVar4 = 10;
    }
  }
  if (*(uint *)(param_1 + 0x58 + uVar3 * 4) < uVar4) {
    *(uint *)(param_1 + 0x58 + uVar3 * 4) = uVar4;
  }
  puVar1 = (uint *)(param_1 + 0xa8 + uVar3 * 4);
  *puVar1 = *puVar1 | ~-(uint)((param_3 & 0x2000) == 0) | 1 << ((byte)(param_3 & 0x7ff) & 0x1f);
  return 0;
}

