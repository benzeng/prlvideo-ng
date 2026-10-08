
undefined8 FUN_100da58e0(long param_1,QString *param_2,undefined8 *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  QFileInfo *pQVar6;
  long lVar7;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QFileInfo local_c0 [8];
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  Data *local_a0;
  QFileInfo *local_98;
  QDir local_90 [8];
  Data *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QDir local_70 [8];
  QFileInfo local_68 [8];
  QArrayData *local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_3;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_31 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  if (*(char *)(param_1 + 0x39) == '\0') {
    if (1 < *(int *)local_48.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
    }
    local_58.field0_0x0 = local_48.field0_0x0;
    QString::fromUtf8_helper((char *)&local_40,0x1e2468c);
    QString::append(&local_58);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100da598e;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100da598e:
    QFileInfo::QFileInfo(local_68,param_2);
    QFileInfo::fileName();
    local_50.field0_0x0 = local_58.field0_0x0;
    if (1 < *(int *)local_58.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_50);
    QString::operator=(&local_48,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100da5a0a;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_100da5a0a:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100da5a3a;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100da5a3a:
    QFileInfo::~QFileInfo(local_68);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100da5a73;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x39) = 0;
  }
LAB_100da5a73:
  QDir::QDir(local_70,&local_48);
  cVar1 = QDir::exists();
  if (cVar1 == '\0') {
    local_78 = (QArrayData *)local_48.field0_0x0;
    if (1 < *(int *)local_48.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
    }
    bVar2 = FUN_100d99f40(&local_78,*(undefined8 *)(param_1 + 0x10));
    bVar2 = bVar2 ^ 1;
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100da5aec;
      }
      QArrayData::deallocate(local_78,2,8);
    }
  }
  else {
    bVar2 = 0;
  }
LAB_100da5aec:
  QDir::~QDir(local_70);
  if (bVar2 != 0) {
    QString::toUtf8();
    FUN_100df99c0("","cmn_utils",0,"CopyDirectory: Can\'t create directory %s",
                  local_80 + *(long *)(local_80 + 0x10));
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100da5b60;
      }
      QArrayData::deallocate(local_80,1,8);
    }
LAB_100da5b60:
    puVar4 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar4 = 0x80000232;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar4,PTR_typeinfo_1021e1790,0);
  }
  QDir::QDir(local_90,param_2);
  QDir::entryInfoList(&local_88,local_90,0x600b,4);
  QDir::~QDir(local_90);
  FUN_100055060(&local_a0,&local_88);
  local_98 = (QFileInfo *)(local_a0 + (long)*(int *)(local_a0 + 8) * 8 + 0x10);
  iVar3 = *(int *)(local_a0 + 0xc);
  if (*(int *)(local_a0 + 8) != iVar3) {
    pQVar6 = local_98;
    do {
      local_98 = pQVar6 + 8;
      QFileInfo::filePath();
      cVar1 = FUN_100d98380(&local_a8,*(undefined8 *)(param_1 + 0x10));
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100da5c6d;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_100da5c6d:
      if (cVar1 == '\0') {
        QFileInfo::absoluteFilePath();
        QString::toUtf8();
        FUN_100df99c0("","cmn_utils",0,"CopyDirectory: Can\'t open %s",
                      local_b0 + *(long *)(local_b0 + 0x10));
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100da6107;
          }
          QArrayData::deallocate(local_b0,1,8);
        }
LAB_100da6107:
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100da613d;
          }
          QArrayData::deallocate(local_b8,2,8);
        }
LAB_100da613d:
        puVar4 = (undefined4 *)___cxa_allocate_exception(4);
        *puVar4 = 0x80000005;
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(puVar4,PTR_typeinfo_1021e1790,0);
      }
      cVar1 = QFileInfo::isDir();
      if (cVar1 == '\0') {
        local_e0 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
        QString::arg(&local_d8,&local_e0,&local_48,0,0x20);
        QFileInfo::fileName();
        QString::arg(&local_d0,&local_d8,&local_e8,0,0x20);
        if (*(int *)local_e8 != -1) {
          if (*(int *)local_e8 != 0) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + -1;
            local_31 = *(int *)local_e8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100da5ddf;
          }
          QArrayData::deallocate(local_e8,2,8);
        }
LAB_100da5ddf:
        if (*(int *)local_d8 != -1) {
          if (*(int *)local_d8 != 0) {
            LOCK();
            *(int *)local_d8 = *(int *)local_d8 + -1;
            local_31 = *(int *)local_d8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100da5e15;
          }
          QArrayData::deallocate(local_d8,2,8);
        }
LAB_100da5e15:
        if (*(int *)local_e0 != -1) {
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            local_31 = *(int *)local_e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100da5e4b;
          }
          QArrayData::deallocate(local_e0,2,8);
        }
LAB_100da5e4b:
        QFileInfo::filePath();
        iVar3 = FUN_100da6ef0(param_1,&local_f0,&local_d0);
        if (*(int *)local_f0 != -1) {
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            local_31 = *(int *)local_f0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100da5eaf;
          }
          QArrayData::deallocate(local_f0,2,8);
        }
LAB_100da5eaf:
        if (-1 < iVar3) {
          lVar7 = QFileInfo::size();
          *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + lVar7;
        }
        if (*(int *)local_d0 != -1) {
          if (*(int *)local_d0 != 0) {
            LOCK();
            *(int *)local_d0 = *(int *)local_d0 + -1;
            local_31 = *(int *)local_d0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100da5f00;
          }
          QArrayData::deallocate(local_d0,2,8);
        }
      }
      else {
        QFileInfo::QFileInfo(local_c0,param_2);
        cVar1 = QFileInfo::operator==(local_c0,pQVar6);
        QFileInfo::~QFileInfo(local_c0);
        iVar3 = -0x7fffffff;
        if (cVar1 != '\0') goto LAB_100da6014;
        QFileInfo::filePath();
        iVar3 = FUN_100da58e0(param_1,&local_c8,&local_48);
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            local_31 = *(int *)local_c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100da5f00;
          }
          QArrayData::deallocate(local_c8,2,8);
        }
      }
LAB_100da5f00:
      if (iVar3 < 0) {
LAB_100da6014:
        piVar5 = (int *)___cxa_allocate_exception(4);
        *piVar5 = iVar3;
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(piVar5,PTR_typeinfo_1021e1790,0);
      }
      iVar3 = *(int *)(local_a0 + 0xc);
      pQVar6 = local_98;
    } while (local_98 != (QFileInfo *)(local_a0 + (long)iVar3 * 8 + 0x10));
  }
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100da5f9a;
      iVar3 = *(int *)(local_a0 + 0xc);
    }
    if (iVar3 != *(int *)(local_a0 + 8)) {
      lVar7 = (long)*(int *)(local_a0 + 8) * 8 + (long)iVar3 * -8;
      pQVar6 = (QFileInfo *)(local_a0 + (long)iVar3 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(local_a0);
  }
LAB_100da5f9a:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100da62a8;
    }
    iVar3 = *(int *)(local_88 + 0xc);
    if (iVar3 != *(int *)(local_88 + 8)) {
      lVar7 = (long)*(int *)(local_88 + 8) * 8 + (long)iVar3 * -8;
      pQVar6 = (QFileInfo *)(local_88 + (long)iVar3 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(pQVar6);
        pQVar6 = pQVar6 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(local_88);
  }
LAB_100da62a8:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return 0;
}

