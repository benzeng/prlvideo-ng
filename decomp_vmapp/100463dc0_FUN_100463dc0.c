
undefined4 * FUN_100463dc0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1[1] != 0) {
    _IOObjectRelease();
  }
  uVar1 = _IOIteratorNext(*param_1);
  param_1[1] = uVar1;
  return param_1;
}

