
void FUN_1007c7760(long param_1)

{
  char cVar1;
  int iVar2;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_19;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x30) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    return;
  }
  FUN_10032cca0(&local_38);
  local_60 = (QArrayData *)QString::fromAscii_helper("%1.%2.%3.%4",0xb);
  QString::arg(&local_58,&local_60,local_38,0,10,0x20);
  QString::arg(&local_50,&local_58,local_34,0,10,0x20);
  QString::arg(&local_48,&local_50,local_30,0,10,0x20);
  QString::arg(&local_40,&local_48,local_2c,0,10,0x20);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007c7858;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007c7858:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007c7888;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1007c7888:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007c78b8;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007c78b8:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007c78e8;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1007c78e8:
  iVar2 = QString::compare_helper
                    ((QArrayData *)(local_40.field0_0x0 + *(long *)(local_40.field0_0x0 + 0x10)),
                     *(undefined4 *)(local_40.field0_0x0 + 4),"0.0.0.0",0xffffffff,1);
  if (iVar2 == 0) {
    local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QString::operator=(&local_40,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_19 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1007c7959;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
  }
LAB_1007c7959:
  cVar1 = operator==((QString *)(param_1 + 0x20),&local_40);
  if (cVar1 == '\0') {
    QString::operator=((QString *)(param_1 + 0x20),&local_40);
    FUN_100864190(*(undefined8 *)(param_1 + 0x10),&local_40);
  }
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

