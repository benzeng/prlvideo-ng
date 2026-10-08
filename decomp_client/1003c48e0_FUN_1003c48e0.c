
undefined8 *
FUN_1003c48e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int *piVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  size_t sVar9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  QVariant *pQVar13;
  bool bVar14;
  bool bVar15;
  QVariant local_198;
  QArrayData *local_188;
  QArrayData *local_180;
  QVariant local_178;
  QArrayData *local_168;
  QArrayData *local_160;
  QVariant local_158;
  QArrayData *local_148;
  QArrayData *local_140;
  QVariant local_138;
  QArrayData *local_128;
  QArrayData *local_120;
  QString local_118;
  QVariant local_110;
  QArrayData *local_100;
  QArrayData *local_f8;
  QVariant local_f0;
  QArrayData *local_e0;
  QVariant local_d8;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QVariant local_b8;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QVariant local_98;
  QArrayData *local_88;
  QArrayData *local_80;
  _func_void_Node_ptr *local_78;
  int *local_70;
  int *local_68;
  int *local_60;
  int *local_58;
  uint local_50;
  QVariant local_48;
  int local_38;
  undefined1 local_31;
  
  iVar5 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8);
  QComboBox::currentIndex();
  QComboBox::itemData((int)&local_48,iVar5);
  if ((local_48.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) == 0) {
    bVar14 = false;
  }
  else {
    iVar6 = QVariant::toInt((bool *)&local_48);
    bVar14 = iVar6 == DAT_100e1b1a4;
  }
  *param_1 = PTR_shared_null_1021e15d0;
  puVar3 = PTR_s_VmConfig_1021f1e00;
  iVar6 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar9 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar6 = (int)sVar9;
  }
  local_80 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
  FUN_1003ae3b0(&local_78,param_4,&local_80);
  FUN_1000626e0(&local_70,&local_78);
  local_68 = local_70;
  if (*local_70 != -1) {
    if (*local_70 == 0) {
      QListData::detach((int)&local_68);
      iVar6 = local_68[2];
      if (iVar6 != local_68[3]) {
        local_70 = local_70 + (long)local_70[2] * 2 + 4;
        piVar11 = local_68 + (long)iVar6 * 2 + 4;
        lVar10 = (long)local_68[3] * 8 + (long)iVar6 * -8;
        do {
          piVar2 = *(int **)local_70;
          *(int **)piVar11 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar11 = piVar11 + 2;
          local_70 = local_70 + 2;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
      }
    }
    else {
      LOCK();
      *local_70 = *local_70 + 1;
      local_31 = *local_70 != 0;
      UNLOCK();
    }
  }
  local_60 = local_68 + (long)local_68[2] * 2 + 4;
  local_58 = local_68 + (long)local_68[3] * 2 + 4;
  local_50 = 1;
  FUN_100036370(&local_70);
  if (*(int *)(local_78 + 0x10) != -1) {
    if (*(int *)(local_78 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_78 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c4a98;
    }
    QHashData::free_helper(local_78);
  }
LAB_1003c4a98:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c4ac8;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1003c4ac8:
  if (local_50 != 0) {
    do {
      if (local_60 == local_58) break;
      local_88 = *(QArrayData **)local_60;
      if (1 < *(int *)local_88 + 1U) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + 1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
      }
      if (local_50 != 0) {
        QObject::property((char *)&local_98);
        if (DAT_102273e70 == 0) {
          DAT_102273e70 = FUN_1003deea0("PRL_DEVICE_TYPE",0xffffffffffffffff,1);
        }
        uVar8 = DAT_102273e70;
        uVar7 = QVariant::userType();
        if (uVar8 == uVar7) {
          piVar11 = (int *)QVariant::constData();
          iVar6 = *piVar11;
        }
        else {
          cVar4 = QVariant::convert((int)&local_98,(void *)(ulong)uVar8);
          iVar6 = local_38;
          if (cVar4 == '\0') {
            iVar6 = 0;
          }
        }
        if (bVar14 == false) {
          local_a0 = (QArrayData *)QString::fromAscii_helper("Connected",9);
          cVar4 = QString::endsWith(&local_88,&local_a0,1);
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003c4c40;
            }
            QArrayData::deallocate(local_a0,2,8);
          }
LAB_1003c4c40:
          if (cVar4 != '\0') goto LAB_1003c4c48;
          local_c0 = (QArrayData *)QString::fromAscii_helper("SystemName",10);
          cVar4 = QString::endsWith(&local_88,&local_c0,1);
          if (*(int *)local_c0 != -1) {
            if (*(int *)local_c0 != 0) {
              LOCK();
              *(int *)local_c0 = *(int *)local_c0 + -1;
              local_31 = *(int *)local_c0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003c4db2;
            }
            QArrayData::deallocate(local_c0,2,8);
          }
LAB_1003c4db2:
          if (cVar4 != '\0') {
            if ((iVar6 == 8) || (iVar6 == 0x14)) {
              iVar6 = -1;
              if (puVar3 != (undefined *)0x0) {
                sVar9 = _strlen(puVar3);
                iVar6 = (int)sVar9;
              }
              local_c8 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
              uVar12 = FUN_1003ae480(param_1,&local_c8);
              pQVar13 = (QVariant *)FUN_1002edf40(uVar12,&local_88);
              QComboBox::currentIndex();
              QComboBox::itemData((int)&local_d8,iVar5);
              QVariant::operator=(pQVar13,&local_d8);
              QVariant::~QVariant(&local_d8);
              if (*(int *)local_c8 != -1) {
                if (*(int *)local_c8 != 0) {
                  LOCK();
                  *(int *)local_c8 = *(int *)local_c8 + -1;
                  local_31 = *(int *)local_c8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003c4ce5;
                }
                QArrayData::deallocate(local_c8,2,8);
              }
            }
            else {
              iVar6 = -1;
              if (puVar3 != (undefined *)0x0) {
                sVar9 = _strlen(puVar3);
                iVar6 = (int)sVar9;
              }
              local_e0 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
              uVar12 = FUN_1003ae480(param_1,&local_e0);
              pQVar13 = (QVariant *)FUN_1002edf40(uVar12,&local_88);
              QComboBox::currentIndex();
              QComboBox::itemData((int)&local_f0,iVar5);
              QVariant::operator=(pQVar13,&local_f0);
              QVariant::~QVariant(&local_f0);
              if (*(int *)local_e0 != -1) {
                if (*(int *)local_e0 != 0) {
                  LOCK();
                  *(int *)local_e0 = *(int *)local_e0 + -1;
                  local_31 = *(int *)local_e0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003c4ce5;
                }
                QArrayData::deallocate(local_e0,2,8);
              }
            }
            goto LAB_1003c4ce5;
          }
          local_f8 = (QArrayData *)QString::fromAscii_helper("UserFriendlyName",0x10);
          cVar4 = QString::endsWith(&local_88,&local_f8,1);
          if (*(int *)local_f8 != -1) {
            if (*(int *)local_f8 != 0) {
              LOCK();
              *(int *)local_f8 = *(int *)local_f8 + -1;
              local_31 = *(int *)local_f8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003c4eed;
            }
            QArrayData::deallocate(local_f8,2,8);
          }
LAB_1003c4eed:
          if (cVar4 == '\0') {
            local_120 = (QArrayData *)QString::fromAscii_helper("VirtualNetworkID",0x10);
            cVar4 = QString::endsWith(&local_88,&local_120,1);
            if (*(int *)local_120 != -1) {
              if (*(int *)local_120 != 0) {
                LOCK();
                *(int *)local_120 = *(int *)local_120 + -1;
                local_31 = *(int *)local_120 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003c5063;
              }
              QArrayData::deallocate(local_120,2,8);
            }
LAB_1003c5063:
            if (cVar4 == '\0') {
              local_140 = (QArrayData *)QString::fromAscii_helper("AdapterNumber",0xd);
              cVar4 = QString::endsWith(&local_88,&local_140,1);
              if (*(int *)local_140 != -1) {
                if (*(int *)local_140 != 0) {
                  LOCK();
                  *(int *)local_140 = *(int *)local_140 + -1;
                  local_31 = *(int *)local_140 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003c5262;
                }
                QArrayData::deallocate(local_140,2,8);
              }
LAB_1003c5262:
              if (cVar4 == '\0') {
                local_160 = (QArrayData *)QString::fromAscii_helper("AdapterName",0xb);
                cVar4 = QString::endsWith(&local_88,&local_160,1);
                if (*(int *)local_160 != -1) {
                  if (*(int *)local_160 != 0) {
                    LOCK();
                    *(int *)local_160 = *(int *)local_160 + -1;
                    local_31 = *(int *)local_160 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003c5398;
                  }
                  QArrayData::deallocate(local_160,2,8);
                }
LAB_1003c5398:
                if (cVar4 == '\0') {
                  local_180 = (QArrayData *)QString::fromAscii_helper("EmulatedType",0xc);
                  cVar4 = QString::endsWith(&local_88,&local_180,1);
                  if (*(int *)local_180 != -1) {
                    if (*(int *)local_180 != 0) {
                      LOCK();
                      *(int *)local_180 = *(int *)local_180 + -1;
                      local_31 = *(int *)local_180 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1003c54ce;
                    }
                    QArrayData::deallocate(local_180,2,8);
                  }
LAB_1003c54ce:
                  if (cVar4 != '\0') {
                    iVar6 = -1;
                    if (puVar3 != (undefined *)0x0) {
                      sVar9 = _strlen(puVar3);
                      iVar6 = (int)sVar9;
                    }
                    local_188 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
                    uVar12 = FUN_1003ae480(param_1,&local_188);
                    pQVar13 = (QVariant *)FUN_1002edf40(uVar12,&local_88);
                    QComboBox::currentIndex();
                    QComboBox::itemData((int)&local_198,iVar5);
                    QVariant::operator=(pQVar13,&local_198);
                    QVariant::~QVariant(&local_198);
                    if (*(int *)local_188 != -1) {
                      if (*(int *)local_188 != 0) {
                        LOCK();
                        *(int *)local_188 = *(int *)local_188 + -1;
                        local_31 = *(int *)local_188 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1003c4ce5;
                      }
                      QArrayData::deallocate(local_188,2,8);
                    }
                  }
                }
                else {
                  iVar6 = -1;
                  if (puVar3 != (undefined *)0x0) {
                    sVar9 = _strlen(puVar3);
                    iVar6 = (int)sVar9;
                  }
                  local_168 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
                  uVar12 = FUN_1003ae480(param_1,&local_168);
                  pQVar13 = (QVariant *)FUN_1002edf40(uVar12,&local_88);
                  QComboBox::currentIndex();
                  QComboBox::itemData((int)&local_178,iVar5);
                  QVariant::operator=(pQVar13,&local_178);
                  QVariant::~QVariant(&local_178);
                  if (*(int *)local_168 != -1) {
                    if (*(int *)local_168 != 0) {
                      LOCK();
                      *(int *)local_168 = *(int *)local_168 + -1;
                      local_31 = *(int *)local_168 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1003c4ce5;
                    }
                    QArrayData::deallocate(local_168,2,8);
                  }
                }
              }
              else {
                iVar6 = -1;
                if (puVar3 != (undefined *)0x0) {
                  sVar9 = _strlen(puVar3);
                  iVar6 = (int)sVar9;
                }
                local_148 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
                uVar12 = FUN_1003ae480(param_1,&local_148);
                pQVar13 = (QVariant *)FUN_1002edf40(uVar12,&local_88);
                QComboBox::currentIndex();
                QComboBox::itemData((int)&local_158,iVar5);
                QVariant::operator=(pQVar13,&local_158);
                QVariant::~QVariant(&local_158);
                if (*(int *)local_148 != -1) {
                  if (*(int *)local_148 != 0) {
                    LOCK();
                    *(int *)local_148 = *(int *)local_148 + -1;
                    local_31 = *(int *)local_148 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003c4ce5;
                  }
                  QArrayData::deallocate(local_148,2,8);
                }
              }
            }
            else {
              iVar6 = -1;
              if (puVar3 != (undefined *)0x0) {
                sVar9 = _strlen(puVar3);
                iVar6 = (int)sVar9;
              }
              local_128 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
              uVar12 = FUN_1003ae480(param_1,&local_128);
              pQVar13 = (QVariant *)FUN_1002edf40(uVar12,&local_88);
              QComboBox::currentIndex();
              QComboBox::itemData((int)&local_138,iVar5);
              QVariant::operator=(pQVar13,&local_138);
              QVariant::~QVariant(&local_138);
              if (*(int *)local_128 != -1) {
                if (*(int *)local_128 != 0) {
                  LOCK();
                  *(int *)local_128 = *(int *)local_128 + -1;
                  local_31 = *(int *)local_128 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003c4ce5;
                }
                QArrayData::deallocate(local_128,2,8);
              }
            }
          }
          else {
            iVar6 = -1;
            if (puVar3 != (undefined *)0x0) {
              sVar9 = _strlen(puVar3);
              iVar6 = (int)sVar9;
            }
            local_100 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
            uVar12 = FUN_1003ae480(param_1,&local_100);
            pQVar13 = (QVariant *)FUN_1002edf40(uVar12,&local_88);
            QComboBox::currentIndex();
            QComboBox::itemText((int)&local_118);
            QVariant::QVariant(&local_110,&local_118);
            QVariant::operator=(pQVar13,&local_110);
            QVariant::~QVariant(&local_110);
            if (*(int *)local_118.field0_0x0 != -1) {
              if (*(int *)local_118.field0_0x0 != 0) {
                LOCK();
                *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
                local_31 = *(int *)local_118.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003c4fbb;
              }
              QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
            }
LAB_1003c4fbb:
            if (*(int *)local_100 != -1) {
              if (*(int *)local_100 != 0) {
                LOCK();
                *(int *)local_100 = *(int *)local_100 + -1;
                local_31 = *(int *)local_100 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003c4ce5;
              }
              QArrayData::deallocate(local_100,2,8);
            }
          }
        }
        else {
LAB_1003c4c48:
          iVar6 = -1;
          if (puVar3 != (undefined *)0x0) {
            sVar9 = _strlen(puVar3);
            iVar6 = (int)sVar9;
          }
          local_a8 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
          uVar12 = FUN_1003ae480(param_1,&local_a8);
          pQVar13 = (QVariant *)FUN_1002edf40(uVar12,&local_88);
          QVariant::QVariant(&local_b8,(bool)(bVar14 ^ 1));
          QVariant::operator=(pQVar13,&local_b8);
          QVariant::~QVariant(&local_b8);
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003c4ce5;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
        }
LAB_1003c4ce5:
        QVariant::~QVariant(&local_98);
        local_50 = 0;
      }
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003c4d28;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_1003c4d28:
      local_60 = local_60 + 2;
      uVar8 = local_50 ^ 1;
      bVar15 = local_50 != 1;
      local_50 = uVar8;
    } while (bVar15);
  }
  FUN_100036370(&local_68);
  QVariant::~QVariant(&local_48);
  return param_1;
}

