
void FUN_100469990(long param_1)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  bool bVar10;
  undefined8 local_1c0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QString local_198;
  QArrayData *local_190;
  QString local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QString local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QString local_140;
  QString local_138;
  QString local_130;
  QString local_128;
  QString local_120;
  QString local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QString local_100;
  QVariant local_f8;
  QArrayData *local_e8;
  QString local_e0;
  QVariant local_d8;
  QArrayData *local_c8;
  QString local_c0;
  QVariant local_b8;
  QString local_a8;
  QString local_a0;
  Data *local_98;
  Data *local_90;
  Data *local_88;
  uint local_80;
  QArrayData *local_78;
  QString local_70;
  QVariant local_68;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar5 = FUN_10044e560();
  FUN_100459010(&local_78,param_1);
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_78;
  if (1 < *(int *)local_78 + 1U) {
    LOCK();
    *(int *)local_78 = *(int *)local_78 + 1;
    local_31 = *(int *)local_78 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_58,0x1df1f84);
  QString::append(&local_70);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100469a26;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100469a26:
  FUN_1003e1800(&local_68,uVar5,&local_70,0);
  iVar4 = QVariant::toUInt((bool *)&local_68);
  QVariant::~QVariant(&local_68);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100469a7f;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100469a7f:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100469aaf;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100469aaf:
  if ((iVar4 == 0) || (iVar4 == 3)) {
    lVar6 = FUN_100458c00(param_1);
    lVar7 = 0;
    if (lVar6 != 0) {
      lVar7 = ___dynamic_cast(lVar6,PTR_typeinfo_1021e1740,PTR_typeinfo_1021e1648,0);
    }
    lVar8 = FUN_10046b630(param_1);
    if (lVar7 == 0) {
      return;
    }
    if (lVar8 == 0) {
      return;
    }
    cVar2 = FUN_100111ae0(lVar8);
    bVar10 = false;
    local_1c0 = 0;
    cVar3 = '\0';
    lVar6 = 0;
    if (cVar2 == '\0') {
      bVar10 = false;
      local_1c0 = 0;
      cVar3 = '\0';
      lVar6 = 0;
      if (*(int *)(*(long *)(lVar7 + 0xf0) + 0xc) != *(int *)(*(long *)(lVar7 + 0xf0) + 8)) {
        local_98 = *(Data **)(lVar8 + 0x98);
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 == 0) {
            QListData::detach((int)&local_98);
            lVar7 = (long)*(int *)(local_98 + 8);
            lVar6 = *(long *)(lVar8 + 0x98);
            if (((Data *)(lVar6 + (long)*(int *)(lVar6 + 8) * 8) != local_98 + lVar7 * 8) &&
               (lVar8 = *(int *)(local_98 + 0xc) - lVar7,
               lVar8 != 0 && lVar7 <= *(int *)(local_98 + 0xc))) {
              _memcpy(local_98 + lVar7 * 8 + 0x10,
                      (void *)(lVar6 + 0x10 + (long)*(int *)(lVar6 + 8) * 8),lVar8 * 8);
            }
          }
          else {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + 1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
          }
        }
        local_90 = local_98 + (long)*(int *)(local_98 + 8) * 8 + 0x10;
        local_88 = local_98 + (long)*(int *)(local_98 + 0xc) * 8 + 0x10;
        local_80 = 1;
        local_1c0 = 0;
        lVar6 = 0;
        if (*(int *)(local_98 + 8) != *(int *)(local_98 + 0xc)) {
          lVar6 = 0;
          do {
            if (local_80 == 0) {
LAB_10046a107:
              local_90 = local_90 + 8;
              local_80 = 1;
            }
            else {
              CVmHddPartition::getSystemName();
              CHwHddPartition::getSystemName();
              cVar3 = operator==(&local_a0,&local_a8);
              if (*(int *)local_a8.field0_0x0 != -1) {
                if (*(int *)local_a8.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
                  local_31 = *(int *)local_a8.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10046a07b;
                }
                QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
              }
LAB_10046a07b:
              if (*(int *)local_a0.field0_0x0 != -1) {
                if (*(int *)local_a0.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
                  local_31 = *(int *)local_a0.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10046a0b1;
                }
                QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
              }
LAB_10046a0b1:
              if (cVar3 == '\0') goto LAB_10046a107;
              lVar6 = CHwHddPartition::getSize();
              lVar6 = (long)(((ulong)(lVar6 >> 0x3f) >> 0x2c) + lVar6) >> 0x14;
              local_90 = local_90 + 8;
              uVar9 = local_80 ^ 1;
              bVar10 = local_80 == 1;
              local_80 = uVar9;
              if (bVar10) break;
            }
          } while (local_90 != local_88);
        }
        bVar10 = true;
        if (*(int *)local_98 == -1) {
          cVar3 = '\0';
        }
        else {
          if (*(int *)local_98 == 0) {
LAB_10046a15e:
            QListData::dispose(local_98);
          }
          else {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if (!(bool)local_31) goto LAB_10046a15e;
          }
          local_1c0 = 0;
          cVar3 = '\0';
        }
      }
    }
  }
  else {
    uVar5 = FUN_10044e560(param_1);
    FUN_100459010(&local_c8,param_1);
    local_c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_c8;
    if (1 < *(int *)local_c8 + 1U) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + 1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_50,0x1df60df);
    QString::append(&local_c0);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100469c78;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100469c78:
    FUN_1003e1800(&local_b8,uVar5,&local_c0,0);
    lVar6 = QVariant::toLongLong((bool *)&local_b8);
    QVariant::~QVariant(&local_b8);
    if (*(int *)local_c0.field0_0x0 != -1) {
      if (*(int *)local_c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
        local_31 = *(int *)local_c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100469cea;
      }
      QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
    }
