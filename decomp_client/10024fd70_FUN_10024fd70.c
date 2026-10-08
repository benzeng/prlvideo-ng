
void FUN_10024fd70(undefined8 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) {
        return;
      }
      piVar1 = (int *)*param_1;
    }
    FUN_1001c45d0(param_1,piVar1);
  }
  return;
}

