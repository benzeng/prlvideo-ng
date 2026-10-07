
undefined8 FUN_10088e870(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_4 != 0) {
    uVar2 = 0x800000000000000;
    if (param_4 >> 0x3b == 0) {
      uVar2 = param_4;
    }
    do {
      uVar1 = param_4 * 8;
      if ((*(ulong *)(param_1 + 0x70) & 0x2000) != 0) {
        uVar1 = param_4;
      }
      FUN_10083e330(param_3,param_2,uVar1,*(undefined8 *)(param_1 + 0x78),param_1 + 0x28,
                    param_1 + 0x58,*(undefined4 *)(param_1 + 0x10));
      param_3 = param_3 + uVar2;
      param_2 = param_2 + uVar2;
      uVar1 = param_4 - uVar2;
      if (uVar2 <= param_4 - uVar2) {
        uVar1 = uVar2;
      }
      param_4 = param_4 - uVar2;
      uVar2 = uVar1;
    } while (param_4 != 0);
  }
  return 1;
}

