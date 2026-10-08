
void FUN_1002979c0(CAbstractTask *param_1,QObject *param_2,CAbstractTask param_3,undefined4 param_4,
                  CAbstractTask param_5)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  long local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pCVar1 = operator_new(0x18);
  if (param_2 == (QObject *)0x0) {
    local_40 = (QArrayData *)QString::fromAscii_helper("",0);
  }
  else {
    FUN_100188480(&local_40,param_2);
  }
  FUN_1001bace0(pCVar1,&local_40);
  CAbstractTask::CAbstractTask(param_1,pCVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100297a60;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100297a60:
  uVar2 = 0;
  *(undefined ***)param_1 = &PTR_FUN_102207020;
  if (param_2 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_2;
  param_1[0x28] = param_3;
  param_1[0x29] = (CAbstractTask)0x0;
  param_1[0x2a] = param_5;
  *(undefined4 *)(param_1 + 0x2c) = param_4;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  CAbstractTask::setOption(param_1,4,1);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = FUN_10018c280(uVar2);
  QObject::connect(&local_48,uVar2,
                   "2vmPrimaryDisplayViewModeChanged(const QString&, GUI::VmDisplayViewMode, GUI::VmDisplayViewMode)"
                   ,param_1,"1onPrimaryDisplayViewModeChanged()",0);
  if (local_48 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  return;
}

