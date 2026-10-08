
QString * FUN_100d90750(QString *param_1)

{
  char cVar1;
  char *pcVar2;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  pcVar2 = _getenv("PARALLELS_VM");
  if (pcVar2 != (char *)0x0) {
    _strlen(pcVar2);
  }
  QString::fromUtf8_helper((char *)&local_48,(int)pcVar2);
  QString::normalized(&local_40,&local_48,1,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d907d6;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d907d6:
  if (*(int *)(local_40.field0_0x0 + 4) == 0) {
    FUN_100d8bea0(&local_50);
    QString::operator=(&local_40,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_21 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100d90826;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
  }
LAB_100d90826:
  cVar1 = FUN_100d875e0();
  if (cVar1 == '\0') {
    param_1->field0_0x0 = local_40.field0_0x0;
    if (1 < *(int *)local_40.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_30,0x1efdf33);
    QString::append(param_1);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100d90950;
      }
      QArrayData::deallocate(local_30,2,8);
    }
    goto LAB_100d90950;
  }
  QCoreApplication::applicationDirPath();
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58;
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_21 = *(int *)local_58 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1efea79);
  QString::append(param_1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d908a5;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100d908a5:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d90950;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100d90950:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return param_1;
}

