
undefined8 FUN_1002d1f90(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  local_30 = (QArrayData *)QString::fromAscii_helper("531582ac-3dce-446f-8c26-dd7e3384dcf4",0x24);
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  lVar1 = FUN_100198ef0(uVar2,&local_30,&local_38,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002d201c;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002d201c:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002d204c;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1002d204c:
  uVar2 = 0x80000009;
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x60) = 1;
    CAbstractTask::setWaitForSubTaskCompletion();
    uVar2 = 0;
    QObject::connect(&local_40,lVar1,"2jobCompleted(PRL_RESULT)",param_1,
                     "1onLoginCompleted(PRL_RESULT)",0);
    if (local_40 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_40);
  }
  return uVar2;
}

