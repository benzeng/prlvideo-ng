
QString * FUN_100d8a070(QString *param_1)

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
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  cVar1 = FUN_100d80520();
  if (cVar1 != '\0') {
    FUN_100d82500(&local_38);
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
            if ((bool)local_19) goto LAB_100d8a16b;
          }
          QArrayData::deallocate(local_50,2,8);
        }
LAB_100d8a16b:
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_19 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_100d8a1c3;
          }
          QArrayData::deallocate(local_58,2,8);
        }
      }
LAB_100d8a1c3:
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_19 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_100d8a1f3;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_100d8a1f3:
      QDir::~QDir((QDir *)&local_40);
    }
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_19 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100d8a22c;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
LAB_100d8a22c:
    QString::operator=(param_1,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_19 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100d8a268;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
  }
LAB_100d8a268:
  if (*(int *)(param_1->field0_0x0 + 4) == 0) {
    QDir::tempPath();
    QString::operator=(param_1,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_19 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100d8a2b6;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
  }
LAB_100d8a2b6:
  if (*(int *)(param_1->field0_0x0 + 4) == 0) {
    QString::fromUtf8_helper((char *)&local_30,0x1efe5da);
    QString::operator=(param_1,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_19 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100d8a310;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
LAB_100d8a310:
  QString::fromUtf8_helper((char *)&local_28,0x1efe5df);
  QString::append(param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d8a361;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100d8a361:
  if (*(int *)(param_1->field0_0x0 + 4) == 0) {
    FUN_100df99c0("","cmn_utils",0,"ASSERT( %s ) occured in %s:%d [%s]","!path.isEmpty()",
                  "ParallelsDirs.cpp",0x50a,"getCrashDumpsPath");
  }
  return param_1;
}

