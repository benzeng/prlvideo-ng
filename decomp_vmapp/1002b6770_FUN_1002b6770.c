
undefined1 FUN_1002b6770(QObject *param_1)

{
  long *plVar1;
  undefined1 uVar2;
  long lVar3;
  QObject *pQVar4;
  QArrayData *local_30;
  long *local_28;
  undefined1 local_19;
  
  lVar3 = DAT_1011c3698 + 0x10840;
  local_30 = (QArrayData *)QString::fromAscii_helper("parallels.SlidingMouse.guest.win",0x20);
  FUN_100477170(&local_28,lVar3,&local_30);
  pQVar4 = (QObject *)0x0;
  if (local_28 != (long *)0x0) {
    pQVar4 = (QObject *)local_28[2];
  }
  uVar2 = QObject::disconnect(pQVar4,
                              "2sigRecordChanged(const CTISBase::Record, const CTISBase::RecordFields)"
                              ,param_1,
                              "1onTIS_SlidingMouseChanged(const CTISBase::Record, const CTISBase::RecordFields)"
                             );
  if (local_28 != (long *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return uVar2;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return uVar2;
}

