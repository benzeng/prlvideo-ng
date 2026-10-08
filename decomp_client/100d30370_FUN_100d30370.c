
void FUN_100d30370(undefined8 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_10225b7d0;
  piVar1 = (int *)param_1[1];
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) {
        return;
      }
      piVar1 = (int *)param_1[1];
    }
    FUN_100d30b30(param_1 + 1,piVar1);
  }
  return;
}

