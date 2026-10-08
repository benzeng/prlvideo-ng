
undefined1 FUN_100d96dd0(QString *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  QString local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  cVar1 = FUN_100daeee0(param_1[3].field0_0x0,param_2,&local_30,&local_38);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    if (*(int *)(local_38.field0_0x0 + 4) == 0) {
      QString::fromUtf8_helper((char *)&local_28,0x1e41970);
      QString::operator=(&local_38,&local_28);
      if (*(int *)local_28.field0_0x0 != -1) {
        if (*(int *)local_28.field0_0x0 != 0) {
          LOCK();
          *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
          local_19 = *(int *)local_28.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_100d96e62;
        }
        QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
      }
    }
LAB_100d96e62:
    QString::operator=(param_1,&local_30);
    uVar2 = 1;
    QString::operator=(param_1 + 1,(QString *)&DAT_102311988);
  }
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d96ef6;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100d96ef6:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return uVar2;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return uVar2;
}

