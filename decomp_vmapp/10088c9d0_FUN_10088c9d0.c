
undefined8 FUN_10088c9d0(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  sbyte sVar3;
  ulong uVar4;
  byte local_32;
  char local_31;
  
  if (param_4 != 0) {
    uVar1 = 0x800000000000000;
    if (param_4 >> 0x3b == 0) {
      uVar1 = param_4;
    }
    do {
      if ((uVar1 & 0x1fffffffffffffff) != 0) {
        uVar4 = 0;
        do {
          uVar2 = uVar4 >> 3;
          local_31 = ((*(byte *)(param_3 + uVar2) >> ((uint)(uVar4 & 7) ^ 7) & 1) != 0) * -0x80;
          FUN_10082bd60(&local_31,&local_32,1,1,*(undefined8 *)(param_1 + 0x78),param_1 + 0x28,
                        *(undefined4 *)(param_1 + 0x10));
          sVar3 = (sbyte)(uVar4 & 7);
          *(byte *)(param_2 + uVar2) =
               (byte)((local_32 & 0x80) >> sVar3) |
               ~(byte)(0x80 >> sVar3) & *(byte *)(param_2 + uVar2);
          uVar4 = uVar4 + 1;
        } while (uVar1 * 8 != uVar4);
      }
      param_3 = param_3 + uVar1;
      param_2 = param_2 + uVar1;
      uVar4 = param_4 - uVar1;
      if (uVar1 <= param_4 - uVar1) {
        uVar4 = uVar1;
      }
      param_4 = param_4 - uVar1;
      uVar1 = uVar4;
    } while (param_4 != 0);
  }
  return 1;
}

