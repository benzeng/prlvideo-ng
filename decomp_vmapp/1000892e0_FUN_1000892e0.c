
void FUN_1000892e0(undefined8 param_1,QFileInfo *param_2)

{
  uint uVar1;
  Data *pDVar2;
  char cVar3;
  int iVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  QArrayData *pQVar7;
  QArrayData *pQVar8;
  ulong uVar9;
  QFileInfo *this;
  Data *pDVar10;
  long lVar11;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QFileInfo local_98 [8];
  Data *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  Data *local_68;
  QString local_60;
  QArrayData *local_58;
  QString local_50;
  QFileInfo local_48 [8];
  QStringList local_40 [15];
  undefined1 local_31;
  
  iVar4 = FUN_100544580();
  if (iVar4 == 0) {
    return;
  }
  QFileInfo::dir();
  QDir::setFilter(local_40,0x302);
  QFileInfo::QFileInfo(local_48);
  QFileInfo::dir();
  local_58 = (QArrayData *)QString::fromAscii_helper("config.sav",10);
  QFileInfo::setFile((QDir *)local_48,&local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10008938b;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10008938b:
  QDir::~QDir((QDir *)&local_50);
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("mem",3);
  local_68 = (Data *)PTR_shared_null_100ba2188;
  pQVar5 = (QArrayData *)QString::fromAscii_helper("pvs*.tmp",8);
  local_70 = pQVar5;
  FUN_10000c490(&local_68,&local_70);
  pQVar6 = (QArrayData *)QString::fromAscii_helper(".vmm*",5);
  local_78 = pQVar6;
  FUN_10000c490(&local_68,&local_78);
  pQVar7 = (QArrayData *)QString::fromAscii_helper("*.mem*",6);
  local_80 = pQVar7;
  FUN_10000c490(&local_68,&local_80);
  pQVar8 = (QArrayData *)QString::fromAscii_helper("*.sav",5);
  local_88 = pQVar8;
  FUN_10000c490(&local_68,&local_88);
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_31 = *(int *)pQVar8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100089473;
    }
    QArrayData::deallocate(pQVar8,2,8);
  }
LAB_100089473:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000894a2;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1000894a2:
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000894d1;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_1000894d1:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000894fe;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1000894fe:
  QDir::setNameFilters(local_40);
  QDir::entryInfoList(&local_90,local_40,0xffffffff,0xffffffff);
  uVar1 = *(uint *)(local_90 + 8);
  uVar9 = (ulong)uVar1;
  if (*(uint *)(local_90 + 0xc) == uVar1) {
    QDir::absolutePath();
    QString::toLocal8Bit();
    FUN_1008e3970("","vm",0,"[GuestMem] No obsolete files in %s",
                  local_c8 + *(long *)(local_c8 + 0x10));
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000895ba;
      }
      QArrayData::deallocate(local_c8,1,8);
    }
LAB_1000895ba:
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100089836;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
  }
  else if ((int)uVar1 < (int)*(uint *)(local_90 + 0xc)) {
    lVar11 = 0;
    do {
      QFileInfo::QFileInfo(local_98,(QFileInfo *)(local_90 + ((int)uVar9 + lVar11) * 8 + 0x10));
      cVar3 = QFileInfo::operator==(local_98,param_2);
      if ((cVar3 == '\0') && (cVar3 = QFileInfo::operator==(local_98,local_48), cVar3 == '\0')) {
        QFileInfo::completeSuffix();
        cVar3 = operator==(&local_a0,&local_60);
        if (*(int *)local_a0.field0_0x0 != -1) {
          if (*(int *)local_a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
            local_31 = *(int *)local_a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000896b1;
          }
          QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
        }
LAB_1000896b1:
        if (cVar3 != '\0') {
          QFileInfo::absoluteFilePath();
          FUN_100546020(&local_a8);
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100089707;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
        }
LAB_100089707:
        QFileInfo::absoluteFilePath();
        QFile::remove(&local_b0);
        if (*(int *)local_b0.field0_0x0 != -1) {
          if (*(int *)local_b0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
            local_31 = *(int *)local_b0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100089758;
          }
          QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
        }
LAB_100089758:
        QFileInfo::baseName();
        QString::toLocal8Bit();
        FUN_1008e3970("","vm",0,"[GuestMem] obsolete file %s deleted",
                      local_b8 + *(long *)(local_b8 + 0x10));
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000897d9;
          }
          QArrayData::deallocate(local_b8,1,8);
        }
LAB_1000897d9:
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100089810;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
      }
LAB_100089810:
      QFileInfo::~QFileInfo(local_98);
      lVar11 = lVar11 + 1;
      uVar9 = (ulong)*(int *)(local_90 + 8);
    } while (lVar11 < (long)((long)*(int *)(local_90 + 0xc) - uVar9));
  }
LAB_100089836:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10008989a;
    }
    iVar4 = *(int *)(local_90 + 0xc);
    if (iVar4 != *(int *)(local_90 + 8)) {
      lVar11 = (long)*(int *)(local_90 + 8) * 8 + (long)iVar4 * -8;
      this = (QFileInfo *)(local_90 + (long)iVar4 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(this);
        this = this + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose(local_90);
  }
LAB_10008989a:
  pDVar2 = local_68;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100089921;
    }
    iVar4 = *(int *)(local_68 + 0xc);
    if (iVar4 != *(int *)(local_68 + 8)) {
      lVar11 = (long)*(int *)(local_68 + 8) * 8 + (long)iVar4 * -8;
      pDVar10 = local_68 + (long)iVar4 * 8 + 8;
      do {
        pQVar5 = *(QArrayData **)pDVar10;
        if (*(int *)pQVar5 == 0) {
LAB_100089900:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_31 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar5 = *(QArrayData **)pDVar10;
            goto LAB_100089900;
          }
        }
        pDVar10 = pDVar10 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_100089921:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100089951;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100089951:
  QFileInfo::~QFileInfo(local_48);
  QDir::~QDir((QDir *)local_40);
  return;
}

