
undefined1 FUN_100dcad80(void)

{
  undefined1 uVar1;
  QArrayData *local_38;
  QArrayData *local_30;
  QString local_28;
  QString local_20;
  undefined1 local_11;
  
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  QString::fromUtf8_helper((char *)&local_20,0x1f020f7);
  QString::operator=(&local_28,&local_20);
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      local_11 = *(int *)local_20.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dcaded;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
LAB_100dcaded:
  QString::append(&local_28);
  uVar1 = FUN_100dc0bd0(&local_28,&local_30,0,0,0);
  if (2 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","HostUtils",3,"Pram: run %s, rc=%d",local_38 + *(long *)(local_38 + 0x10),uVar1
                 );
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_11 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_100dcae85;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
LAB_100dcae85:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dcaeb5;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100dcaeb5:
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return uVar1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return uVar1;
}

