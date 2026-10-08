
undefined4 FUN_100d4cec0(int param_1,uint param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0x40;
  if ((((param_3 != 0x808) && (uVar1 = 0x20, param_1 == 0)) && (param_4 != 0)) &&
     ((0x400 < param_2 && ((param_3 & 0xff00) == 0x800)))) {
    uVar1 = 0x80;
    if ((param_3 & 0xfffffffe) == 0x806) {
      uVar1 = 0x100;
    }
    if ((param_3 & 0xfffffffd) == 0x809) {
      uVar1 = 0x100;
    }
    if ((param_3 & 0xfffffffd) == 0x80c) {
      uVar1 = 0x100;
    }
    if (param_3 == 0x80f) {
      uVar1 = 0x100;
    }
    if (param_2 < 0x801) {
      uVar1 = 0x80;
    }
  }
  return uVar1;
}

