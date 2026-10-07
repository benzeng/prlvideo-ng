
void FUN_1006e3550(int param_1,byte param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  char *pcVar4;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  QArrayData *local_30;
  QString local_28;
  QString local_20;
  undefined1 local_11;
  
  local_20.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  if (param_1 == 0) {
    pcVar4 = (char *)FUN_1008e4150();
    if (pcVar4 != (char *)0x0) {
      _strlen(pcVar4);
    }
    QString::fromUtf8_helper((char *)&local_30,(int)pcVar4);
    QString::normalized(&local_28,&local_30,1,0);
    QString::operator=(&local_20,&local_28);
    if (*(int *)local_28.field0_0x0 != -1) {
      if (*(int *)local_28.field0_0x0 != 0) {
        LOCK();
        *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
        local_11 = *(int *)local_28.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1006e36bb;
      }
      QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
    }
LAB_1006e36bb:
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_11 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1006e36eb;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
  else {
    cVar1 = FUN_1006d80e0();
    bVar2 = 1;
    if (cVar1 == '\0') {
      uVar3 = FUN_1006d65b0();
      bVar2 = (byte)((uVar3 & 2) >> 1);
    }
    pcVar4 = (char *)FUN_1008e42a0(param_2 | bVar2);
    if (pcVar4 != (char *)0x0) {
      _strlen(pcVar4);
    }
    QString::fromUtf8_helper((char *)&local_40,(int)pcVar4);
    QString::normalized(&local_38,&local_40,1,0);
    QString::operator=(&local_20,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_11 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1006e3604;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
LAB_1006e3604:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_11 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1006e36eb;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_1006e36eb:
  QString::toUtf8();
  FUN_1006d65c0(local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_11 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006e3735;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1006e3735:
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_20.field0_0x0 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
  return;
}

