
void FUN_100386210(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  long local_38;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  uVar1 = *param_2;
  piVar2 = (int *)param_2[1];
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    local_2c = *piVar2 != 0;
    UNLOCK();
    LOCK();
    piVar3 = piVar2 + 1;
    *piVar3 = *piVar3 + 1;
    local_2b = *piVar3 != 0;
    UNLOCK();
  }
  piVar3 = *(int **)(param_1 + 0x18);
  *(int **)(param_1 + 0x18) = piVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar2 = piVar3 + 1;
    *piVar2 = *piVar2 + -1;
    local_2a = *piVar2 != 0;
    UNLOCK();
    if (!(bool)local_2a) {
      (**(code **)(piVar3 + 2))(piVar3);
    }
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_29 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar3);
    }
  }
  *(undefined8 *)(param_1 + 0x30) = param_3[2];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x28) = param_3[1];
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_100386310(param_1);
  QObject::connect(&local_38,*param_2,"2dataChanged(const QModelIndex&,const QModelIndex&)",param_1,
                   "1updateVm(const QModelIndex&,const QModelIndex&)",0);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  return;
}

