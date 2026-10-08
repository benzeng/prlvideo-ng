
void FUN_100ac28c0(QObject *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_10223a190;
  *(undefined **)(param_1 + 0x10) = &DAT_10223a208;
  FUN_100abba30(param_1 + 0x28);
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x18));
    }
  }
  QObject::~QObject(param_1);
  return;
}

