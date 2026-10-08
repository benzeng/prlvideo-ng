
QString * FUN_100a02d10(QString *param_1)

{
  int iVar1;
  int *piVar2;
  QArrayData *pQVar3;
  long lVar4;
  uint uVar5;
  int *piVar6;
  bool bVar7;
  QString local_100;
  Data_conflict local_f8;
  undefined4 local_f0;
  QVariant local_e8;
  QString local_d8;
  QArrayData *local_d0;
  int *local_c8;
  int *local_c0;
  int *local_b8;
  uint local_b0;
  QString local_a8;
  int *local_a0;
  QArrayData *local_98;
  QString local_90;
  QString local_88;
  QVariant local_80;
  QArrayData *local_70;
  QString local_68;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar3 = (QArrayData *)QString::fromAscii_helper("Parallels Desktop",0x11);
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_31 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar3;
  QString::fromUtf8_helper((char *)&local_58,0x1dd8616);
  QString::append(&local_60);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a02da6;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100a02da6:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a02dd1;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100a02dd1:
  local_68.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Parallels Software",0x12);
  FUN_100d8e830(&local_70);
  QSettings::QSettings((QSettings *)&local_80,&local_68,&local_60,(QObject *)0x0);
  local_98 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_70;
  if (1 < *(int *)local_70 + 1U) {
    LOCK();
    *(int *)local_70 = *(int *)local_70 + 1;
    local_31 = *(int *)local_70 != 0;
    UNLOCK();
  }
  QString::append(&local_90);
  local_88.field0_0x0 = local_90.field0_0x0;
  if (1 < *(int *)local_90.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + 1;
    local_31 = *(int *)local_90.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_50,0x1e3aa88);
  QString::append(&local_88);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a02eb7;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100a02eb7:
  QSettings::beginGroup((QString *)&local_80);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a02ef4;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_100a02ef4:
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a02f2a;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_100a02f2a:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a02f60;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100a02f60:
  QSettings::allKeys();
  local_a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_c8 = local_a0;
  if (*local_a0 != -1) {
    if (*local_a0 == 0) {
      QListData::detach((int)&local_c8);
      iVar1 = local_c8[2];
      if (iVar1 != local_c8[3]) {
        local_a0 = local_a0 + (long)local_a0[2] * 2 + 4;
        piVar6 = local_c8 + (long)iVar1 * 2 + 4;
        lVar4 = (long)local_c8[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)local_a0;
          *(int **)piVar6 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar6 = piVar6 + 2;
          local_a0 = local_a0 + 2;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *local_a0 = *local_a0 + 1;
      local_31 = *local_a0 != 0;
      UNLOCK();
    }
  }
  local_c0 = local_c8 + (long)local_c8[2] * 2 + 4;
  local_b8 = local_c8 + (long)local_c8[3] * 2 + 4;
  local_b0 = 1;
  if (local_c8[2] != local_c8[3]) {
    do {
      local_d0 = *(QArrayData **)local_c0;
      if (1 < *(int *)local_d0 + 1U) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + 1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
      }
      if (local_b0 != 0) {
        local_f0 = 0x80000000;
        local_f8.field7 = 0;
        QSettings::value((QString *)&local_e8,&local_80);
        QVariant::toString();
        QString::operator=(&local_a8,&local_d8);
        if (*(int *)local_d8.field0_0x0 != -1) {
          if (*(int *)local_d8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
            local_31 = *(int *)local_d8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a0311c;
          }
          QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
        }
LAB_100a0311c:
        QVariant::~QVariant(&local_e8);
        QVariant::~QVariant((QVariant *)&local_f8);
        if ((*(int *)(local_d0 + 4) != 0) && (*(int *)(local_a8.field0_0x0 + 4) != 0)) {
          local_100.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_d0;
          if (1 < *(int *)local_d0 + 1U) {
            LOCK();
            *(int *)local_d0 = *(int *)local_d0 + 1;
            local_31 = *(int *)local_d0 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_48,0x1e31af0);
          QString::append(&local_100);
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_31 = *(int *)local_48 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100a031bb;
            }
            QArrayData::deallocate(local_48,2,8);
          }
LAB_100a031bb:
          QString::append(param_1);
          if (*(int *)local_100.field0_0x0 != -1) {
            if (*(int *)local_100.field0_0x0 != 0) {
              LOCK();
              *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
              local_31 = *(int *)local_100.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100a03204;
            }
            QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
          }
LAB_100a03204:
          QString::append(param_1);
          QString::fromUtf8_helper((char *)&local_40,0x1eeaa60);
          QString::append(param_1);
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              local_31 = *(int *)local_40 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100a03270;
            }
            QArrayData::deallocate(local_40,2,8);
          }
        }
LAB_100a03270:
        local_b0 = 0;
      }
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a032b0;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_100a032b0:
      local_c0 = local_c0 + 2;
      uVar5 = local_b0 ^ 1;
      bVar7 = local_b0 != 1;
      local_b0 = uVar5;
    } while ((bVar7) && (local_c0 != local_b8));
  }
  FUN_100039a80(&local_c8);
  QSettings::endGroup();
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_31 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a03330;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_100a03330:
  FUN_100039a80(&local_a0);
  QSettings::~QSettings((QSettings *)&local_80);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a03375;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100a03375:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a033a5;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_100a033a5:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_60.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
  return param_1;
}

