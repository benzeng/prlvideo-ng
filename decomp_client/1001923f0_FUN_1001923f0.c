
long FUN_1001923f0(long param_1,char param_2)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  Connection *this;
  Connection local_40 [8];
  Connection local_38 [8];
  Data_conflict local_30;
  undefined4 local_28;
  
  uVar1 = _PrlVm_GetState(*(undefined8 *)(param_1 + 0x40));
  local_28 = 0x80000000;
  local_30.field7 = 0;
  lVar2 = FUN_100191960(param_1,uVar1,0x80e,&local_30);
  QVariant::~QVariant((QVariant *)&local_30);
  if (lVar2 != 0) {
    if (param_2 == '\0') {
      pcVar3 = "1onVmInfoUpdated(PRL_RESULT)";
      this = local_40;
    }
    else {
      pcVar3 = "1onVmPermissionsUpdated(PRL_RESULT)";
      this = local_38;
    }
    QObject::connect(this,lVar2,"2jobCompleted(PRL_RESULT)",param_1,pcVar3,0);
    QMetaObject::Connection::~Connection(this);
  }
  return lVar2;
}

