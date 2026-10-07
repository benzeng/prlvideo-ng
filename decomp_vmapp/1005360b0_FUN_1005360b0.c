
bool FUN_1005360b0(long param_1,QString *param_2,QString *param_3)

{
  int iVar1;
  QTypedArrayData<unsigned_short> *pQVar2;
  undefined *puVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  bool bVar7;
  QArrayData *local_c8;
  QString local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QString local_98;
  QDir local_90 [8];
  QString local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QDir local_60 [8];
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar3 = PTR_shared_null_100ba20d0;
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  uVar5 = QDir::separator();
  QFileInfo::QFileInfo((QFileInfo *)&local_48,param_2);
  local_50 = (QArrayData *)puVar3;
  do {
    QFileInfo::filePath();
    QDir::QDir(local_60,&local_68);
    QDir::canonicalPath();
    iVar1 = *(int *)(local_58 + 4);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100536176;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100536176:
    QDir::~QDir(local_60);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005361ae;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_1005361ae:
    if (iVar1 != 0) break;
    QFileInfo::fileName();
    uVar6 = QString::insert((int)&local_50,(QChar *)0x0,
                            (int)*(undefined8 *)(local_70 + 0x10) + (int)local_70);
    QString::insert(uVar6,0,uVar5);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10053621c;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_10053621c:
    QFileInfo::path();
    QFileInfo::setFile(&local_48);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100536264;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100536264:
    QFileInfo::filePath();
    iVar1 = *(int *)(local_80 + 4);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005362a3;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_1005362a3:
  } while (iVar1 != 0);
  QFileInfo::filePath();
  QDir::QDir(local_90,&local_98);
  QDir::canonicalPath();
  QString::operator=(param_3,&local_88);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100536328;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_100536328:
  QDir::~QDir(local_90);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_31 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053636a;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_10053636a:
  pQVar2 = param_3->field0_0x0;
  if (*(int *)(pQVar2 + 4) == 0) {
    bVar7 = true;
    if (0 < DAT_1011b55f8) {
      QString::toUtf8();
      bVar7 = true;
      FUN_1008e3970("","InvSharingHost",1,"couldn\'t get canonical path for \"%s\"",
                    local_a0 + *(long *)(local_a0 + 0x10));
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100536508;
        }
        QArrayData::deallocate(local_a0,1,8);
      }
    }
  }
  else {
    if (1 < *(int *)pQVar2 + 1U) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
    }
    local_a8 = (QArrayData *)pQVar2;
    cVar4 = FUN_100540980(&local_a8,&local_40);
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005363d3;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_1005363d3:
    if (cVar4 == '\0') {
      bVar7 = true;
      if (1 < DAT_1011b55f8) {
        QString::toUtf8();
        FUN_1008e3970("","InvSharingHost",2,"couldn\'t get mountpoint for \"%s\"",
                      local_b0 + *(long *)(local_b0 + 0x10));
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100536508;
          }
          QArrayData::deallocate(local_b0,1,8);
        }
      }
    }
    else {
      bVar7 = false;
      QString::append(param_3);
    }
  }
LAB_100536508:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100536538;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100536538:
  QFileInfo::~QFileInfo((QFileInfo *)&local_48);
  if (bVar7) {
    bVar7 = false;
    goto LAB_1005366ed;
  }
  cVar4 = QString::startsWith(&local_40,param_1 + 8,1);
  if (cVar4 == '\0') {
    if (DAT_1011b55f8 < 2) {
      bVar7 = false;
    }
    else {
      QString::toUtf8();
      FUN_1008e3970("","InvSharingHost",2,"the file \"%s\" is not a guest shared file",
                    local_b8 + *(long *)(local_b8 + 0x10));
      if (*(int *)local_b8 == -1) {
        bVar7 = false;
      }
      else {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) {
            bVar7 = false;
            goto LAB_1005366ed;
          }
        }
        QArrayData::deallocate(local_b8,1,8);
        bVar7 = false;
      }
    }
    goto LAB_1005366ed;
  }
  FUN_10053ede0(&local_c0,param_1 + 0x30,param_3);
  QString::operator=(param_3,&local_c0);
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_31 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005365cc;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_1005365cc:
  if ((*(int *)(param_3->field0_0x0 + 4) == 0) && (0 < DAT_1011b55f8)) {
    QString::toUtf8();
    FUN_1008e3970("","InvSharingHost",1,"couldn\'t get guest path for the \"%s\"",
                  local_c8 + *(long *)(local_c8 + 0x10));
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100536653;
      }
      QArrayData::deallocate(local_c8,1,8);
    }
  }
LAB_100536653:
  bVar7 = *(int *)(param_3->field0_0x0 + 4) != 0;
LAB_1005366ed:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return bVar7;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return bVar7;
}

