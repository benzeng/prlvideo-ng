
void FUN_10037fb80(QObject *param_1,QObject *param_2,QObject *param_3)

{
  long lVar1;
  QObject *this;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  QArrayData *local_38;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_10220ed30;
  this = operator_new(0x38);
  QObject::QObject(this,(QObject *)0x0);
  *(undefined ***)this = &PTR_FUN_1021f0340;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined **)(this + 0x28) = PTR_shared_null_1021e12f0;
  this[0x30] = (QObject)0x0;
  *(QObject **)(param_1 + 0x10) = this;
  *(QObject **)(this + 0x10) = param_1;
  if (param_2 != (QObject *)0x0) {
    piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
    piVar3 = *(int **)(this + 0x18);
    if (piVar3 != piVar2) {
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        local_2d = *piVar2 != 0;
        UNLOCK();
        piVar3 = *(int **)(this + 0x18);
      }
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + -1;
        local_2c = *piVar3 != 0;
        UNLOCK();
        if ((!(bool)local_2c) && (*(void **)(this + 0x18) != (void *)0x0)) {
          operator_delete(*(void **)(this + 0x18));
        }
      }
      *(int **)(this + 0x18) = piVar2;
      *(QObject **)(this + 0x20) = param_2;
    }
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      local_2b = *piVar2 != 0;
      UNLOCK();
      if (!(bool)local_2b) {
        operator_delete(piVar2);
      }
    }
  }
  FUN_10037f7a0(*(undefined8 *)(param_1 + 0x10));
  lVar1 = *(long *)(param_1 + 0x10);
  uVar4 = 0;
  if ((*(long *)(lVar1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(lVar1 + 0x18) + 4) != 0)) {
    uVar4 = *(undefined8 *)(lVar1 + 0x20);
  }
  FUN_100188480(&local_38,uVar4);
  FUN_10037f230(lVar1,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_2a = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_10037fcce;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10037fcce:
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
  uVar4 = 0;
  if ((lVar1 != 0) && (uVar4 = 0, *(int *)(lVar1 + 4) != 0)) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
  }
  FUN_10018f5b0(uVar4);
  FUN_10037eaa0(*(undefined8 *)(param_1 + 0x10));
  FUN_100380390("CStatusMessageProvider::StatusMessage",0,1);
  return;
}

