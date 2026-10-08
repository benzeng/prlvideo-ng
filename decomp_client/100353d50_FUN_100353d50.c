
void FUN_100353d50(QObject *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_10220d720;
  FUN_100353ed0(param_1,0);
  piVar1 = *(int **)(param_1 + 0x80);
  if (piVar1 != (int *)0x0) {
    if ((piVar1[1] != 0) && (*(QObject **)(param_1 + 0x88) != (QObject *)0x0)) {
      QObject::disconnect(*(QObject **)(param_1 + 0x88),"2jobCompleted( PRL_RESULT )",param_1,
                          "1onScreenRegionCaptured( PRL_RESULT )");
      CSdkRequest::cancel();
      piVar1 = *(int **)(param_1 + 0x80);
      if (piVar1 == (int *)0x0) goto LAB_100353df4;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x80) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x80));
    }
  }
LAB_100353df4:
  QTimer::~QTimer((QTimer *)(param_1 + 0x60));
  QImage::~QImage((QImage *)(param_1 + 0x20));
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x10) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x10));
    }
  }
  QObject::~QObject(param_1);
  return;
}

