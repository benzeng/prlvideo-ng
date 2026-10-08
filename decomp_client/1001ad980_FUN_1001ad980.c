
void FUN_1001ad980(QObject *param_1,QObject *param_2)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  QObject *pQVar4;
  int *piVar5;
  QObject *pQVar6;
  void *pvVar7;
  int *piVar8;
  long local_50;
  long local_48;
  long local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021fe970;
  pQVar4 = operator_new(0x58);
  QObject::QObject(pQVar4,(QObject *)0x0);
  *(undefined ***)pQVar4 = &PTR_FUN_1021eeae0;
  *(QObject **)(pQVar4 + 0x10) = param_1;
  *(undefined8 *)(pQVar4 + 0x30) = 0;
  *(undefined8 *)(pQVar4 + 0x28) = 0;
  *(undefined8 *)(pQVar4 + 0x20) = 0;
  *(undefined8 *)(pQVar4 + 0x18) = 0;
  *(undefined **)(pQVar4 + 0x38) = PTR_shared_null_1021e15d0;
  *(undefined **)(pQVar4 + 0x40) = PTR_shared_null_1021e15e8;
  *(undefined8 *)(pQVar4 + 0x50) = 0;
  *(undefined8 *)(pQVar4 + 0x48) = 0;
  *(QObject **)(param_1 + 0x10) = pQVar4;
  if (param_2 != (QObject *)0x0) {
    piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
    pQVar6 = pQVar4 + 0x18;
    piVar8 = *(int **)pQVar6;
    if (piVar8 != piVar5) {
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        local_31 = *piVar5 != 0;
        UNLOCK();
        piVar8 = *(int **)pQVar6;
      }
      if (piVar8 != (int *)0x0) {
        LOCK();
        *piVar8 = *piVar8 + -1;
        local_31 = *piVar8 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (*(void **)pQVar6 != (void *)0x0)) {
          operator_delete(*(void **)pQVar6);
        }
      }
      *(int **)(pQVar4 + 0x18) = piVar5;
      *(QObject **)(pQVar4 + 0x20) = param_2;
    }
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_31 = *piVar5 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar5);
      }
    }
  }
  QObject::connect(&local_40,param_2,"2usbDeviceConnected(QString,int)",
                   *(undefined8 *)(param_1 + 0x10),"1onUsbDeviceConnected(QString,int)",0);
  bVar2 = 1;
  if (local_40 != 0) {
    bVar2 = QMetaObject::Connection::isConnected_helper();
    bVar2 = bVar2 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  QObject::connect(&local_48,param_2,"2serverHardwareChanged(CHostHardwareInfo)",
                   *(undefined8 *)(param_1 + 0x10),"1updateUsbDevices()",0);
  if (bVar2 == 0) {
    if (local_48 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = QMetaObject::Connection::isConnected_helper();
    }
  }
  else {
    cVar3 = '\0';
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar7 = operator_new(0x18);
    FUN_1001a61d0(pvVar7);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar7;
  }
  QObject::connect(&local_50,DAT_1023108e0,
                   "2vmStateChanged(const GUI::VmId&,VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)",
                   *(undefined8 *)(param_1 + 0x10),
                   "1onVmStateChanged(const GUI::VmId&,VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)"
                   ,0);
  if ((cVar3 != '\0') && (local_50 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  lVar1 = *(long *)(param_1 + 0x10);
  pvVar7 = operator_new(0x18);
  FUN_100389da0(pvVar7,0);
  pQVar4 = operator_new(0x18);
  *(void **)(pQVar4 + 0x10) = pvVar7;
  *(code **)(pQVar4 + 8) = FUN_1001ae6f0;
  *(undefined8 *)pQVar4 = 0x100000001;
  QtSharedPointer::ExternalRefCountData::setQObjectShared(pQVar4,SUB81(pvVar7,0));
  LOCK();
  *(int *)pQVar4 = *(int *)pQVar4 + 1;
  UNLOCK();
  LOCK();
  *(int *)(pQVar4 + 4) = *(int *)(pQVar4 + 4) + 1;
  UNLOCK();
  piVar8 = *(int **)(lVar1 + 0x30);
  *(QObject **)(lVar1 + 0x30) = pQVar4;
  *(void **)(lVar1 + 0x28) = pvVar7;
  if (piVar8 != (int *)0x0) {
    LOCK();
    piVar5 = piVar8 + 1;
    *piVar5 = *piVar5 + -1;
    local_31 = *piVar5 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      (**(code **)(piVar8 + 2))(piVar8);
    }
    LOCK();
    *piVar8 = *piVar8 + -1;
    local_31 = *piVar8 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar8);
    }
  }
  LOCK();
  pQVar6 = pQVar4 + 4;
  *(int *)pQVar6 = *(int *)pQVar6 + -1;
  local_31 = *(int *)pQVar6 != 0;
  UNLOCK();
  if (!(bool)local_31) {
    (**(code **)(pQVar4 + 8))(pQVar4);
  }
  LOCK();
  *(int *)pQVar4 = *(int *)pQVar4 + -1;
  local_31 = *(int *)pQVar4 != 0;
  UNLOCK();
  if (!(bool)local_31) {
    operator_delete(pQVar4);
  }
  return;
}

