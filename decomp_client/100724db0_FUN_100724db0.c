
void FUN_100724db0(undefined8 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_102274b90;
  QVariant::~QVariant((QVariant *)(param_1 + 0xb));
  piVar1 = (int *)param_1[7];
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && ((void *)param_1[7] != (void *)0x0)) {
      operator_delete((void *)param_1[7]);
    }
  }
  QKeySequence::~QKeySequence((QKeySequence *)(param_1 + 6));
  FUN_100722a30(param_1);
  return;
}

