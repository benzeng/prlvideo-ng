
undefined8 *
FUN_100114f00(undefined8 *param_1,QString *param_2,undefined8 *param_3,undefined8 *param_4,
             char param_5)

{
  int iVar1;
  bool bVar2;
  Data *pDVar3;
  char cVar4;
  int iVar5;
  QArrayData *pQVar6;
  Data *pDVar7;
  long lVar8;
  QString local_e8;
  QString local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QString local_c0;
  QString local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QString local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QDir local_78 [8];
  QFileInfo local_70 [8];
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QDir local_48 [8];
  Data *local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_3;
  if (1 < *(int *)local_58.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
    local_31 = *(int *)local_58.field0_0x0 != 0;
    UNLOCK();
  }
  local_60 = (QArrayData *)*param_4;
  if (1 < *(int *)local_60 + 1U) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + 1;
    local_31 = *(int *)local_60 != 0;
    UNLOCK();
  }
  if (*(int *)(local_60 + 4) != 0) {
    local_68 = (QArrayData *)QString::fromAscii_helper(".",1);
    cVar4 = QString::startsWith(&local_60,&local_68,1);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100114fd4;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100114fd4:
    if (cVar4 == '\0') {
      QString::fromUtf8_helper((char *)&local_50,0x1e41970);
      QString::insert((int)&local_60,(QChar *)0x0,
                      (int)*(undefined8 *)(local_50 + 0x10) + (int)local_50);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100115036;
        }
        QArrayData::deallocate(local_50,2,8);
      }
    }
  }
LAB_100115036:
  QDir::QDir(local_78,param_2);
  local_80.field0_0x0 = local_58.field0_0x0;
  if (1 < *(int *)local_58.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
    local_31 = *(int *)local_58.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_80);
  QFileInfo::QFileInfo(local_70,local_78,&local_80);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001150ad;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1001150ad:
  QDir::~QDir(local_78);
  QFileInfo::filePath();
  QString::toUtf8();
  if ((1 < *(uint *)local_88) || (*(long *)(local_88 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_88,*(uint *)(local_88 + 4) + 1,*(uint *)(local_88 + 8) >> 0x1f);
  }
  FUN_100df99c0("","prl_client_app",0,"Try to get unique file name for %s",
                local_88 + *(long *)(local_88 + 0x10));
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100115153;
    }
    QArrayData::deallocate(local_88,1,8);
  }
LAB_100115153:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100115189;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100115189:
  iVar5 = 0;
  do {
    if (iVar5 == 0) {
      local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_3;
      if (1 < *(int *)local_98.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + 1;
        local_31 = *(int *)local_98.field0_0x0 != 0;
        UNLOCK();
      }
      bVar2 = false;
    }
    else {
      local_a8 = (QArrayData *)QString::fromAscii_helper("%1 (%2)",7);
      QString::arg(&local_a0,&local_a8,param_3,0,0x20);
      QString::number((uint)&local_b0,iVar5);
      bVar2 = true;
      QString::arg(&local_98,&local_a0,&local_b0,0,0x20);
    }
    QString::operator=(&local_58,&local_98);
    if (*(int *)local_98.field0_0x0 != -1) {
      if (*(int *)local_98.field0_0x0 != 0) {
        LOCK();
        *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
        local_31 = *(int *)local_98.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011528d;
      }
      QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
    }
LAB_10011528d:
    if (bVar2) {
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001152cc;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_1001152cc:
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100115302;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_100115302:
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100115340;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
    }
LAB_100115340:
    QDir::QDir((QDir *)&local_b8,param_2);
    local_c0.field0_0x0 = local_58.field0_0x0;
    if (1 < *(int *)local_58.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_c0);
    QFileInfo::setFile((QDir *)local_70,&local_b8);
    if (*(int *)local_c0.field0_0x0 != -1) {
      if (*(int *)local_c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
        local_31 = *(int *)local_c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001153cb;
      }
      QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
    }
LAB_1001153cb:
    QDir::~QDir((QDir *)&local_b8);
    if (param_5 == '\0') {
      QFileInfo::fileName();
    }
    else {
      QFileInfo::filePath();
    }
    FUN_1000341d0(param_1,&local_c8);
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100115455;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_100115455:
    QFileInfo::filePath();
    QString::toUtf8();
    if ((1 < *(uint *)local_d0) || (*(long *)(local_d0 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_d0,*(uint *)(local_d0 + 4) + 1,*(uint *)(local_d0 + 8) >> 0x1f)
      ;
    }
    FUN_100df99c0("","prl_client_app",0,"check file for existing %s",
                  local_d0 + *(long *)(local_d0 + 0x10));
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100115504;
      }
      QArrayData::deallocate(local_d0,1,8);
    }
LAB_100115504:
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_31 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011553a;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_10011553a:
    local_e0.field0_0x0 = local_58.field0_0x0;
    if (1 < *(int *)local_58.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_e0);
    QFileInfo::path();
    QDir::QDir(local_48,&local_e8);
    QDir::entryList(&local_40,local_48,0x6207);
    QDir::~QDir(local_48);
    cVar4 = QtPrivate::QStringList_contains(&local_40,&local_e0,1);
    pDVar3 = local_40;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100115668;
      }
      iVar1 = *(int *)(local_40 + 0xc);
      if (iVar1 != *(int *)(local_40 + 8)) {
        lVar8 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
        pDVar7 = local_40 + (long)iVar1 * 8 + 8;
        do {
          pQVar6 = *(QArrayData **)pDVar7;
          if (*(int *)pQVar6 == 0) {
LAB_100115640:
            QArrayData::deallocate(pQVar6,2,8);
          }
          else if (*(int *)pQVar6 != -1) {
            LOCK();
            *(int *)pQVar6 = *(int *)pQVar6 + -1;
            local_31 = *(int *)pQVar6 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar6 = *(QArrayData **)pDVar7;
              goto LAB_100115640;
            }
          }
          pDVar7 = pDVar7 + -8;
          lVar8 = lVar8 + 8;
        } while (lVar8 != 0);
      }
      QListData::dispose(pDVar3);
    }
LAB_100115668:
    if (*(int *)local_e8.field0_0x0 != -1) {
      if (*(int *)local_e8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
        local_31 = *(int *)local_e8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011569e;
      }
      QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
    }
LAB_10011569e:
    if (*(int *)local_e0.field0_0x0 != -1) {
      if (*(int *)local_e0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
        local_31 = *(int *)local_e0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001156d4;
      }
      QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
    }
LAB_1001156d4:
    iVar5 = iVar5 + 1;
  } while (cVar4 != '\0');
  QFileInfo::~QFileInfo(local_70);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100115728;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100115728:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_58.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
  return param_1;
}

