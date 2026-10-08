
void FUN_100988d50(undefined8 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_102233110;
  piVar1 = (int *)param_1[1];
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_100988d91;
      piVar1 = (int *)param_1[1];
    }
    FUN_10098a430(param_1 + 1,piVar1);
  }
LAB_100988d91:
  operator_delete(param_1);
  return;
}

