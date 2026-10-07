
void FUN_1004c7980(QObject *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  QArrayData *local_40;
  long *local_38;
  long local_30;
  undefined1 local_21;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_100bc4390;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  lVar2 = DAT_1011c3698;
  local_40 = (QArrayData *)QString::fromAscii_helper("parallels.SharedFolders.guest.win",0x21);
  FUN_100477170(&local_38,lVar2 + 0x10840,&local_40);
  lVar2 = 0;
  if (local_38 != (long *)0x0) {
    lVar2 = local_38[2];
  }
  QObject::connect(&local_30,lVar2,
                   "2sigRecordChanged(const CTISBase::Record, const CTISBase::RecordFields)",param_1
                   ,"1onTISRecordChanged(const CTISBase::Record, const CTISBase::RecordFields)",1);
  if (local_30 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

