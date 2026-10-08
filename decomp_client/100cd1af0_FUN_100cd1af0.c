
undefined1 FUN_100cd1af0(long param_1,undefined4 param_2,uint param_3)

{
  *(uint *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  if ((param_3 & 0x40000000) != 0) {
    if ((param_3 & 0xc) != 0) {
      param_3 = param_3 | 0xc;
      *(uint *)(param_1 + 0x14) = param_3;
    }
    if ((param_3 & 0x30) != 0) {
      param_3 = param_3 | 0x30;
      *(uint *)(param_1 + 0x14) = param_3;
    }
    if ((param_3 & 3) != 0) {
      param_3 = param_3 | 3;
      *(uint *)(param_1 + 0x14) = param_3;
    }
    if ((param_3 & 0xc0) != 0) {
      *(uint *)(param_1 + 0x14) = param_3 | 0xc0;
    }
  }
  return 1;
}

