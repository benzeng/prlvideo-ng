
void FUN_100766840(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  Connection local_40 [8];
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar1 = FUN_100769fd0();
  local_30 = (QArrayData *)QString::fromAscii_helper("{2d3c77c0-a926-f34f-5eb4-3590ccab781e}",0x26);
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  lVar2 = FUN_100175d50(uVar1,&local_30,&local_38,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007668bd;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1007668bd:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007668ed;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1007668ed:
  *(undefined1 *)(lVar2 + 0x60) = 1;
  QObject::connect(local_40,lVar2,"2jobCompleted(PRL_RESULT)",param_1,
                   "1onCleanUpRequestCompleted(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_40);
  *(undefined1 *)(param_1 + 0x29) = 1;
  FUN_10085bca0(param_1);
  return;
}

