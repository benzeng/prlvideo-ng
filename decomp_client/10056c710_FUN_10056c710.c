
void FUN_10056c710(QWidget *param_1,QObject *param_2,undefined8 param_3)

{
  void *pvVar1;
  int *piVar2;
  int *piVar3;
  
  QWidget::QWidget(param_1,param_3,0);
  *(undefined ***)param_1 = &PTR_FUN_10221bfc0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10221c170;
  pvVar1 = operator_new(0x58);
  FUN_100568b50(pvVar1,param_1);
  *(void **)(param_1 + 0x30) = pvVar1;
  *(QWidget **)((long)pvVar1 + 0x10) = param_1;
  piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  piVar3 = *(int **)((long)pvVar1 + 0x48);
  if (piVar3 != piVar2) {
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      piVar3 = *(int **)((long)pvVar1 + 0x48);
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if ((*piVar3 == 0) && (*(void **)((long)pvVar1 + 0x48) != (void *)0x0)) {
        operator_delete(*(void **)((long)pvVar1 + 0x48));
      }
    }
    *(int **)((long)pvVar1 + 0x48) = piVar2;
    *(QObject **)((long)pvVar1 + 0x50) = param_2;
  }
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      operator_delete(piVar2);
    }
  }
  FUN_100568bf0(*(undefined8 *)(param_1 + 0x30));
  return;
}

