
void FUN_100782700(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  
  FUN_100380f70(param_1,param_3);
  *param_1 = &PTR_FUN_10222a8e0;
  param_1[2] = &PTR_FUN_10222aad0;
  param_1[6] = &PTR_FUN_10222ab20;
  piVar1 = (int *)*param_2;
  param_1[0xd] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = (int *)param_2[1];
  param_1[0xe] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = (int *)param_2[2];
  param_1[0xf] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 4);
  param_1[0x10] = param_2[3];
  FUN_1007827e0(param_1);
  return;
}

