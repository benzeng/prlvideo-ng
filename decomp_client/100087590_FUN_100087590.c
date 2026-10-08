
void FUN_100087590(QObject *param_1)

{
  void *pvVar1;
  int *piVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_1021edf10;
  FUN_100087700();
  (*(code *)PTR__objc_msgSend_1021e1c68)(*(undefined8 *)(param_1 + 0x18),PTR_s_release_1022699b8);
  pvVar1 = *(void **)(param_1 + 0x40);
  if (pvVar1 != (void *)0x0) {
    FUN_10008c830(pvVar1);
    operator_delete(pvVar1);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  piVar2 = *(int **)(param_1 + 0x50);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x50) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x50));
    }
  }
  piVar2 = *(int **)(param_1 + 0x30);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x30) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x30));
    }
  }
  piVar2 = *(int **)(param_1 + 0x20);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x20));
    }
  }
  QObject::~QObject(param_1);
  return;
}

