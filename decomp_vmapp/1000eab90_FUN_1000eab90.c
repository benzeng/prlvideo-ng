
undefined8 FUN_1000eab90(uint *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (uVar1 < 0x17) {
    if ((0x40e200U >> (uVar1 & 0x1f) & 1) != 0) {
      return 0;
    }
    if ((uVar1 == 0x13) && (param_2 != 0)) {
      return 0;
    }
  }
  return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
}

