
void FUN_1007e6cc0(QObject *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f7d60;
  piVar1 = *(int **)(param_1 + 0x78);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x78) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x78));
    }
  }
  QPixmap::~QPixmap((QPixmap *)(param_1 + 0x58));
  QTimeLine::~QTimeLine((QTimeLine *)(param_1 + 0x48));
  QObject::~QObject(param_1);
  operator_delete(param_1);
  return;
}

