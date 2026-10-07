
void FUN_10046cee0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int *piVar2;
  int *local_28;
  undefined1 local_1b;
  undefined1 local_1a;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  piVar2 = (int *)*param_2;
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    local_1b = *piVar2 != 0;
    UNLOCK();
  }
  local_28 = piVar2;
  FUN_10046cf90(uVar1,&local_28);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_1a = *piVar2 != 0;
    UNLOCK();
    if (!(bool)local_1a) {
      FUN_100031ed0(piVar2);
      operator_delete(piVar2);
    }
  }
  if (*(int *)(*(long *)(param_1 + 0x18) + 0x10) < 0) {
    QTimer::start();
  }
  return;
}

