
undefined8
FUN_1003c8490(uint *param_1,undefined8 param_2,uint *param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(&DAT_100b3f714 + (ulong)*param_1 * 8);
  if (((*param_1 == *param_3) && (param_5 == 1)) && (0xffffff < uVar1)) {
    FUN_1003d9bf0();
  }
  else {
    if (((uVar1 & 4) != 0) || ((*(uint *)(&DAT_100b3f714 + (ulong)*param_3 * 8) & 4) != 0)) {
      uVar2 = FUN_1003d9b80();
      return uVar2;
    }
    if (((*(uint *)(&DAT_100b3f714 + (ulong)*param_3 * 8) | uVar1) & 0x40) == 0) {
      if (param_5 == 1) {
        FUN_1003da100();
      }
      else if (param_5 == 2) {
        FUN_1003dac50();
      }
    }
    else if (param_5 == 1) {
      FUN_1003da470();
    }
    else if (param_5 == 2) {
      FUN_1003da810();
    }
  }
  return 1;
}

