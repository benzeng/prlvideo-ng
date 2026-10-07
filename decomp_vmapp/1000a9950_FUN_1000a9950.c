
undefined8 FUN_1000a9950(long param_1,undefined4 param_2)

{
  Data *pDVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  Data *local_60;
  QProcess local_58 [16];
  QFileInfo local_48 [8];
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  FUN_1000b1fb0(&local_40,param_1);
  FUN_1006eb250(&local_38,&local_40,param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000a99b4;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000a99b4:
  QFileInfo::QFileInfo(local_48,&local_38);
  cVar2 = QFileInfo::exists();
  uVar5 = 0;
  if (cVar2 == '\0') goto LAB_1000a9eca;
  QProcess::QProcess(local_58,(QObject *)0x0);
  local_60 = (Data *)PTR_shared_null_100ba2188;
  local_78 = (QArrayData *)QString::fromAscii_helper("%1=%2",5);
  local_80 = (QArrayData *)QString::fromAscii_helper("UUID",4);
  QString::arg(&local_70,&local_78,&local_80,0,0x20);
  uVar5 = FUN_100430e80(*(undefined8 *)(param_1 + 0xf0));
  QString::arg(&local_68,&local_70,uVar5,0,0x20);
  FUN_10000c490(&local_60,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000a9a8f;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1000a9a8f:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000a9abf;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1000a9abf:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000a9aef;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1000a9aef:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000a9b1f;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1000a9b1f:
  local_98 = (QArrayData *)QString::fromAscii_helper("%1=%2",5);
  local_a0 = (QArrayData *)QString::fromAscii_helper("VM_HOME",7);
  QString::arg(&local_90,&local_98,&local_a0,0,0x20);
  FUN_1000b1fb0(&local_a8,param_1);
  QString::arg(&local_88,&local_90,&local_a8,0,0x20);
  FUN_10000c490(&local_60,&local_88);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000a9bdc;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1000a9bdc:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000a9c12;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1000a9c12:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000a9c48;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1000a9c48:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000a9c7e;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1000a9c7e:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000a9cb4;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1000a9cb4:
  QProcess::setEnvironment((QStringList *)local_58);
  QProcess::start(local_58,&local_38,3);
  cVar2 = QProcess::waitForStarted((int)local_58);
  if (cVar2 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","vm",0,"Vm Action script %s cannot be started!",
                  local_b0 + *(long *)(local_b0 + 0x10));
    uVar5 = 0x80000015;
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_29 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000a9e33;
      }
      QArrayData::deallocate(local_b0,1,8);
    }
  }
  else {
    if (0 < DAT_1011b55f8) {
      QString::toUtf8();
      FUN_1008e3970("","vm",1,"Run Vm action script %s",local_b8 + *(long *)(local_b8 + 0x10));
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_29 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1000a9d67;
        }
        QArrayData::deallocate(local_b8,1,8);
      }
    }
LAB_1000a9d67:
    QProcess::waitForFinished((int)local_58);
    iVar3 = QProcess::exitCode();
    uVar4 = QProcess::exitStatus();
    FUN_1008e3970("","vm",0,"Cmd result: 0x%x (exit status %d)",iVar3,uVar4);
    uVar5 = 0x80000009;
    if (iVar3 == 0) {
      uVar5 = 0;
    }
  }
LAB_1000a9e33:
  pDVar1 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000a9ec1;
    }
    iVar3 = *(int *)(local_60 + 0xc);
    if (iVar3 != *(int *)(local_60 + 8)) {
      lVar8 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar3 * -8;
      pDVar6 = local_60 + (long)iVar3 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1000a9ea0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_29 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1000a9ea0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(pDVar1);
  }
LAB_1000a9ec1:
  QProcess::~QProcess(local_58);
LAB_1000a9eca:
  QFileInfo::~QFileInfo(local_48);
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

