
void FUN_1004bdd90(void)

{
  char cVar1;
  QString local_38;
  QString local_30;
  QString local_28;
  QString local_20;
  undefined1 local_11;
  
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  cVar1 = FUN_100d80630(1);
  if (cVar1 == '\0') {
    QString::fromUtf8_helper((char *)&local_20,0x1df9691);
    QString::operator=(&local_30,&local_20);
    if (*(int *)local_20.field0_0x0 != -1) {
      if (*(int *)local_20.field0_0x0 != 0) {
        LOCK();
        *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
        local_11 = *(int *)local_20.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1004bde58;
      }
      QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
    }
  }
  else {
    QString::fromUtf8_helper((char *)&local_28,0x1df9621);
    QString::operator=(&local_30,&local_28);
    if (*(int *)local_28.field0_0x0 != -1) {
      if (*(int *)local_28.field0_0x0 != 0) {
        LOCK();
        *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
        local_11 = *(int *)local_28.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1004bde58;
      }
      QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
    }
  }
LAB_1004bde58:
  FUN_100d6fb50(&local_30);
  cVar1 = FUN_100d80630(1);
  if (cVar1 != '\0') {
    local_38.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)
         QString::fromAscii_helper("com.apple.systempreferences",0x1b);
    MacUtils::activateApplication(&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_11 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1004bdebd;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
LAB_1004bdebd:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return;
}

