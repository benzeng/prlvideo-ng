
undefined8 * FUN_100d86030(undefined8 *param_1)

{
  int iVar1;
  QDir local_58 [8];
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  QString local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_40 = (QArrayData *)QString::fromAscii_helper("PARALLELS_VM",0xc);
  FUN_100ddaee0(&local_38,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d86090;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100d86090:
  if (*(int *)(local_38.field0_0x0 + 4) == 0) {
    QCoreApplication::applicationDirPath();
    QString::operator=(&local_38,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_19 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100d860e4;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_100d860e4:
    FUN_100d806d0(&local_30);
    iVar1 = *(int *)(local_30 + 4);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_19 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100d8611c;
      }
      QArrayData::deallocate(local_30,2,8);
    }
LAB_100d8611c:
    if (iVar1 != 0) {
      FUN_100d86380(param_1);
      goto LAB_100d861f7;
    }
    QString::fromUtf8_helper((char *)&local_28,0x1efe38c);
    QString::append(&local_38);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        local_19 = *(int *)local_28 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100d8617f;
      }
      QArrayData::deallocate(local_28,2,8);
    }
LAB_100d8617f:
    QDir::QDir(local_58,&local_38);
    QDir::absolutePath();
    QString::operator=(&local_38,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_19 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100d861d6;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_100d861d6:
    QDir::~QDir(local_58);
  }
  *param_1 = local_38.field0_0x0;
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_19 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
LAB_100d861f7:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return param_1;
}

