
void FUN_100323740(QObject *param_1)

{
  QObject *this;
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  
  this = operator_new(0x28);
  QObject::QObject(this,(QObject *)0x0);
  *(undefined **)this = &DAT_1021ef980;
  uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_1);
  *(undefined8 *)(this + 0x10) = uVar1;
  *(QObject **)(this + 0x18) = param_1;
  *(undefined **)(this + 0x20) = PTR_shared_null_1021e15d0;
  piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(this);
  piVar3 = *(int **)(param_1 + 0x90);
  if (piVar3 != piVar2) {
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      piVar3 = *(int **)(param_1 + 0x90);
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if ((*piVar3 == 0) && (*(void **)(param_1 + 0x90) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x90));
      }
    }
    *(int **)(param_1 + 0x90) = piVar2;
    *(QObject **)(param_1 + 0x98) = this;
  }
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      operator_delete(piVar2);
    }
  }
  return;
}

