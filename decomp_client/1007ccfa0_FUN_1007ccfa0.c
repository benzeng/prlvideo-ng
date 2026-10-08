
void FUN_1007ccfa0(QString param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  NewVmUsage *this;
  long lVar6;
  long lVar7;
  QString this_00;
  QArrayData *pQVar8;
  uint uVar9;
  int *piVar10;
  bool bVar11;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QVariant local_1a8;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QString local_180;
  QString local_178;
  QString local_170;
  QString local_168;
  QVariant local_160;
  QArrayData *local_150;
  QArrayData *local_148;
  AnonymousUnion0 local_140;
  QTypedArrayData<unsigned_short> *local_138;
  Data_conflict local_130;
  undefined4 local_128;
  QVariant local_120;
  QArrayData *local_110;
  uint *local_108;
  QString local_100;
  int *local_f8;
  int *local_f0;
  int *local_e8;
  uint local_e0;
  int *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QString local_b8;
  QString local_b0;
  QString local_a8;
  QString local_a0;
  QString local_98;
  QString local_90;
  QVariant local_88;
  QArrayData *local_78;
  QArrayData *local_70;
  undefined1 local_68 [8];
  uint *local_60;
  undefined1 local_58 [8];
  uint *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_1b8 = (QArrayData *)QString::fromAscii_helper("window actions",0xe);
  FUN_1007d8810(&local_1c0,&local_1b8);
  if (*(int *)local_1b8 != -1) {
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      local_31 = *(int *)local_1b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cd018;
    }
    QArrayData::deallocate(local_1b8,2,8);
  }
LAB_1007cd018:
  GuiUsage::setActions(param_1);
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_31 = *(int *)local_1c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cd05d;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_1007cd05d:
  local_1b0 = (QArrayData *)QString::fromAscii_helper("window controls",0xf);
  FUN_1007d8810(&local_1c8,&local_1b0);
  if (*(int *)local_1b0 != -1) {
    if (*(int *)local_1b0 != 0) {
      LOCK();
      *(int *)local_1b0 = *(int *)local_1b0 + -1;
      local_31 = *(int *)local_1b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cd0be;
    }
    QArrayData::deallocate(local_1b0,2,8);
  }
LAB_1007cd0be:
  GuiUsage::setControls(param_1);
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_31 = *(int *)local_1c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cd103;
    }
    QArrayData::deallocate(local_1c8,2,8);
  }
