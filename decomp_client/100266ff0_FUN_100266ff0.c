
undefined8 FUN_100266ff0(long param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  Connection local_60 [8];
  QArrayData *local_58;
  QString local_50;
  undefined *local_48 [2];
  QArrayData *local_38;
  _func_void_Node_ptr *local_30;
  undefined1 local_21;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_50,uVar5);
  COsInstallationInfo::COsInstallationInfo((COsInstallationInfo *)local_48,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100267064;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100267064:
  COsInstallationInfo::remove();
  pvVar4 = operator_new(0x50);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_58,uVar5);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar3 = FUN_10018bce0(uVar5);
  bVar2 = 1;
  if (iVar3 != 3) {
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    bVar2 = FUN_10018ecf0(uVar5);
    bVar2 = bVar2 ^ 1;
  }
  FUN_100240130(pvVar4,&local_58,bVar2,0,0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100267121;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100267121:
  QObject::connect(local_60,pvVar4,"2taskFinished(PRL_RESULT)",param_1,
                   "1onWizardFinished(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_60);
  CAbstractTask::execute();
  local_48[0] = PTR_vtable_1021e17e0 + 0x10;
  if (*(int *)(local_30 + 0x10) != -1) {
    if (*(int *)(local_30 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_30 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_21 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100267190;
    }
    QHashData::free_helper(local_30);
  }
LAB_100267190:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002671c0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002671c0:
  QObject::~QObject((QObject *)local_48);
  return 0;
}

