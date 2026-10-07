
QString * FUN_1006e1c30(QString *param_1)

{
  char cVar1;
  QString local_68;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  cVar1 = FUN_1006d80e0();
  if (cVar1 != '\0') {
    FUN_1006da0c0(&local_38);
    if (*(int *)(local_38.field0_0x0 + 4) == 0) {
      local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
    }
    else {
      QDir::QDir((QDir *)&local_40,&local_38);
      local_48 = (QArrayData *)QString::fromAscii_helper("Temp",4);
      cVar1 = QDir::exists(&local_40);
      if ((cVar1 == '\0') && (cVar1 = QDir::mkdir(&local_40), cVar1 == '\0')) {
        local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
      }
      else {
        local_58 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
        QString::arg(&local_50,&local_58,&local_38,0,0x20);
        QString::arg(&local_60,&local_50,&local_48,0,0x20);
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_19 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_1006e1d2b;
          }
          QArrayData::deallocate(local_50,2,8);
        }
LAB_1006e1d2b:
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_19 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_1006e1d83;
          }
          QArrayData::deallocate(local_58,2,8);
        }
      }
LAB_1006e1d83:
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_19 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1006e1db3;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_1006e1db3:
      QDir::~QDir((QDir *)&local_40);
    }
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_19 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1006e1dec;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
LAB_1006e1dec:
    QString::operator=(param_1,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_19 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1006e1e28;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
  }
LAB_1006e1e28:
  if (*(int *)(param_1->field0_0x0 + 4) == 0) {
    QDir::tempPath();
    QString::operator=(param_1,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_19 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1006e1e76;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
  }
LAB_1006e1e76:
  if (*(int *)(param_1->field0_0x0 + 4) == 0) {
    QString::fromUtf8_helper((char *)&local_30,0xae9217);
    QString::operator=(param_1,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_19 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1006e1ed0;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
LAB_1006e1ed0:
  QString::fromUtf8_helper((char *)&local_28,0xae921c);
  QString::append(param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006e1f21;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1006e1f21:
  if (*(int *)(param_1->field0_0x0 + 4) == 0) {
    FUN_1008e3970("","cmn_utils",0,"ASSERT( %s ) occured in %s:%d [%s]","!path.isEmpty()",
                  "ParallelsDirs.cpp",0x50a,"getCrashDumpsPath");
  }
  return param_1;
}