LAB_1007cd103:
  this = operator_new(0xa8);
  NewVmUsage::NewVmUsage(this);
  GuiUsage::setNewVmUsage((NewVmUsage *)param_1.field0_0x0);
  lVar6 = GuiUsage::getNewVmUsage();
  FUN_100a04400(&local_90);
  FUN_1007caa20(&local_98);
  QSettings::QSettings((QSettings *)&local_88,&local_90,&local_98,(QObject *)0x0);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_31 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cd199;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_1007cd199:
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cd1cf;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_1007cd1cf:
  FUN_1007d2760(&local_c0);
  local_c8 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_c0;
  if (1 < *(int *)local_c0 + 1U) {
    LOCK();
    *(int *)local_c0 = *(int *)local_c0 + 1;
    local_31 = *(int *)local_c0 != 0;
    UNLOCK();
  }
  QString::append(&local_b8);
  local_b0.field0_0x0 = local_b8.field0_0x0;
  if (1 < *(int *)local_b8.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + 1;
    local_31 = *(int *)local_b8.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_78,0x1e19007);
  QString::append(&local_b0);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cd299;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1007cd299:
  local_d0 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_a8.field0_0x0 = local_b0.field0_0x0;
  if (1 < *(int *)local_b0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + 1;
    local_31 = *(int *)local_b0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_a8);
  local_a0.field0_0x0 = local_a8.field0_0x0;
  if (1 < *(int *)local_a8.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + 1;
    local_31 = *(int *)local_a8.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_70,0x1e19018);
  QString::append(&local_a0);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cd357;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1007cd357:
  QSettings::beginGroup((QString *)&local_88);
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_31 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cd39d;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_1007cd39d:
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_31 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cd3d3;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_1007cd3d3:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cd409;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1007cd409:
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_31 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cd43f;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_1007cd43f:
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      local_31 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cd475;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
LAB_1007cd475:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cd4ab;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1007cd4ab:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cd4e1;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1007cd4e1:
  QSettings::allKeys();
  local_f8 = local_d8;
  if (*local_d8 != -1) {
    if (*local_d8 == 0) {
      QListData::detach((int)&local_f8);
      iVar1 = local_f8[2];
      if (iVar1 != local_f8[3]) {
        local_d8 = local_d8 + (long)local_d8[2] * 2 + 4;
        piVar10 = local_f8 + (long)iVar1 * 2 + 4;
        lVar7 = (long)local_f8[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)local_d8;
          *(int **)piVar10 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar10 = piVar10 + 2;
          local_d8 = local_d8 + 2;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
    else {
      LOCK();
      *local_d8 = *local_d8 + 1;
      local_31 = *local_d8 != 0;
      UNLOCK();
    }
  }
  local_f0 = local_f8 + (long)local_f8[2] * 2 + 4;
  local_e8 = local_f8 + (long)local_f8[3] * 2 + 4;
  local_e0 = 1;
  if (local_f8[2] != local_f8[3]) {
    do {
      local_100.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_f0;
      if (1 < *(int *)local_100.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + 1;
        local_31 = *(int *)local_100.field0_0x0 != 0;
        UNLOCK();
      }
      if (local_e0 != 0) {
        local_110 = (QArrayData *)QString::fromAscii_helper("/",1);
        QString::split(&local_108,&local_100,&local_110,0,1);
        if (*(int *)local_110 != -1) {
          if (*(int *)local_110 != 0) {
            LOCK();
            *(int *)local_110 = *(int *)local_110 + -1;
            local_31 = *(int *)local_110 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007cd66d;
          }
          QArrayData::deallocate(local_110,2,8);
        }
LAB_1007cd66d:
        if (1 < (int)(local_108[3] - local_108[2])) {
          local_128 = 0x80000000;
          local_130.field7 = 0;
          QSettings::value((QString *)&local_120,&local_88);
          uVar4 = QVariant::toUInt((bool *)&local_120);
          QVariant::~QVariant(&local_120);
          QVariant::~QVariant((QVariant *)&local_130);
          this_00.field0_0x0 = operator_new(0xa8);
          Funnels::Funnels((Funnels *)this_00.field0_0x0);
          local_138 = this_00.field0_0x0;
          QString::toUInt((bool *)(local_108 +
                                  ((long)(int)((local_108[3] - 1) - local_108[2]) +
                                  (long)(int)local_108[2]) * 2 + 4),0);
          Funnels::setSuccess(SUB81(this_00.field0_0x0,0));
          if (1 < *local_108) {
            FUN_100036c40(&local_108,local_108[1]);
          }
          local_60 = local_108 + (long)(int)local_108[3] * 2 + 2;
          FUN_1000557c0(local_68,&local_108,&local_60);
          uVar5 = QString::toUInt((bool *)(local_108 +
                                          ((long)(int)((local_108[3] - 1) - local_108[2]) +
                                          (long)(int)local_108[2]) * 2 + 4),0);
          Funnels::setSourceType(this_00.field0_0x0,uVar5);
          if (1 < *local_108) {
            FUN_100036c40(&local_108,local_108[1]);
          }
          local_50 = local_108 + (long)(int)local_108[3] * 2 + 2;
          FUN_1000557c0(local_58,&local_108,&local_50);
          pQVar8 = (QArrayData *)QString::fromAscii_helper("/",1);
          QtPrivate::QStringList_join
                    ((QStringList *)&local_140.field0,(QChar *)&local_108,
                     (int)*(undefined8 *)(pQVar8 + 0x10) + (int)pQVar8);
          QString::operator=(&local_100,(QString *)&local_140.field0);
          if (*(int *)local_140.field1 != -1) {
            if (*(int *)local_140.field1 != 0) {
              LOCK();
              *(int *)local_140.field1 = *(int *)local_140.field1 + -1;
              local_31 = *(int *)local_140.field1 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007cd85b;
            }
            QArrayData::deallocate((QArrayData *)local_140.field1,2,8);
          }
LAB_1007cd85b:
          if (*(int *)pQVar8 != -1) {
            if (*(int *)pQVar8 != 0) {
              LOCK();
              *(int *)pQVar8 = *(int *)pQVar8 + -1;
              local_31 = *(int *)pQVar8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007cd888;
            }
            QArrayData::deallocate(pQVar8,2,8);
          }
LAB_1007cd888:
          local_148 = (QArrayData *)local_100.field0_0x0;
          if (1 < *(int *)local_100.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + 1;
            local_31 = *(int *)local_100.field0_0x0 != 0;
            UNLOCK();
          }
          Funnels::setFunnel(this_00);
          if (*(int *)local_148 != -1) {
            if (*(int *)local_148 != 0) {
              LOCK();
              *(int *)local_148 = *(int *)local_148 + -1;
              local_31 = *(int *)local_148 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007cd8f0;
            }
            QArrayData::deallocate(local_148,2,8);
          }
LAB_1007cd8f0:
          Funnels::setCount((uint)this_00.field0_0x0);
          if (3 < DAT_10230ffd0) {
            QString::toUtf8();
            pQVar8 = local_150 + *(long *)(local_150 + 0x10);
            uVar3 = Funnels::isSuccess();
            uVar5 = Funnels::getSourceType();
            FUN_100df99c0("","prl_client_app",4,
                          "funnel path = %s \n success = %d \n source type = %d \n funnels count =%d"
                          ,pQVar8,uVar3,uVar5,uVar4);
            if (*(int *)local_150 != -1) {
              if (*(int *)local_150 != 0) {
                LOCK();
                *(int *)local_150 = *(int *)local_150 + -1;
                local_31 = *(int *)local_150 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1007cd9d0;
              }
              QArrayData::deallocate(local_150,1,8);
            }
          }
LAB_1007cd9d0:
          FUN_1007d9390(lVar6 + 0x98,&local_138);
        }
        FUN_100039a80(&local_108);
        local_e0 = 0;
      }
      if (*(int *)local_100.field0_0x0 != -1) {
        if (*(int *)local_100.field0_0x0 != 0) {
          LOCK();
          *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
          local_31 = *(int *)local_100.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007cda27;
        }
        QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
      }
LAB_1007cda27:
      local_f0 = local_f0 + 2;
      uVar9 = local_e0 ^ 1;
      bVar11 = local_e0 != 1;
      local_e0 = uVar9;
    } while ((bVar11) && (local_f0 != local_e8));
  }
  FUN_100039a80(&local_f8);
  QSettings::endGroup();
  FUN_1007d2760(&local_188);
  local_190 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_180.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_188;
  if (1 < *(int *)local_188 + 1U) {
    LOCK();
    *(int *)local_188 = *(int *)local_188 + 1;
    local_31 = *(int *)local_188 != 0;
    UNLOCK();
  }
  QString::append(&local_180);
  local_178.field0_0x0 = local_180.field0_0x0;
  if (1 < *(int *)local_180.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + 1;
    local_31 = *(int *)local_180.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_48,0x1e19007);
  QString::append(&local_178);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cdb3b;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007cdb3b:
  local_198 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_170.field0_0x0 = local_178.field0_0x0;
  if (1 < *(int *)local_178.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_178.field0_0x0 = *(int *)local_178.field0_0x0 + 1;
    local_31 = *(int *)local_178.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_170);
  local_168.field0_0x0 = local_170.field0_0x0;
  if (1 < *(int *)local_170.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + 1;
    local_31 = *(int *)local_170.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1e1905a);
  QString::append(&local_168);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cdbf9;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007cdbf9:
  QVariant::QVariant(&local_1a8,0);
  QSettings::value((QString *)&local_160,&local_88);
  QVariant::toInt((bool *)&local_160);
  NewVmUsage::setDropToDockCount((uint)lVar6);
  QVariant::~QVariant(&local_160);
  QVariant::~QVariant(&local_1a8);
  if (*(int *)local_168.field0_0x0 != -1) {
    if (*(int *)local_168.field0_0x0 != 0) {
      LOCK();
      *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
      local_31 = *(int *)local_168.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cdc8f;
    }
    QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
  }
LAB_1007cdc8f:
  if (*(int *)local_170.field0_0x0 != -1) {
    if (*(int *)local_170.field0_0x0 != 0) {
      LOCK();
      *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
      local_31 = *(int *)local_170.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cdcc5;
    }
    QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
  }
LAB_1007cdcc5:
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_31 = *(int *)local_198 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cdcfb;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_1007cdcfb:
  if (*(int *)local_178.field0_0x0 != -1) {
    if (*(int *)local_178.field0_0x0 != 0) {
      LOCK();
      *(int *)local_178.field0_0x0 = *(int *)local_178.field0_0x0 + -1;
      local_31 = *(int *)local_178.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cdd31;
    }
    QArrayData::deallocate((QArrayData *)local_178.field0_0x0,2,8);
  }
LAB_1007cdd31:
  if (*(int *)local_180.field0_0x0 != -1) {
    if (*(int *)local_180.field0_0x0 != 0) {
      LOCK();
      *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
      local_31 = *(int *)local_180.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cdd67;
    }
    QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
  }
LAB_1007cdd67:
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_31 = *(int *)local_190 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cdd9d;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_1007cdd9d:
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_31 = *(int *)local_188 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007cddd3;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_1007cddd3:
  FUN_100039a80(&local_d8);
  QSettings::~QSettings((QSettings *)&local_88);
  return;
}

