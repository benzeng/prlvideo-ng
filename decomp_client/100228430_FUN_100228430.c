
void FUN_100228430(CAbstractTask *param_1,QObject *param_2,undefined8 *param_3,undefined4 param_4,
                  QObject *param_5)

{
  int *piVar1;
  CTaskGenericId *pCVar2;
  undefined8 uVar3;
  long local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pCVar2 = operator_new(0x18);
  FUN_100188480(&local_40,param_2);
  CVmDevice::getSystemName();
  CVmDevice::getUserFriendlyName();
  FUN_100228fd0(pCVar2,&local_40,&local_48,&local_50);
  CAbstractTask::CAbstractTask(param_1,pCVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002284f6;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1002284f6:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10022852c;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10022852c:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100228560;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100228560:
  *(undefined ***)param_1 = &PTR_FUN_102202040;
  uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(QObject **)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = *param_3;
  piVar1 = (int *)param_3[1];
  *(int **)(param_1 + 0x30) = piVar1;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(*(long *)(param_1 + 0x30) + 4);
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x38) = param_4;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  uVar3 = 0;
  if (param_5 != (QObject *)0x0) {
    uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_5);
  }
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  *(QObject **)(param_1 + 0x58) = param_5;
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  QObject::connect(&local_58,uVar3,"2hddResizeProgressChanged(int)",param_1,"2progressChanged(int)",
                   0);
  if (local_58 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  return;
}

