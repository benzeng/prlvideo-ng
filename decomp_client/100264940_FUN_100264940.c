
void FUN_100264940(CAbstractTask *param_1,QObject *param_2,CVmConfiguration *param_3,
                  undefined4 param_4)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  Connection local_58 [8];
  Connection local_50 [8];
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  pCVar1 = operator_new(0x18);
  FUN_10015a2b0(&local_48,param_2);
  FUN_100265be0(pCVar1,&local_48);
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_40,pCVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002649d2;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002649d2:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002649f8;
    }
    QListData::dispose(local_40);
  }
LAB_1002649f8:
  *(undefined ***)param_1 = &PTR_FUN_102205190;
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_2;
  CVmConfiguration::CVmConfiguration((CVmConfiguration *)(param_1 + 0x28),param_3);
  *(undefined4 *)(param_1 + 0x120) = param_4;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined **)(param_1 + 0x140) = PTR_shared_null_1021e1288;
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  QObject::connect(local_50,uVar2,"2vmRegistered(PRL_RESULT, const QString&)",param_1,
                   "1onVmRegisterFinished(PRL_RESULT, const QString&)",0);
  QMetaObject::Connection::~Connection(local_50);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  QObject::connect(local_58,uVar2,"2afterVmAdded(const CVmWrap&)",param_1,
                   "1onAfterVmAdded(const CVmWrap&)",0);
  QMetaObject::Connection::~Connection(local_58);
  return;
}

