
undefined8 FUN_1001fc6d0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  QString local_20;
  undefined1 local_11;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  CAbstractTask::clearSubTaskList();
  local_20.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QString::operator=((QString *)(param_1 + 0x48),&local_20);
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      local_11 = *(int *)local_20.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1001fc731;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
LAB_1001fc731:
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
  }
  uVar2 = FUN_10018c280(uVar2);
  local_38 = 3;
  local_30 = 0;
  local_34 = 0;
  local_2c = 0xffff;
  local_28 = 0;
  local_24 = 0;
  lVar3 = FUN_10031bef0(uVar2,1,&local_38);
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0x30) == '\0')) {
    FUN_1001fc880(param_1);
  }
  else {
    QObject::connect(&local_40,lVar3,"2switchFinished(PRL_RESULT)",param_1,
                     "1processOpenConvertDialog()",0);
    if (local_40 == 0) {
      QMetaObject::Connection::~Connection((Connection *)&local_40);
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      if (cVar1 != '\0') {
        return 0;
      }
    }
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","connected",
                  "Tasks/CTaskConvertOldFormatVmPD.cpp",0xab,"showConvertDlg");
  }
  return 0;
}

