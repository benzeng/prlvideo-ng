
undefined1 FUN_1002b6090(undefined8 param_1)

{
  long *plVar1;
  undefined1 uVar2;
  long lVar3;
  QArrayData *local_38;
  long *local_30;
  long local_28;
  undefined1 local_19;
  
  lVar3 = DAT_1011c3698 + 0x10840;
  local_38 = (QArrayData *)QString::fromAscii_helper("parallels.SlidingMouse.guest.win",0x20);
  FUN_100477170(&local_30,lVar3,&local_38);
  lVar3 = 0;
  if (local_30 != (long *)0x0) {
    lVar3 = local_30[2];
  }
  QObject::connect(&local_28,lVar3,
                   "2sigRecordChanged(const CTISBase::Record, const CTISBase::RecordFields)",param_1
                   ,
                   "1onTIS_SlidingMouseChanged(const CTISBase::Record, const CTISBase::RecordFields)"
                   ,1);
  if (local_28 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar2;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return uVar2;
}

