
void FUN_1004a1de0(undefined8 *param_1,undefined8 param_2)

{
  short sVar1;
  
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[1] = 0;
  _AcquireIconRef(param_2);
  sVar1 = _IconRefToIconFamily(*param_1,0xffffffff,param_1 + 1);
  if (sVar1 != 0) {
    return;
  }
  FUN_1004a1ce0(param_1);
  return;
}

