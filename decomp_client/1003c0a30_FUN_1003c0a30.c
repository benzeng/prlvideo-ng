
undefined8
FUN_1003c0a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int *piVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  size_t sVar9;
  undefined8 uVar10;
  QVariant *pQVar11;
  undefined4 *puVar12;
  int *piVar13;
  int iVar14;
  undefined4 uVar15;
  bool bVar16;
  QVariant local_128;
  QArrayData *local_118;
  QArrayData *local_110;
  QVariant local_108;
  QArrayData *local_f8;
  QVariant local_f0;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QString local_d0;
  QVariant local_c8;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QString local_a8;
  QVariant local_a0;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  _func_void_Node_ptr *local_70;
  int *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  uint local_48;
  _func_void_Node_ptr *local_40;
  undefined4 local_38;
  undefined1 local_31;
  
  lVar8 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1470);
  puVar3 = PTR_s_VmConfig_1021f1e00;
  if (lVar8 == 0) {
    FUN_1003dea50(param_1,param_4);
    return param_1;
  }
  local_40 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  iVar5 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar9 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar5 = (int)sVar9;
  }
  local_78 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
  FUN_1003ae3b0(&local_70,param_4,&local_78);
  FUN_1000626e0(&local_68,&local_70);
  local_60 = local_68;
  if (*local_68 != -1) {
    if (*local_68 == 0) {
      QListData::detach((int)&local_60);
      iVar5 = local_60[2];
      if (iVar5 != local_60[3]) {
        local_68 = local_68 + (long)local_68[2] * 2 + 4;
        piVar13 = local_60 + (long)iVar5 * 2 + 4;
        lVar8 = (long)local_60[3] * 8 + (long)iVar5 * -8;
        do {
          piVar2 = *(int **)local_68;
          *(int **)piVar13 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar13 = piVar13 + 2;
          local_68 = local_68 + 2;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
    }
    else {
      LOCK();
      *local_68 = *local_68 + 1;
      local_31 = *local_68 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)local_60[2] * 2 + 4;
  local_50 = local_60 + (long)local_60[3] * 2 + 4;
  local_48 = 1;
  FUN_100036370(&local_68);
  if (*(int *)(local_70 + 0x10) != -1) {
    if (*(int *)(local_70 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_70 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c0bab;
    }
    QHashData::free_helper(local_70);
  }
LAB_1003c0bab:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c0bdb;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1003c0bdb:
  if (local_48 != 0) {
    do {
      if (local_58 == local_50) break;
      local_80 = *(QArrayData **)local_58;
      if (1 < *(int *)local_80 + 1U) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + 1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
      }
      if (local_48 != 0) {
        local_88 = (QArrayData *)QString::fromAscii_helper("SystemName",10);
        cVar4 = QString::endsWith(&local_80,&local_88,1);
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003c0c96;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_1003c0c96:
        if (cVar4 == '\0') {
          local_b0 = (QArrayData *)QString::fromAscii_helper("UserFriendlyName",0x10);
          cVar4 = QString::endsWith(&local_80,&local_b0,1);
          if (*(int *)local_b0 != -1) {
            if (*(int *)local_b0 != 0) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + -1;
              local_31 = *(int *)local_b0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003c0e15;
            }
            QArrayData::deallocate(local_b0,2,8);
          }
LAB_1003c0e15:
          if (cVar4 == '\0') {
            local_e0 = (QArrayData *)QString::fromAscii_helper("EmulatedType",0xc);
            cVar4 = QString::endsWith(&local_80,&local_e0,1);
            if (*(int *)local_e0 != -1) {
              if (*(int *)local_e0 != 0) {
                LOCK();
                *(int *)local_e0 = *(int *)local_e0 + -1;
                local_31 = *(int *)local_e0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003c0fb8;
              }
              QArrayData::deallocate(local_e0,2,8);
            }
LAB_1003c0fb8:
            if (cVar4 == '\0') {
              local_110 = (QArrayData *)QString::fromAscii_helper("Connected",9);
              cVar4 = QString::endsWith(&local_80,&local_110,1);
              if (*(int *)local_110 != -1) {
                if (*(int *)local_110 != 0) {
                  LOCK();
                  *(int *)local_110 = *(int *)local_110 + -1;
                  local_31 = *(int *)local_110 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003c10f5;
                }
                QArrayData::deallocate(local_110,2,8);
              }
LAB_1003c10f5:
              if (cVar4 != '\0') {
                iVar5 = -1;
                if (puVar3 != (undefined *)0x0) {
                  sVar9 = _strlen(puVar3);
                  iVar5 = (int)sVar9;
                }
                local_118 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
                uVar10 = FUN_1003ae480(&local_40,&local_118);
                pQVar11 = (QVariant *)FUN_1002edf40(uVar10,&local_80);
                lVar8 = CPrlFileDevSelectorWidget::getFileDevSelector();
                QVariant::QVariant(&local_128,*(bool *)(lVar8 + 0x98));
                QVariant::operator=(pQVar11,&local_128);
                QVariant::~QVariant(&local_128);
                if (*(int *)local_118 != -1) {
                  if (*(int *)local_118 != 0) {
                    LOCK();
                    *(int *)local_118 = *(int *)local_118 + -1;
                    local_31 = *(int *)local_118 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003c1270;
                  }
                  QArrayData::deallocate(local_118,2,8);
                }
              }
            }
            else {
              QObject::property((char *)&local_f0);
              iVar5 = CPrlFileDevSelectorWidget::getCurrentItemType();
              if (iVar5 != 0) {
                iVar14 = -1;
                if (puVar3 != (undefined *)0x0) {
                  sVar9 = _strlen(puVar3);
                  iVar14 = (int)sVar9;
                }
                local_f8 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar14);
                uVar10 = FUN_1003ae480(&local_40,&local_f8);
                pQVar11 = (QVariant *)FUN_1002edf40(uVar10,&local_80);
                if (DAT_102273e70 == 0) {
                  DAT_102273e70 = FUN_1003deea0("PRL_DEVICE_TYPE",0xffffffffffffffff,1);
                }
                uVar7 = DAT_102273e70;
                uVar6 = QVariant::userType();
                if (uVar7 == uVar6) {
                  puVar12 = (undefined4 *)QVariant::constData();
                  uVar15 = *puVar12;
                }
                else {
                  cVar4 = QVariant::convert((int)&local_f0,(void *)(ulong)uVar7);
                  uVar15 = local_38;
                  if (cVar4 == '\0') {
                    uVar15 = 0;
                  }
                }
                uVar7 = FileDevSelectorHelpers::getEmulationType(iVar5,uVar15);
                QVariant::QVariant(&local_108,uVar7);
                QVariant::operator=(pQVar11,&local_108);
                QVariant::~QVariant(&local_108);
                if (*(int *)local_f8 != -1) {
                  if (*(int *)local_f8 != 0) {
                    LOCK();
                    *(int *)local_f8 = *(int *)local_f8 + -1;
                    local_31 = *(int *)local_f8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003c1247;
                  }
                  QArrayData::deallocate(local_f8,2,8);
                }
              }
LAB_1003c1247:
              QVariant::~QVariant(&local_f0);
            }
          }
          else {
            iVar5 = -1;
            if (puVar3 != (undefined *)0x0) {
              sVar9 = _strlen(puVar3);
              iVar5 = (int)sVar9;
            }
            local_b8 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
            uVar10 = FUN_1003ae480(&local_40,&local_b8);
            pQVar11 = (QVariant *)FUN_1002edf40(uVar10,&local_80);
            CPrlFileDevSelectorWidget::getCurrentUserFriendlyName();
            FUN_100116430(&local_d0,&local_d8);
            QVariant::QVariant(&local_c8,&local_d0);
            QVariant::operator=(pQVar11,&local_c8);
            QVariant::~QVariant(&local_c8);
            if (*(int *)local_d0.field0_0x0 != -1) {
              if (*(int *)local_d0.field0_0x0 != 0) {
                LOCK();
                *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
                local_31 = *(int *)local_d0.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003c0eda;
              }
              QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
            }
LAB_1003c0eda:
            if (*(int *)local_d8 != -1) {
              if (*(int *)local_d8 != 0) {
                LOCK();
                *(int *)local_d8 = *(int *)local_d8 + -1;
                local_31 = *(int *)local_d8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003c0f10;
              }
              QArrayData::deallocate(local_d8,2,8);
            }
LAB_1003c0f10:
            if (*(int *)local_b8 != -1) {
              if (*(int *)local_b8 != 0) {
                LOCK();
                *(int *)local_b8 = *(int *)local_b8 + -1;
                local_31 = *(int *)local_b8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003c1270;
              }
              QArrayData::deallocate(local_b8,2,8);
            }
          }
        }
        else {
          iVar5 = -1;
          if (puVar3 != (undefined *)0x0) {
            sVar9 = _strlen(puVar3);
            iVar5 = (int)sVar9;
          }
          local_90 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
          uVar10 = FUN_1003ae480(&local_40,&local_90);
          pQVar11 = (QVariant *)FUN_1002edf40(uVar10,&local_80);
          CPrlFileDevSelectorWidget::getCurrentSystemName();
          QVariant::QVariant(&local_a0,&local_a8);
          QVariant::operator=(pQVar11,&local_a0);
          QVariant::~QVariant(&local_a0);
          if (*(int *)local_a8.field0_0x0 != -1) {
            if (*(int *)local_a8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
              local_31 = *(int *)local_a8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003c0d5e;
            }
            QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
          }
LAB_1003c0d5e:
          if (*(int *)local_90 != -1) {
            if (*(int *)local_90 != 0) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + -1;
              local_31 = *(int *)local_90 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003c1270;
            }
            QArrayData::deallocate(local_90,2,8);
          }
        }
LAB_1003c1270:
        local_48 = 0;
      }
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003c12a7;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_1003c12a7:
      local_58 = local_58 + 2;
      uVar7 = local_48 ^ 1;
      bVar16 = local_48 != 1;
      local_48 = uVar7;
    } while (bVar16);
  }
  FUN_100036370(&local_60);
  FUN_1003dea50(param_1,&local_40);
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_40 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return param_1;
      }
    }
    QHashData::free_helper(local_40);
  }
  return param_1;
}

