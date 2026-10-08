
QObject * FUN_100152380(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,long *param_6,long *param_7,char param_8)

{
  QObject *pQVar1;
  long lVar2;
  int *piVar3;
  char *pcVar4;
  long local_68;
  QArrayData *local_60;
  int *local_58;
  QObject *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  pQVar1 = (QObject *)FUN_100152740();
  if (pQVar1 != (QObject *)0x0) {
    FUN_100df99c0("[SERVER_MNG]","prl_client_app",0,"There is another server with the same name.");
    return pQVar1;
  }
  if ((*(int *)(*param_6 + 4) != 0) && (lVar2 = FUN_100152a20(param_1,param_6), lVar2 != 0)) {
    pcVar4 = "(!)Error: there is another server with the same uuid.";
LAB_100152622:
    FUN_100df99c0("[SERVER_MNG]","prl_client_app",0,pcVar4);
    return (QObject *)0x0;
  }
  if (*(int *)(*param_2 + 4) == 0) {
    pcVar4 = "(!)Error: server name or ip address is empty. not adding server to list.";
    goto LAB_100152622;
  }
  if ((*(int *)(*param_7 + 4) != 0) && (lVar2 = FUN_100152bc0(param_1), lVar2 != 0)) {
    pcVar4 = "(!)Error: rejecting addition of server: same disp uuid already exists in list";
    goto LAB_100152622;
  }
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  lVar2 = FUN_100152d60(param_1,param_2);
  if (lVar2 != 0) {
    FUN_100152fb0(&local_48,param_1,param_2);
    QString::operator=(&local_40,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001524cf;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_1001524cf:
  pQVar1 = operator_new(0x140);
  FUN_100159760(pQVar1,param_2,param_3,param_4,param_5,param_6,param_8);
  FUN_10015a150(pQVar1,&local_40);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
  local_58 = piVar3;
  local_50 = pQVar1;
  FUN_100157130(param_1 + 0x10,&local_58);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_31 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar3);
    }
  }
  if (param_8 == '\0') goto LAB_1001525a2;
  FUN_10015aab0(&local_60,pQVar1);
  FUN_100801bf0(param_1,&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100152597;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100152597:
  FUN_100801ba0(param_1,pQVar1);
LAB_1001525a2:
  QObject::connect(&local_68,pQVar1,"2serverStateChanged(GUI::ServerState)",param_1,
                   "1onServerStateChanged()",0);
  if (local_68 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_68);
  if (*(int *)local_40.field0_0x0 == -1) {
    return pQVar1;
  }
  if (*(int *)local_40.field0_0x0 != 0) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
    UNLOCK();
    if (*(int *)local_40.field0_0x0 != 0) {
      return pQVar1;
    }
    local_31 = 0;
  }
  QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  return pQVar1;
}

