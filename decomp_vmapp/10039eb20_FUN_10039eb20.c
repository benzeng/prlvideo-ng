
uint FUN_10039eb20(uint param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 1) {
    return param_1 != 1 | 0x2700;
  }
  if (param_2 == 0) {
    uVar1 = 0x2600;
    if (param_1 != 1) {
      return param_1 != 0 | 0x2600;
    }
  }
  else {
    uVar1 = 1 < param_1 | 0x2702;
  }
  return uVar1;
}

