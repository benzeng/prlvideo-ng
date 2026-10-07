
void FUN_1002a4fb0(undefined8 *param_1)

{
  ulong uVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_100bb2b18;
  uVar1 = 0;
  do {
    while (param_1[uVar1 + 8] != 0) {
      param_1[uVar1 + 8] = *(undefined8 *)(param_1[uVar1 + 8] + 0x20);
      FUN_1002a6be0();
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x100);
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
  }
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
  }
  QMutex::~QMutex((QMutex *)(param_1 + 7));
  QMutex::~QMutex((QMutex *)(param_1 + 2));
  return;
}

