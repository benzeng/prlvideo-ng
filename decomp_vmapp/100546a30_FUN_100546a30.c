
void FUN_100546a30(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_100bc54a8;
  piVar1 = (int *)*param_2;
  param_1[1] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = param_5;
  param_1[7] = param_6;
  param_1[9] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_100bc5590;
  FUN_1005445e0(param_1 + 10);
  *(undefined2 *)(param_1 + 0xd) = 0;
  return;
}

