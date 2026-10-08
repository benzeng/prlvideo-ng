
void FUN_10008b540(QObject *param_1,QObject *param_2)

{
  undefined *puVar1;
  QObject *this;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  void *pvVar5;
  undefined8 uVar6;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10222feb0;
  this = operator_new(0x60);
  QObject::QObject(this,(QObject *)0x0);
  *(undefined ***)this = &PTR_FUN_1021edf10;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___PDVmData_10226aa50,PTR_s_new_102269070);
  *(undefined8 *)(this + 0x18) = uVar2;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(QObject **)(param_1 + 0x10) = this;
  *(QObject **)(this + 0x10) = param_1;
  if (param_2 != (QObject *)0x0) {
    piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
    piVar4 = *(int **)(this + 0x30);
    if (piVar4 != piVar3) {
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
        piVar4 = *(int **)(this + 0x30);
      }
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if ((*piVar4 == 0) && (*(void **)(this + 0x30) != (void *)0x0)) {
          operator_delete(*(void **)(this + 0x30));
        }
      }
      *(int **)(this + 0x30) = piVar3;
      *(QObject **)(this + 0x38) = param_2;
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        operator_delete(piVar3);
      }
    }
  }
  puVar1 = PTR__OBJC_CLASS___PDProgress_10226aa60;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
  pvVar5 = operator_new(0x48);
  FUN_100798f50(pvVar5,param_2,param_1);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (puVar1,PTR_s_progressWithAbstractOperation__10226a0a8,pvVar5);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_setProgress__10226a088,uVar6);
  FUN_100089ce0(*(undefined8 *)(param_1 + 0x10));
  return;
}

