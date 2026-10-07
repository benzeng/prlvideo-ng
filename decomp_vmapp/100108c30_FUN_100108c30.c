
void FUN_100108c30(undefined8 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_100ba9170;
  piVar1 = (int *)param_1[3];
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_100108c71;
      piVar1 = (int *)param_1[3];
    }
    FUN_100108cd0(param_1 + 3,piVar1);
  }
LAB_100108c71:
  QMutex::~QMutex((QMutex *)(param_1 + 2));
  QMutex::~QMutex((QMutex *)(param_1 + 1));
  operator_delete(param_1);
  return;
}

