
undefined8 FUN_100177d20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  long local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (*(char *)(param_1 + 0x13b) == '\0') {
    pcVar2 = "{A045BB02-0230-489F-CE99-45677ABED566}";
  }
  else {
    pcVar2 = "{7A2B97A7-A932-41AE-BAD7-31284391E6D8}";
  }
  local_30 = (QArrayData *)QString::fromAscii_helper(pcVar2,0x26);
  local_40 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_38,&local_40,param_2,0,0x20);
  uVar1 = FUN_100175d50(param_1,&local_30,&local_38,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100177dcd;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100177dcd:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100177dfd;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100177dfd:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100177e2d;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100177e2d:
  if (*(char *)(param_1 + 0x13b) == '\0') {
    QObject::connect(&local_48,uVar1,"2jobCompleted(PRL_RESULT)",param_1,
                     "1requestAccessOperationsCustomProtectionAuthorization()",0);
    if (local_48 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_48);
  }
  return uVar1;
}

