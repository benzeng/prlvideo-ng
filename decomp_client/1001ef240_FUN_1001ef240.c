
void FUN_1001ef240(CAbstractTask *param_1,QObject *param_2,QObject *param_3)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  Connection local_50 [8];
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pCVar1 = operator_new(0x18);
  FUN_100188480(&local_40,param_2);
  FUN_1001884b0(&local_48,param_2);
  FUN_10008d0d0(pCVar1,&local_40,&local_48);
  CAbstractTask::CAbstractTask(param_1,pCVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001ef2d6;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1001ef2d6:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001ef306;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001ef306:
  *(undefined ***)param_1 = &PTR_FUN_1021ffdf0;
  uVar2 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_2;
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_3 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(QObject **)(param_1 + 0x50) = param_3;
  *(undefined **)(param_1 + 0x58) = PTR_shared_null_1021e1288;
  param_1[0x60] = (CAbstractTask)0x0;
  QObject::connect(local_50,param_2,"2destroyed()",param_1,"1onVmRemoved()",0);
  QMetaObject::Connection::~Connection(local_50);
  return;
}

