
undefined8 FUN_100181e50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if ((*(double *)(param_1 + 8) != 0.0) || (NAN(*(double *)(param_1 + 8)))) {
    uVar1 = 1;
    if ((*(double *)(param_1 + 0x10) != 0.0) || (NAN(*(double *)(param_1 + 0x10)))) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

