
undefined8 FUN_10039b5b0(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_2 < 0xb) {
    if ((0x2deU >> (param_2 & 0x1f) & 1) == 0) {
      if ((0x120U >> (param_2 & 0x1f) & 1) == 0) {
        if (param_2 == 10) {
          uVar1 = 1;
          if (*(char *)(param_1 + 0x3080) != '\0') {
            uVar1 = 0xc;
          }
          return uVar1;
        }
      }
      else {
        uVar1 = 2;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

