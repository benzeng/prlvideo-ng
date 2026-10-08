
void FUN_100a59fe0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = (int *)*param_2;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[1] = param_3;
  uVar2 = QString::fromAscii_helper("",0);
  param_1[2] = uVar2;
  param_1[3] = param_4;
  return;
}

