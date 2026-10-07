
undefined8 FUN_1005da290(long *param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  long local_48 [2];
  QString local_38;
  undefined1 local_29;
  
  QFileInfo::absoluteFilePath();
  QFile::QFile((QFile *)local_48,&local_38);
  cVar2 = QFile::open(local_48,3);
  if (cVar2 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,
                  "Error: can\'t open VMDK file \'%s\' for write while saving descriptor",
                  local_50 + *(long *)(local_50 + 0x10));
    uVar5 = 0x80021024;
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005da601;
      }
      QArrayData::deallocate(local_50,1,8);
    }
  }
  else {
    if (*(long *)(*(long *)(*param_1 + 0x10) + 0x24) == 0) {
      cVar2 = QFile::resize((longlong)local_48);
      if (cVar2 == '\0') {
        QString::toUtf8();
        FUN_1008e3970("","vdisk",0,"Error: can\'t truncate VMDK file \'%s\' while saving descriptor"
                      ,local_68 + *(long *)(local_68 + 0x10));
        uVar5 = 0x80021024;
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_29 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005da601;
          }
          QArrayData::deallocate(local_68,1,8);
        }
        goto LAB_1005da601;
      }
      lVar3 = *param_1;
    }
    else {
      cVar2 = (**(code **)(local_48[0] + 0x88))
                        (local_48,*(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x238));
      if (cVar2 == '\0') {
        QString::toUtf8();
        FUN_1008e3970("","vdisk",0,
                      "Error: can\'t seek VMDK file \'%s\' to %llu while saving descriptor",
                      local_58 + *(long *)(local_58 + 0x10),
                      *(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x238));
        uVar5 = 0x80021024;
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_29 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005da601;
          }
          QArrayData::deallocate(local_58,1,8);
        }
        goto LAB_1005da601;
      }
      lVar3 = *param_1;
      if (*(long *)(*(long *)(lVar3 + 0x10) + 0x24) != 0) {
        uVar4 = 0;
        do {
          lVar3 = QIODevice::write((char *)local_48,0x100b47490);
          if (lVar3 != 0x200) {
            QString::toUtf8();
            FUN_1008e3970("","vdisk",0,
                          "Error: can\'t write zeroes to VMDK file \'%s\' while saving descriptor",
                          local_60 + *(long *)(local_60 + 0x10));
            uVar5 = 0x80021027;
            if (*(int *)local_60 == -1) goto LAB_1005da601;
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_29 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_1005da601;
            }
            QArrayData::deallocate(local_60,1,8);
            goto LAB_1005da601;
          }
          uVar4 = uVar4 + 1;
          lVar3 = *param_1;
        } while (uVar4 < *(ulong *)(*(long *)(lVar3 + 0x10) + 0x24));
      }
    }
    lVar1 = *(long *)(*(long *)(lVar3 + 0x10) + 0x200);
    uVar5 = 0;
    if (lVar1 != 0) {
      uVar5 = *(undefined8 *)(lVar1 + 0x10);
    }
    lVar3 = FUN_1006b1100(uVar5,local_48,*(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x238));
    uVar5 = 0;
    if (lVar3 == 0) {
      QString::toUtf8();
      FUN_1008e3970("","vdisk",0,"Error: can\'t dump descriptor to VMDK file \'%s\' ",
                    local_70 + *(long *)(local_70 + 0x10));
      uVar5 = 0x80021024;
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_29 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005da601;
        }
        QArrayData::deallocate(local_70,1,8);
      }
    }
  }
LAB_1005da601:
  QFile::~QFile((QFile *)local_48);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return uVar5;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return uVar5;
}

