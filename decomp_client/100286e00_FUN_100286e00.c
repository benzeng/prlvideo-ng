
void FUN_100286e00(undefined8 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_1022722d8;
  param_1[2] = &PTR_FUN_102272308;
  piVar1 = (int *)param_1[4];
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_100286e4c;
      piVar1 = (int *)param_1[4];
    }
    FUN_100286360(param_1 + 4,piVar1);
  }
LAB_100286e4c:
  FUN_100286650(param_1);
  operator_delete(param_1);
  return;
}

