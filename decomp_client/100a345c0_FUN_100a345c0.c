
void FUN_100a345c0(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_102238230;
  *param_1 = &PTR_FUN_1022382b0;
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete((void *)param_1[1]);
  }
  QObject::~QObject((QObject *)(param_1 + -2));
  return;
}

