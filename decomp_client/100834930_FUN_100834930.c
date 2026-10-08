
void FUN_100834930(QWidget *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_10220e850;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10220ea00;
  piVar1 = *(int **)(param_1 + 0x30);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x30) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x30));
    }
  }
  QWidget::~QWidget(param_1);
  return;
}

