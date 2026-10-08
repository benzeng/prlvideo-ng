
void FUN_1005b2130(long param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_38;
  Connection local_30 [15];
  undefined1 local_21;
  
  if (param_2 < 0) {
    uVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
    FUN_1005b87d0(uVar2,0);
    uVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
    FUN_1005b8760(uVar2,0);
    CAbstractWizardModel::wizardCtrl();
    CWizardController::goBack();
  }
  else {
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x30);
    }
    uVar2 = FUN_100209ac0(uVar2);
    uVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
    FUN_1005b87d0(uVar3,uVar2);
    pvVar4 = operator_new(0x30);
    FUN_10072e7c0(pvVar4,*(undefined8 *)(param_1 + 0x10));
    FUN_10072e810(pvVar4,uVar2);
    uVar3 = FUN_1005c11f0(*(undefined8 *)(param_1 + 0x10));
    FUN_10072f3d0(pvVar4,uVar3);
    uVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
    uVar3 = FUN_1005b86c0(uVar3);
    QObject::connect(local_30,uVar3,"2beforeVmRemoved(const CVmWrap&)",param_1,
                     "1onBeforeVmRemoved(const CVmWrap&)",0x80);
    QMetaObject::Connection::~Connection(local_30);
    if (*(char *)(*(long *)(param_1 + 0x30) + 0x154) != '\0') {
      lVar5 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
      *(undefined1 *)(lVar5 + 0x6d) = 1;
      lVar5 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
      *(undefined4 *)(lVar5 + 0x74) = 0xd;
    }
    QObject::connect(&local_38,uVar2,"2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)"
                     ,param_1,"1onVmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",0);
    if (local_38 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    FUN_10083fff0(param_1,uVar2);
    lVar5 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
    if (*(char *)(lVar5 + 0x6d) == '\0') {
      FUN_1005b2340(param_1);
    }
    else {
      CAbstractWizardModel::wizardCtrl();
      CWizardController::goNext();
    }
  }
  puVar6 = (undefined8 *)(param_1 + 0x28);
  piVar1 = (int *)*puVar6;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_21 = *piVar1 != 0;
    UNLOCK();
    if ((!(bool)local_21) && ((void *)*puVar6 != (void *)0x0)) {
      operator_delete((void *)*puVar6);
    }
    *puVar6 = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}