LAB_100469cea:
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100469d20;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_100469d20:
    uVar5 = FUN_10044e560(param_1);
    FUN_100459010(&local_e8,param_1);
    local_e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_e8;
    if (1 < *(int *)local_e8 + 1U) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + 1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_48,0x1df60e5);
    QString::append(&local_e0);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100469dae;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100469dae:
    FUN_1003e1800(&local_d8,uVar5,&local_e0,0);
    cVar3 = QVariant::toBool();
    QVariant::~QVariant(&local_d8);
    if (*(int *)local_e0.field0_0x0 != -1) {
      if (*(int *)local_e0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
        local_31 = *(int *)local_e0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100469e17;
      }
      QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
    }
LAB_100469e17:
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_31 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100469e4d;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
LAB_100469e4d:
    uVar5 = FUN_10044e560(param_1);
    FUN_100459010(&local_108,param_1);
    local_100.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_108;
    if (1 < *(int *)local_108 + 1U) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + 1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_40,0x1df60ef);
    QString::append(&local_100);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100469edb;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100469edb:
    FUN_1003e1800(&local_f8,uVar5,&local_100,0);
    local_1c0 = QVariant::toLongLong((bool *)&local_f8);
    QVariant::~QVariant(&local_f8);
    if (*(int *)local_100.field0_0x0 != -1) {
      if (*(int *)local_100.field0_0x0 != 0) {
        LOCK();
        *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
        local_31 = *(int *)local_100.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100469f4d;
      }
      QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
    }
LAB_100469f4d:
    bVar10 = true;
    if (*(int *)local_108 != -1) {
      if (*(int *)local_108 != 0) {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + -1;
        local_31 = *(int *)local_108 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10046a18e;
      }
      QArrayData::deallocate(local_108,2,8);
    }
  }
LAB_10046a18e:
  FUN_100def650(&local_110,lVar6 << 0x14,1);
  puVar1 = PTR_shared_null_1021e1288;
  local_118.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (iVar4 == 3) {
    QMetaObject::tr((char *)&local_128,PTR_staticMetaObject_1021e1520,(int)PTR_s_Boot_Camp_10226e628
                   );
    QString::operator=(&local_118,&local_128);
    if (*(int *)local_128.field0_0x0 != -1) {
      if (*(int *)local_128.field0_0x0 != 0) {
        LOCK();
        *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
        local_31 = *(int *)local_128.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10046a30e;
      }
      QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
    }
  }
  else if (iVar4 == 0) {
    QMetaObject::tr((char *)&local_120,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Entire_Disk_10226e620);
    QString::operator=(&local_118,&local_120);
    if (*(int *)local_120.field0_0x0 != -1) {
      if (*(int *)local_120.field0_0x0 != 0) {
        LOCK();
        *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
        local_31 = *(int *)local_120.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10046a30e;
      }
      QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
    }
  }
  else {
    EnumUtils::enumToString(&local_130,local_1c0);
    QString::operator=(&local_118,&local_130);
    if (*(int *)local_130.field0_0x0 != -1) {
      if (*(int *)local_130.field0_0x0 != 0) {
        LOCK();
        *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
        local_31 = *(int *)local_130.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10046a30e;
      }
      QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
    }
  }
