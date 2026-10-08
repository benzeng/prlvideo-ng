
undefined8
FUN_100d7dcb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4,char param_5)

{
  char cVar1;
  undefined8 uVar2;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QString local_78;
  QDir local_70 [8];
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_100d92e50(&local_48);
  if (*(int *)(local_48 + 4) == 0) {
    uVar2 = 0x80000001;
    FUN_100df99c0("","InstallAppRepack",0,"Failed to find OS X install app repack script.");
    goto LAB_100d7e24a;
  }
  local_68 = (QArrayData *)QString::fromAscii_helper("/bin/bash \"%1\" repack \"%2\" \"%3\"",0x1f);
  QString::arg(&local_60,&local_68,&local_48,0,0x20);
  QString::arg(&local_58,&local_60,param_1,0,0x20);
  QString::arg(&local_50,&local_58,param_2,0,0x20);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d7dd78;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100d7dd78:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d7dda8;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100d7dda8:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d7ddd8;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100d7ddd8:
  if (param_4 != '\0') {
    QString::fromUtf8_helper((char *)&local_40,0x1efdbd3);
    QString::append(&local_50);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d7de2f;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_100d7de2f:
  cVar1 = FUN_100d80630(1);
  if (cVar1 != '\0') {
    local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QDir::QDir(local_70,&local_78);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d7de89;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
LAB_100d7de89:
    if (*(long *)PTR_self_1021e1388 != 0) {
      QCoreApplication::applicationDirPath();
      QDir::operator=(local_70,&local_80);
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d7dedc;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
    }
LAB_100d7dedc:
    local_90 = (QArrayData *)QString::fromAscii_helper(" -z \"%1\"",8);
    FUN_100d91500(&local_98,local_70);
    QString::arg(&local_88,&local_90,&local_98,0,0x20);
    QString::append(&local_50);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d7df60;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_100d7df60:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d7df96;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_100d7df96:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d7dfcc;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_100d7dfcc:
    QDir::~QDir(local_70);
  }
  if (param_5 == '\0') {
    QProcess::start(param_3,&local_50,3);
    cVar1 = QProcess::waitForStarted((int)param_3);
    if (cVar1 == '\0') {
      QString::toUtf8();
      FUN_100df99c0("","InstallAppRepack",0,"Failed to execute \'%s\'",
                    local_b0 + *(long *)(local_b0 + 0x10));
      uVar2 = 0x80000001;
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d7e21a;
        }
        QArrayData::deallocate(local_b0,1,8);
      }
    }
    else {
      uVar2 = 0;
      if (2 < DAT_10230ffd0) {
        QString::toUtf8();
        uVar2 = 0;
        FUN_100df99c0("","InstallAppRepack",3,"OS X install image is preparing \'%s\'",
                      local_b8 + *(long *)(local_b8 + 0x10));
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d7e21a;
          }
          QArrayData::deallocate(local_b8,1,8);
        }
      }
    }
  }
  else {
    local_a0 = (QArrayData *)PTR_shared_null_1021e1288;
    FUN_100dc0bd0(&local_50,&local_a0,0xffffffff,param_3,0);
    if (2 < DAT_10230ffd0) {
      QString::toUtf8();
      FUN_100df99c0("","InstallAppRepack",3,"OS X install image is ready \'%s\'",
                    local_a8 + *(long *)(local_a8 + 0x10));
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d7e084;
        }
        QArrayData::deallocate(local_a8,1,8);
      }
    }
LAB_100d7e084:
    uVar2 = 0;
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d7e21a;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
  }
LAB_100d7e21a:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d7e24a;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100d7e24a:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return uVar2;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return uVar2;
}

