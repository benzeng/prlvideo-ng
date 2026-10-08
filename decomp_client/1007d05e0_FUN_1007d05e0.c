
void FUN_1007d05e0(undefined8 param_1)

{
  char cVar1;
  QFile *this;
  undefined1 local_60 [8];
  undefined *local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  QString local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_30.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper
                 ("/Library/Application Support/Kaspersky Lab/KAV/Binaries/config.xml",0x42);
  this = operator_new(0x10);
  QFile::QFile(this,&local_30);
  cVar1 = QFile::exists();
  if ((cVar1 != '\0') && (cVar1 = FUN_1007d57f0(this,&local_28), cVar1 == '\0')) {
    local_40 = (QArrayData *)QString::fromAscii_helper("com.kaspersky.kav",0x11);
    FUN_100a07320(&local_38,&local_40);
    QString::operator=(&local_28,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_19 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1007d06aa;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
LAB_1007d06aa:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_19 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1007d06da;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1007d06da:
    local_50 = (QArrayData *)
               QString::fromAscii_helper("Type: unknown; Version: %1; Edition: unknown",0x2c);
    QString::arg(&local_48,&local_50,&local_28,0,0x20);
    QString::operator=(&local_28,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_19 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1007d0745;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_1007d0745:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_19 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1007d0775;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_1007d0775:
  if (*(int *)(local_28.field0_0x0 + 4) != 0) {
    local_58 = PTR_shared_null_1021e15e8;
    ClientStatistics::getKasperskyAntivirusInMacosHost();
    FUN_1000e5fc0(&local_58,local_60);
    FUN_100039a80(local_60);
    cVar1 = QtPrivate::QStringList_contains(&local_58,&local_28,1);
    if (cVar1 == '\0') {
      FUN_1000341d0(&local_58,&local_28);
    }
    FUN_1007d54a0(param_1,&local_58);
    FUN_100039a80(&local_58);
  }
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_19 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007d0818;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1007d0818:
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return;
}

