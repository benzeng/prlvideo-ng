
QString * FUN_10011c040(QString *param_1,QString *param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  size_t sVar5;
  QArrayData *pQVar6;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QString local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  long local_98 [2];
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  QArrayData *local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  puVar2 = PTR_shared_null_1021e1288;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QString::fromUtf8_helper((char *)&local_40,0x1dc07e2);
  QString::operator=(param_2,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10011c0b6;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10011c0b6:
  QCoreApplication::applicationDirPath();
  QDir::toNativeSeparators(&local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10011c0fc;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10011c0fc:
  FUN_100d91a90(&local_58,&local_48,param_3,0xffff);
  QString::operator=(param_1,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10011c14d;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_10011c14d:
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
  local_70 = (QArrayData *)QString::fromAscii_helper("prl_updater_%1",0xe);
  QString::arg(&local_68,&local_70,param_3,0,0x20);
  QString::operator=(&local_60,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10011c1bb;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_10011c1bb:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10011c1eb;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10011c1eb:
  local_78.field0_0x0 = local_48.field0_0x0;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_29 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  local_80 = (QArrayData *)QString::fromAscii_helper("MacOS",5);
  local_88 = (QArrayData *)QString::fromAscii_helper("Info.plist",10);
  QString::replace(&local_78,&local_80,&local_88,1);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10011c274;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10011c274:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10011c2a4;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10011c2a4:
  QFile::QFile((QFile *)local_98,&local_78);
  cVar3 = QFile::open(local_98,1);
  if (cVar3 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,"File %s can not be opened.",
                  local_d0 + *(long *)(local_d0 + 0x10));
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_29 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10011c5e0;
      }
      QArrayData::deallocate(local_d0,1,8);
    }
  }
  else {
    QIODevice::readAll();
    pQVar6 = local_a8 + *(long *)(local_a8 + 0x10);
    iVar4 = -1;
    if (pQVar6 != (QArrayData *)0x0) {
      sVar5 = _strlen((char *)pQVar6);
      iVar4 = (int)sVar5;
    }
    local_a0 = (QArrayData *)QString::fromAscii_helper((char *)pQVar6,iVar4);
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_29 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10011c342;
      }
      QArrayData::deallocate(local_a8,1,8);
    }
LAB_10011c342:
    local_b0 = (QArrayData *)QString::fromAscii_helper("management-console-standalone",0x1d);
    iVar4 = QString::indexOf(&local_a0,&local_b0,0,1);
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_29 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10011c3ac;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_10011c3ac:
    if (iVar4 != -1) {
      QString::fromUtf8_helper((char *)&local_38,0x1dc0828);
      QString::operator=(param_2,&local_38);
      if (*(int *)local_38.field0_0x0 != -1) {
        if (*(int *)local_38.field0_0x0 != 0) {
          LOCK();
          *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
          local_29 = *(int *)local_38.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10011c406;
        }
        QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
      }
LAB_10011c406:
      local_c8 = (QArrayData *)
                 QString::fromAscii_helper("/Parallels Updater.app/Contents/MacOS/%1",0x28);
      QString::arg(&local_c0,&local_c8,&local_60,0,0x20);
      local_b8.field0_0x0 = local_48.field0_0x0;
      if (1 < *(int *)local_48.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
        local_29 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
      }
      QString::append(&local_b8);
      QString::operator=(param_1,&local_b8);
      if (*(int *)local_b8.field0_0x0 != -1) {
        if (*(int *)local_b8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
          local_29 = *(int *)local_b8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10011c4b1;
        }
        QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
      }
LAB_10011c4b1:
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_29 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10011c4e7;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_10011c4e7:
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_29 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10011c51d;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
    }
LAB_10011c51d:
    (**(code **)(local_98[0] + 0x70))(local_98);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_29 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10011c5e0;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
  }
LAB_10011c5e0:
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    lVar1 = *(long *)(local_d8 + 0x10);
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",2,"Updater file = [%s]. Update mode = [%s]",local_d8 + lVar1,
                  local_e0 + *(long *)(local_e0 + 0x10));
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_29 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10011c681;
      }
      QArrayData::deallocate(local_e0,1,8);
    }
LAB_10011c681:
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_29 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10011c6b7;
      }
      QArrayData::deallocate(local_d8,1,8);
    }
  }
LAB_10011c6b7:
  QFile::~QFile((QFile *)local_98);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_29 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10011c6f3;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_10011c6f3:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_29 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10011c723;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10011c723:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return param_1;
}

