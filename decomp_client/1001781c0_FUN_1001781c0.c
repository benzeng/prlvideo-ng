
undefined8 FUN_1001781c0(undefined8 param_1)

{
  undefined8 uVar1;
  long local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_28 = (QArrayData *)QString::fromAscii_helper("{4067465A-BFCC-0591-319A-034675AABDC0}",0x26);
  local_30 = (QArrayData *)QString::fromAscii_helper("",0);
  uVar1 = FUN_100175d50(param_1,&local_28,&local_30,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10017823a;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10017823a:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10017826a;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10017826a:
  QObject::connect(&local_38,uVar1,"2jobCompleted(PRL_RESULT)",param_1,
                   "1onRequestAccessOperationsCustomProtectionAuthorizationFinished(PRL_RESULT)",0);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  return uVar1;
}

