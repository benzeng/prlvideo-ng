
undefined1 FUN_1004d84c0(void)

{
  long lVar1;
  QString QVar2;
  char cVar3;
  QString local_40;
  QString local_38;
  QString local_30;
  undefined4 local_28;
  undefined1 local_21;
  
  QString::toUtf8_helper(&local_30);
  local_28 = 0;
  cVar3 = FUN_100761b20((QArrayData *)(local_30.field0_0x0 + *(long *)(local_30.field0_0x0 + 0x10)),
                        &local_28,1,0);
  if (cVar3 == '\0') {
    cVar3 = '\0';
  }
  else {
    cVar3 = FUN_100761c10(local_28);
  }
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004d8576;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,1,8);
  }
LAB_1004d8576:
  if (cVar3 != '\0') {
    return 1;
  }
  if (DAT_1011b55f8 < 3) {
    return 0;
  }
  QString::toUtf8_helper(&local_38);
  QVar2.field0_0x0 = local_38.field0_0x0;
  lVar1 = *(long *)(local_38.field0_0x0 + 0x10);
  QString::toUtf8_helper(&local_40);
  FUN_1008e3970("","SharedFoldersHost",3,"folder is enabled, but does not exist: \"%s\", \"%s\"",
                (QArrayData *)(QVar2.field0_0x0 + lVar1),
                (QArrayData *)(local_40.field0_0x0 + *(long *)(local_40.field0_0x0 + 0x10)));
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004d8613;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,1,8);
  }
LAB_1004d8613:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return 0;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,1,8);
  }
  return 0;
}

