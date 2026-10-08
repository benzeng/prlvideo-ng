
void FUN_1002d37d0(long *param_1,int param_2)

{
  long lVar1;
  long local_38;
  QString local_30;
  undefined1 local_21;
  
  if (((param_1[5] == 0) || (*(int *)(param_1[5] + 4) == 0)) || (param_1[6] == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!) CCreateVmDumpDialog unexpectedly closed");
                    /* WARNING: Could not recover jumptable at 0x0001002d38eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,param_2);
    return;
  }
  if (param_2 < 0) {
    FUN_1007e7790(param_1[6],1);
    goto LAB_1002d38f7;
  }
  CSdkRequest::getResultAsString((int)&local_30);
  QString::operator=((QString *)(param_1 + 9),&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002d3872;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1002d3872:
  lVar1 = 0;
  if ((param_1[5] != 0) && (lVar1 = 0, *(int *)(param_1[5] + 4) != 0)) {
    lVar1 = param_1[6];
  }
  FUN_1007e7790(lVar1,2);
  lVar1 = 0;
  if ((param_1[5] != 0) && (lVar1 = 0, *(int *)(param_1[5] + 4) != 0)) {
    lVar1 = param_1[6];
  }
  FUN_1007e7830(lVar1,(QString *)(param_1 + 9));
LAB_1002d38f7:
  lVar1 = 0;
  if ((param_1[5] != 0) && (lVar1 = 0, *(int *)(param_1[5] + 4) != 0)) {
    lVar1 = param_1[6];
  }
  QObject::connect(&local_38,lVar1,"2finished(int)",param_1,"1onDialogFinished(int)",0);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  return;
}

