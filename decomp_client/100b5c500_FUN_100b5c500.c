
undefined1 FUN_100b5c500(long param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  QArrayData *local_38;
  QString local_30;
  QString local_28;
  QString local_20;
  undefined1 local_11;
  
  local_20.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (*(char *)(param_1 + 0x18) == '\0') {
    uVar2 = 0;
    goto LAB_100b5c63c;
  }
  if (param_2 == 0) {
    cVar1 = FUN_100b5b900();
    param_2 = (cVar1 == '\0') + 1;
  }
  if (param_2 == 2) {
    local_30.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Battery Power",0xd);
    QString::operator=(&local_20,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_11 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_100b5c5e8;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
  else if (param_2 == 1) {
    local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("AC Power",8)
    ;
    QString::operator=(&local_20,&local_28);
    if (*(int *)local_28.field0_0x0 != -1) {
      if (*(int *)local_28.field0_0x0 != 0) {
        LOCK();
        *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
        local_11 = *(int *)local_28.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_100b5c5e8;
      }
      QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
    }
  }
LAB_100b5c5e8:
  local_38 = (QArrayData *)local_20.field0_0x0;
  if (1 < *(int *)local_20.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + 1;
    local_11 = *(int *)local_20.field0_0x0 != 0;
    UNLOCK();
  }
  uVar2 = FUN_100b5b9b0(&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100b5c63c;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100b5c63c:
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_20.field0_0x0 != 0) {
        return uVar2;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
  return uVar2;
}

