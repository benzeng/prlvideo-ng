
void FUN_100212e10(long param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined8 uVar3;
  Connection local_40 [8];
  QArrayData *local_38;
  undefined1 local_29;
  
  pvVar2 = operator_new(0x40);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
  }
  CVmDevice::getSystemName();
  uVar1 = CVmDevice::getIndex();
  FUN_100264050(pvVar2,uVar3,&local_38,uVar1,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100212ea4;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100212ea4:
  QObject::connect(local_40,pvVar2,"2taskFinished(PRL_RESULT)",param_1,
                   "1onTaskConvertHddFinished(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_40);
  CAbstractTask::execute();
  return;
}

