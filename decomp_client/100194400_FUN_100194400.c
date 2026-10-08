
long FUN_100194400(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  Connection local_38 [8];
  Data_conflict local_30;
  undefined4 local_28;
  
  uVar1 = _PrlVm_GetToolsState(*(undefined8 *)(param_1 + 0x40));
  local_28 = 0x80000000;
  local_30.field7 = 0;
  lVar2 = FUN_100191960(param_1,uVar1,0x834,&local_30);
  QVariant::~QVariant((QVariant *)&local_30);
  if (lVar2 != 0) {
    QObject::connect(local_38,lVar2,"2jobCompleted(PRL_RESULT)",param_1,
                     "1onVmToolsStateUpdated(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection(local_38);
  }
  return lVar2;
}

