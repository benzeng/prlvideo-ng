
undefined1 FUN_100dca7c0(char param_1,QString *param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined1 uVar3;
  QArrayData *local_88;
  QString local_80;
  QString local_78;
  QDir local_70 [8];
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  puVar1 = PTR_shared_null_1021e1288;
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_68 = (QArrayData *)PTR_shared_null_1021e1288;
  QDir::QDir(local_70,param_2);
  cVar2 = QDir::exists();
  QDir::~QDir(local_70);
  if (cVar2 == '\0') {
    local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
    QDir::QDir((QDir *)&local_78,&local_80);
    cVar2 = QDir::mkpath(&local_78);
    QDir::~QDir((QDir *)&local_78);
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_29 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100dca861;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
LAB_100dca861:
    if (cVar2 != '\0') goto LAB_100dca869;
    uVar3 = 0;
  }
  else {
LAB_100dca869:
    if (param_1 == '\0') {
      QString::fromUtf8_helper((char *)&local_48,0x1f020bd);
      QString::operator=(&local_58,&local_48);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_29 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100dca914;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
    }
    else {
      QString::fromUtf8_helper((char *)&local_50,0x1f020a6);
      QString::operator=(&local_58,&local_50);
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_29 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100dca914;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
    }
LAB_100dca914:
    QString::fromUtf8_helper((char *)&local_40,0x1f020cd);
    QString::operator=(&local_60,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_29 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100dca966;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_100dca966:
    QString::append(&local_60);
    QString::fromUtf8_helper((char *)&local_38,0x1f020d4);
    QString::append(&local_60);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100dca9c5;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_100dca9c5:
    QString::append(&local_60);
    uVar3 = FUN_100dc0bd0(&local_60,&local_68,0,0,0);
    if (2 < DAT_10230ffd0) {
      QString::toUtf8();
      FUN_100df99c0("","HostUtils",3,"Pram: run %s, rc=%d",local_88 + *(long *)(local_88 + 0x10),
                    uVar3);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_29 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100dcaaa5;
        }
        QArrayData::deallocate(local_88,1,8);
      }
    }
  }
LAB_100dcaaa5:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100dcaad5;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100dcaad5:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_29 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100dcab05;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100dcab05:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_58.field0_0x0 != 0) {
        return uVar3;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
  return uVar3;
}

