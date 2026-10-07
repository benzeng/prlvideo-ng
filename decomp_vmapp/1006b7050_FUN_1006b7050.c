
undefined1 FUN_1006b7050(QString *param_1)

{
  char cVar1;
  QString local_38;
  QString local_30;
  QArrayData *local_28;
  undefined1 local_1f [6];
  undefined1 local_19;
  
  cVar1 = FUN_1006b6c60(param_1,local_1f);
  if (cVar1 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","prl_net",0,"ERROR: Wrong MAC Address: %s",
                  local_28 + *(long *)(local_28 + 0x10));
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return 0;
        }
        local_19 = 0;
      }
      QArrayData::deallocate(local_28,1,8);
    }
    return 0;
  }
  FUN_1006b6dd0(&local_30,local_1f);
  QString::operator=(param_1,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_19 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006b70ba;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1006b70ba:
  QString::toUpper();
  QString::operator=(param_1,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return 1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return 1;
}

