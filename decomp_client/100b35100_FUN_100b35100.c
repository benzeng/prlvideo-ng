
undefined8 FUN_100b35100(int *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    uVar1 = 0x80000008;
    if (*param_1 != 0xb) {
      uVar1 = 0x80029006;
    }
    return uVar1;
  }
  return 0x80000018;
}