LAB_10046a30e:
  local_138.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  if (cVar3 == '\0') {
    if (bVar10) {
      local_1a8 = (QArrayData *)QString::fromAscii_helper("%1, %2",6);
      QString::arg(&local_1a0,&local_1a8,&local_118,0,0x20);
      QString::arg(&local_198,&local_1a0,&local_110,0,0x20);
      QString::operator=(&local_138,&local_198);
      if (*(int *)local_198.field0_0x0 != -1) {
        if (*(int *)local_198.field0_0x0 != 0) {
          LOCK();
          *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + -1;
          local_31 = *(int *)local_198.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10046a5c1;
        }
        QArrayData::deallocate((QArrayData *)local_198.field0_0x0,2,8);
      }
LAB_10046a5c1:
      if (*(int *)local_1a0 != -1) {
        if (*(int *)local_1a0 != 0) {
          LOCK();
          *(int *)local_1a0 = *(int *)local_1a0 + -1;
          local_31 = *(int *)local_1a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10046a5f7;
        }
        QArrayData::deallocate(local_1a0,2,8);
      }
LAB_10046a5f7:
      if (*(int *)local_1a8 != -1) {
        if (*(int *)local_1a8 != 0) {
          LOCK();
          *(int *)local_1a8 = *(int *)local_1a8 + -1;
          local_31 = *(int *)local_1a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10046a877;
        }
        QArrayData::deallocate(local_1a8,2,8);
      }
    }
    else {
      local_190 = (QArrayData *)QString::fromAscii_helper("%1.",3);
      QString::arg(&local_188,&local_190,&local_118,0,0x20);
      QString::operator=(&local_138,&local_188);
      if (*(int *)local_188.field0_0x0 != -1) {
        if (*(int *)local_188.field0_0x0 != 0) {
          LOCK();
          *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
          local_31 = *(int *)local_188.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10046a841;
        }
        QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
      }
LAB_10046a841:
      if (*(int *)local_190 != -1) {
        if (*(int *)local_190 != 0) {
          LOCK();
          *(int *)local_190 = *(int *)local_190 + -1;
          local_31 = *(int *)local_190 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10046a877;
        }
        QArrayData::deallocate(local_190,2,8);
      }
    }
  }
  else if (bVar10) {
    local_178 = (QArrayData *)QString::fromAscii_helper("%1, %2, ",8);
    QString::arg(&local_170,&local_178,&local_118,0,0x20);
    QString::arg(&local_168,&local_170,&local_110,0,0x20);
    QMetaObject::tr((char *)&local_180,PTR_staticMetaObject_1021e1520,0x1df60fe);
    local_160.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_168;
    if (1 < *(int *)local_168 + 1U) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + 1;
      local_31 = *(int *)local_168 != 0;
      UNLOCK();
    }
    QString::append(&local_160);
    QString::operator=(&local_138,&local_160);
    if (*(int *)local_160.field0_0x0 != -1) {
      if (*(int *)local_160.field0_0x0 != 0) {
        LOCK();
        *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
        local_31 = *(int *)local_160.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10046a427;
      }
      QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
    }
LAB_10046a427:
    if (*(int *)local_180 != -1) {
      if (*(int *)local_180 != 0) {
        LOCK();
        *(int *)local_180 = *(int *)local_180 + -1;
        local_31 = *(int *)local_180 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10046a45d;
      }
      QArrayData::deallocate(local_180,2,8);
    }
LAB_10046a45d:
    if (*(int *)local_168 != -1) {
      if (*(int *)local_168 != 0) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + -1;
        local_31 = *(int *)local_168 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10046a493;
      }
      QArrayData::deallocate(local_168,2,8);
    }
LAB_10046a493:
    if (*(int *)local_170 != -1) {
      if (*(int *)local_170 != 0) {
        LOCK();
        *(int *)local_170 = *(int *)local_170 + -1;
        local_31 = *(int *)local_170 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10046a4c9;
      }
      QArrayData::deallocate(local_170,2,8);
    }
LAB_10046a4c9:
    if (*(int *)local_178 != -1) {
      if (*(int *)local_178 != 0) {
        LOCK();
        *(int *)local_178 = *(int *)local_178 + -1;
        local_31 = *(int *)local_178 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10046a877;
      }
      QArrayData::deallocate(local_178,2,8);
    }
  }
  else {
    local_150 = (QArrayData *)QString::fromAscii_helper("%1, ",4);
    QString::arg(&local_148,&local_150,&local_118,0,0x20);
    QMetaObject::tr((char *)&local_158,PTR_staticMetaObject_1021e1520,0x1df60fe);
    QString::arg(&local_140,&local_148,&local_158,0,0x20);
    QString::operator=(&local_138,&local_140);
    if (*(int *)local_140.field0_0x0 != -1) {
      if (*(int *)local_140.field0_0x0 != 0) {
        LOCK();
        *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
        local_31 = *(int *)local_140.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10046a708;
      }
      QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
    }
LAB_10046a708:
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        local_31 = *(int *)local_158 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10046a73e;
      }
      QArrayData::deallocate(local_158,2,8);
    }
LAB_10046a73e:
    if (*(int *)local_148 != -1) {
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        local_31 = *(int *)local_148 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10046a774;
      }
      QArrayData::deallocate(local_148,2,8);
    }
LAB_10046a774:
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 != 0) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_31 = *(int *)local_150 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10046a877;
      }
      QArrayData::deallocate(local_150,2,8);
    }
  }
LAB_10046a877:
  QLabel::setText(*(QString **)(*(long *)(param_1 + 0x68) + 0xa8));
  if (*(int *)local_138.field0_0x0 != -1) {
    if (*(int *)local_138.field0_0x0 != 0) {
      LOCK();
      *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
      local_31 = *(int *)local_138.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046a8c4;
    }
    QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
  }
LAB_10046a8c4:
  if (*(int *)local_118.field0_0x0 != -1) {
    if (*(int *)local_118.field0_0x0 != 0) {
      LOCK();
      *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
      local_31 = *(int *)local_118.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046a8fa;
    }
    QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
  }
LAB_10046a8fa:
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      UNLOCK();
      if (*(int *)local_110 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_110,2,8);
  }
  return;
}

