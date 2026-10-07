
QString * FUN_1005d2d60(QString *param_1,undefined8 param_2,long param_3)

{
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  local_38 = (QArrayData *)QString::fromAscii_helper("Location",8);
  QDomDocument::createElement(param_1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d2dd1;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005d2dd1:
  local_40 = (QArrayData *)QString::fromAscii_helper("GUID",4);
  FUN_1007d6a70(&local_48,param_3);
  FUN_1005ba3b0(param_2,&local_40,&local_48,param_1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d2e35;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005d2e35:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d2e65;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005d2e65:
  local_50 = (QArrayData *)QString::fromAscii_helper("Timeout",7);
  QString::number((ulonglong)&local_58,(int)*(undefined8 *)(param_3 + 0x10));
  FUN_1005ba3b0(param_2,&local_50,&local_58,param_1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d2ecf;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005d2ecf:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d2eff;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005d2eff:
  local_60 = (QArrayData *)QString::fromAscii_helper("Index",5);
  QString::number((int)&local_68,*(int *)(param_3 + 0x18));
  FUN_1005ba3b0(param_2,&local_60,&local_68,param_1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d2f69;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1005d2f69:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
  return param_1;
}

