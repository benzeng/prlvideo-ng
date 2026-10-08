
void FUN_100769a00(QObject *param_1,QObject *param_2,QObject *param_3)

{
  QObject *this;
  int *piVar1;
  QObject *pQVar2;
  int *piVar3;
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_102229870;
  this = operator_new(0x68);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021f6760;
  *(QObject **)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(QObject **)(param_1 + 0x10) = this;
  if (param_2 != (QObject *)0x0) {
    piVar1 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
    pQVar2 = this + 0x18;
    piVar3 = *(int **)pQVar2;
    if (piVar3 != piVar1) {
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        piVar3 = *(int **)pQVar2;
      }
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if ((*piVar3 == 0) && (*(void **)pQVar2 != (void *)0x0)) {
          operator_delete(*(void **)pQVar2);
        }
      }
      *(int **)(this + 0x18) = piVar1;
      *(QObject **)(this + 0x20) = param_2;
    }
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        operator_delete(piVar1);
      }
    }
  }
  FUN_1007671e0(*(undefined8 *)(param_1 + 0x10));
  return;
}

