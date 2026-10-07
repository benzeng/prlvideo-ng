
void FUN_100544630(undefined8 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 != -1) {
    FUN_1005446a0(param_1);
    piVar1 = (int *)*param_1;
  }
  if (piVar1 != (int *)0x0) {
    operator_delete(piVar1);
  }
  QFileInfo::~QFileInfo((QFileInfo *)(param_1 + 1));
  return;
}

