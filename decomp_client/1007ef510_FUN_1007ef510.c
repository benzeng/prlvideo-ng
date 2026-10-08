
void FUN_1007ef510(QObject *param_1,QString *param_2,QObject *param_3,QObject *param_4)

{
  long lVar1;
  QObject *this;
  int *piVar2;
  int *piVar3;
  
  QObject::QObject(param_1,param_4);
  *(undefined ***)param_1 = &PTR_FUN_10222ff70;
  this = operator_new(0x48);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021f7e30;
  *(QObject **)(this + 0x10) = param_1;
  *(undefined **)(this + 0x18) = PTR_shared_null_1021e1288;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  this[0x38] = (QObject)0x0;
  this[0x39] = (QObject)0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(QObject **)(param_1 + 0x10) = this;
  QString::operator=((QString *)(this + 0x18),param_2);
  lVar1 = *(long *)(param_1 + 0x10);
  piVar2 = (int *)0x0;
  if (param_3 != (QObject *)0x0) {
    piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  piVar3 = *(int **)(lVar1 + 0x20);
  if (piVar3 != piVar2) {
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      piVar3 = *(int **)(lVar1 + 0x20);
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if ((*piVar3 == 0) && (*(void **)(lVar1 + 0x20) != (void *)0x0)) {
        operator_delete(*(void **)(lVar1 + 0x20));
      }
    }
    *(int **)(lVar1 + 0x20) = piVar2;
    *(QObject **)(lVar1 + 0x28) = param_3;
  }
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      operator_delete(piVar2);
    }
  }
  FUN_1007e9e20(*(undefined8 *)(param_1 + 0x10));
  return;
}

