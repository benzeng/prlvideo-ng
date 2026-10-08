
void FUN_1001d4f80(QApplication *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021ff5d0;
  FUN_100df99c0("","prl_client_app",0,"Destructing application object ");
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x28) + 0x20))();
  }
  *(undefined ***)param_1 = &PTR_FUN_10223b460;
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x18));
    }
  }
  QApplication::~QApplication(param_1);
  return;
}

