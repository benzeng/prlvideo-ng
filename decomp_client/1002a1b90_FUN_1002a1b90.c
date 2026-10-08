
QString * FUN_1002a1b90(QString *param_1,long param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined2 uVar3;
  undefined8 unaff_RBX;
  QString local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  puVar1 = PTR_shared_null_1021e1288;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  FUN_100d867e0(&local_38);
  QString::operator=(param_1,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a1bf4;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1002a1bf4:
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  QDir::QDir((QDir *)&local_40,&local_48);
  cVar2 = QDir::exists(&local_40);
  QDir::~QDir((QDir *)&local_40);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a1c4c;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1002a1c4c:
  if (cVar2 == '\0') {
    local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
    QDir::QDir((QDir *)&local_50,&local_58);
    QDir::mkpath(&local_50);
    QDir::~QDir((QDir *)&local_50);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_29 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a1ca6;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
  }
LAB_1002a1ca6:
  if (*(int *)(param_2 + 0x24) == 1) {
    uVar3 = QDir::separator();
    CAntivirusInfo::info(*(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x20));
    CAntivirusInfo::ptiInstallDir();
    QString::QString(&local_60,CONCAT62((int6)((ulong)unaff_RBX >> 0x10),uVar3) & 0xffffffff);
    QString::append(&local_60);
    QString::append(param_1);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_29 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a1d26;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_1002a1d26:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002a1d56;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_1002a1d56:
  local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  QDir::QDir((QDir *)&local_70,&local_78);
  cVar2 = QDir::exists(&local_70);
  QDir::~QDir((QDir *)&local_70);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_29 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a1dae;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1002a1dae:
  if (cVar2 == '\0') {
    local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
    QDir::QDir((QDir *)&local_80,&local_88);
    QDir::mkpath(&local_80);
    QDir::~QDir((QDir *)&local_80);
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_88.field0_0x0 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
  }
  return param_1;
}

