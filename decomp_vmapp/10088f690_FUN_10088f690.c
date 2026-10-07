
undefined8 FUN_10088f690(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if ((*(byte *)(param_1 + 0x71) & 0x20) == 0) {
    if (param_4 >> 0x3c != 0) {
      uVar2 = param_4;
      do {
        FUN_100843ad0(param_3,param_2,0x8000000000000000,lVar1,param_1 + 0x28,param_1 + 0x58,
                      *(undefined4 *)(param_1 + 0x10),*(undefined8 *)(lVar1 + 0xf8));
        uVar2 = uVar2 + 0xf000000000000000;
      } while (0xfffffffffffffff < uVar2);
      param_4 = param_4 & 0xfffffffffffffff;
    }
    if (param_4 == 0) {
      return 1;
    }
    param_4 = param_4 << 3;
  }
  FUN_100843ad0(param_3,param_2,param_4,lVar1,param_1 + 0x28,param_1 + 0x58,
                *(undefined4 *)(param_1 + 0x10),*(undefined8 *)(lVar1 + 0xf8));
  return 1;
}

