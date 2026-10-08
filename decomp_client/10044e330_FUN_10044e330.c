
void FUN_10044e330(QFrame *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_102212ef0;
  *(undefined ***)(param_1 + 0x10) = &PTR____cxa_pure_virtual_1022130f8;
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x20))();
  }
  QFrame::~QFrame(param_1);
  operator_delete(param_1);
  return;
}

