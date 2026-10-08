
void FUN_10041b7e0(undefined8 *param_1)

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
    FUN_10041c910(param_1,piVar1);
  }
  return;
}

