
/* WARNING: Removing unreachable block (ram,0x0001001f8885) */
/* WARNING: Removing unreachable block (ram,0x0001001f8893) */
/* WARNING: Removing unreachable block (ram,0x0001001f889f) */

undefined8 FUN_1001f85b0(long param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  bool *pbVar4;
  long lVar5;
  CSlotInfo *pCVar6;
  Data *pDVar7;
  QArrayData *pQVar8;
  uint in_stack_fffffffffffffe2c;
  Data_conflict local_198;
  undefined4 local_190;
  undefined1 local_188;
  QArrayData *local_180;
  undefined1 local_178 [24];
  AnonymousUnion0 local_160;
  int *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  Data_conflict local_138;
  undefined4 local_130;
  undefined1 local_128;
  undefined1 local_118 [24];
  AnonymousUnion0 local_100;
  int *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  Data_conflict local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined1 local_c0 [24];
  AnonymousUnion0 local_a8;
  Data_conflict local_a0;
  bool local_98;
  QArrayData *local_90;
  int *local_88 [4];
  QVariant local_68 [2];
  QArrayData *local_50;
  QMapNodeBase *local_48;
  QVariant local_40;
  undefined1 local_29;
  
  if (DAT_1023109d8 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_100785b00(pvVar2);
    DAT_10226c7e0 = 1;
    DAT_1023109d8 = pvVar2;
  }
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar3 = FUN_100785c90(DAT_1023109d8,uVar3,9);
  FUN_1007864c0(&local_40,uVar3);
  uVar3 = 0x80000001;
  if ((local_40.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) == 0) goto LAB_1001f9100;
  QVariant::toMap();
  FUN_1007868d0(&local_50,2);
  pbVar4 = (bool *)FUN_10008c590(&local_48,&local_50);
  lVar5 = QVariant::toULongLong(pbVar4);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001f869d;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001f869d:
  CAbstractTask::setWaitForSubTaskCompletion();
  local_90 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onConfirmCleanUpClosed(PRL_RESULT, Messaging::ButtonID)",0x38);
  local_98 = 0x80000000;
  local_a0.field7 = 0;
  FUN_100a1c600(local_88,param_1,&local_90,&local_a0);
  QVariant::~QVariant((QVariant *)&local_a0);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001f872e;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1001f872e:
  if (lVar5 == 0) {
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_10018c2b0(uVar3);
    CVmConfiguration::getVmSettings();
    CVmSettings::getOnlineCompact();
    iVar1 = CVmOnlineCompact::getMode();
    if (iVar1 == 0) {
      iVar1 = CMessageManager::instance();
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
      }
      FUN_100188480(&local_100,uVar3);
      local_118._0_8_ = PTR_shared_null_1021e15e8;
      local_118._16_8_ = PTR_shared_null_1021e15e8;
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
      }
      FUN_10018d830(local_118 + 8,uVar3);
      FUN_1000341d0(local_118 + 0x10,local_118 + 8);
      pCVar6 = (CSlotInfo *)0x0;
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (pCVar6 = (CSlotInfo *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
        pCVar6 = *(CSlotInfo **)(param_1 + 0x30);
      }
      local_158 = (int *)0x0;
      uStack_150 = 0;
      local_140 = 0;
      local_148 = 0;
      local_130 = 0x80000000;
      local_138.field7 = 0;
      local_128 = 1;
      CMessageManager::showMessageBox
                (iVar1,(QString *)0x3c20,(QStringList *)&local_100.field0,
                 (QStringList *)(local_118 + 0x10),(CSlotInfo *)local_118,SUB81(local_88,0),
                 (QWidget *)((ulong)in_stack_fffffffffffffe2c << 0x20),pCVar6);
      QVariant::~QVariant((QVariant *)&local_138);
      if (local_158 != (int *)0x0) {
        LOCK();
        *local_158 = *local_158 + -1;
        local_29 = *local_158 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (local_158 != (int *)0x0)) {
          operator_delete(local_158);
        }
      }
      uVar3 = local_118._0_8_;
      if (*(int *)local_118._0_8_ != -1) {
        if (*(int *)local_118._0_8_ != 0) {
          LOCK();
          *(int *)local_118._0_8_ = *(int *)local_118._0_8_ + -1;
          local_29 = *(int *)local_118._0_8_ != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1001f8f90;
        }
        iVar1 = *(int *)(local_118._0_8_ + 0xc);
        if (iVar1 != *(int *)(local_118._0_8_ + 8)) {
          lVar5 = (long)*(int *)(local_118._0_8_ + 8) * 8 + (long)iVar1 * -8;
          pDVar7 = (Data *)(local_118._0_8_ + (long)iVar1 * 8 + 8);
          do {
            pQVar8 = *(QArrayData **)pDVar7;
            if (*(int *)pQVar8 == 0) {
LAB_1001f8f6f:
              QArrayData::deallocate(pQVar8,2,8);
            }
            else if (*(int *)pQVar8 != -1) {
              LOCK();
              *(int *)pQVar8 = *(int *)pQVar8 + -1;
              local_29 = *(int *)pQVar8 != 0;
              UNLOCK();
              if (!(bool)local_29) {
                pQVar8 = *(QArrayData **)pDVar7;
                goto LAB_1001f8f6f;
              }
            }
            pDVar7 = pDVar7 + -8;
            lVar5 = lVar5 + 8;
          } while (lVar5 != 0);
        }
        QListData::dispose((Data *)uVar3);
      }
LAB_1001f8f90:
      if (*(int *)local_118._8_8_ != -1) {
        if (*(int *)local_118._8_8_ != 0) {
          LOCK();
          *(int *)local_118._8_8_ = *(int *)local_118._8_8_ + -1;
          local_29 = *(int *)local_118._8_8_ != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1001f8fc6;
        }
        QArrayData::deallocate((QArrayData *)local_118._8_8_,2,8);
      }
LAB_1001f8fc6:
      uVar3 = local_118._16_8_;
      if (*(int *)local_118._16_8_ != -1) {
        if (*(int *)local_118._16_8_ != 0) {
          LOCK();
          *(int *)local_118._16_8_ = *(int *)local_118._16_8_ + -1;
          local_29 = *(int *)local_118._16_8_ != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1001f9051;
        }
        iVar1 = *(int *)(local_118._16_8_ + 0xc);
        if (iVar1 != *(int *)(local_118._16_8_ + 8)) {
          lVar5 = (long)*(int *)(local_118._16_8_ + 8) * 8 + (long)iVar1 * -8;
          pDVar7 = (Data *)(local_118._16_8_ + (long)iVar1 * 8 + 8);
          do {
            pQVar8 = *(QArrayData **)pDVar7;
            if (*(int *)pQVar8 == 0) {
LAB_1001f9030:
              QArrayData::deallocate(pQVar8,2,8);
            }
            else if (*(int *)pQVar8 != -1) {
              LOCK();
              *(int *)pQVar8 = *(int *)pQVar8 + -1;
              local_29 = *(int *)pQVar8 != 0;
              UNLOCK();
              if (!(bool)local_29) {
                pQVar8 = *(QArrayData **)pDVar7;
                goto LAB_1001f9030;
              }
            }
            pDVar7 = pDVar7 + -8;
            lVar5 = lVar5 + 8;
          } while (lVar5 != 0);
        }
        QListData::dispose((Data *)uVar3);
      }
LAB_1001f9051:
      if (*(int *)local_100.field1 != -1) {
        if (*(int *)local_100.field1 != 0) {
          LOCK();
          *(int *)local_100.field1 = *(int *)local_100.field1 + -1;
          local_29 = *(int *)local_100.field1 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1001f9087;
        }
        QArrayData::deallocate((QArrayData *)local_100.field1,2,8);
      }
    }
    else {
      iVar1 = CMessageManager::instance();
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
      }
      FUN_100188480(&local_a8,uVar3);
      local_c0._0_8_ = PTR_shared_null_1021e15e8;
      local_c0._16_8_ = PTR_shared_null_1021e15e8;
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
      }
      FUN_10018d830(local_c0 + 8,uVar3);
      FUN_1000341d0(local_c0 + 0x10,local_c0 + 8);
      pCVar6 = (CSlotInfo *)0x0;
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (pCVar6 = (CSlotInfo *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
        pCVar6 = *(CSlotInfo **)(param_1 + 0x30);
      }
      local_f8 = (int *)0x0;
      uStack_f0 = 0;
      local_e0 = 0;
      local_e8 = 0;
      local_d0 = 0x80000000;
      local_d8.field7 = 0;
      local_c8 = 1;
      CMessageManager::showMessageBox
                (iVar1,(QString *)0x3c77,(QStringList *)&local_a8.field0,
                 (QStringList *)(local_c0 + 0x10),(CSlotInfo *)local_c0,SUB81(local_88,0),
                 (QWidget *)((ulong)in_stack_fffffffffffffe2c << 0x20),pCVar6);
      QVariant::~QVariant((QVariant *)&local_d8);
      if (local_f8 != (int *)0x0) {
        LOCK();
        *local_f8 = *local_f8 + -1;
        local_29 = *local_f8 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (local_f8 != (int *)0x0)) {
          operator_delete(local_f8);
        }
      }
      uVar3 = local_c0._0_8_;
      if (*(int *)local_c0._0_8_ != -1) {
        if (*(int *)local_c0._0_8_ != 0) {
          LOCK();
          *(int *)local_c0._0_8_ = *(int *)local_c0._0_8_ + -1;
          local_29 = *(int *)local_c0._0_8_ != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1001f8ca1;
        }
        iVar1 = *(int *)(local_c0._0_8_ + 0xc);
        if (iVar1 != *(int *)(local_c0._0_8_ + 8)) {
          lVar5 = (long)*(int *)(local_c0._0_8_ + 8) * 8 + (long)iVar1 * -8;
          pDVar7 = (Data *)(local_c0._0_8_ + (long)iVar1 * 8 + 8);
          do {
            pQVar8 = *(QArrayData **)pDVar7;
            if (*(int *)pQVar8 == 0) {
LAB_1001f8c80:
              QArrayData::deallocate(pQVar8,2,8);
            }
            else if (*(int *)pQVar8 != -1) {
              LOCK();
              *(int *)pQVar8 = *(int *)pQVar8 + -1;
              local_29 = *(int *)pQVar8 != 0;
              UNLOCK();
              if (!(bool)local_29) {
                pQVar8 = *(QArrayData **)pDVar7;
                goto LAB_1001f8c80;
              }
            }
            pDVar7 = pDVar7 + -8;
            lVar5 = lVar5 + 8;
          } while (lVar5 != 0);
        }
        QListData::dispose((Data *)uVar3);
      }
LAB_1001f8ca1:
      if (*(int *)local_c0._8_8_ != -1) {
        if (*(int *)local_c0._8_8_ != 0) {
          LOCK();
          *(int *)local_c0._8_8_ = *(int *)local_c0._8_8_ + -1;
          local_29 = *(int *)local_c0._8_8_ != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1001f8cd7;
        }
        QArrayData::deallocate((QArrayData *)local_c0._8_8_,2,8);
      }
LAB_1001f8cd7:
      uVar3 = local_c0._16_8_;
      if (*(int *)local_c0._16_8_ != -1) {
        if (*(int *)local_c0._16_8_ != 0) {
          LOCK();
          *(int *)local_c0._16_8_ = *(int *)local_c0._16_8_ + -1;
          local_29 = *(int *)local_c0._16_8_ != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1001f8d71;
        }
        iVar1 = *(int *)(local_c0._16_8_ + 0xc);
        if (iVar1 != *(int *)(local_c0._16_8_ + 8)) {
          lVar5 = (long)*(int *)(local_c0._16_8_ + 8) * 8 + (long)iVar1 * -8;
          pDVar7 = (Data *)(local_c0._16_8_ + (long)iVar1 * 8 + 8);
          do {
            pQVar8 = *(QArrayData **)pDVar7;
            if (*(int *)pQVar8 == 0) {
LAB_1001f8d50:
              QArrayData::deallocate(pQVar8,2,8);
            }
            else if (*(int *)pQVar8 != -1) {
              LOCK();
              *(int *)pQVar8 = *(int *)pQVar8 + -1;
              local_29 = *(int *)pQVar8 != 0;
              UNLOCK();
              if (!(bool)local_29) {
                pQVar8 = *(QArrayData **)pDVar7;
                goto LAB_1001f8d50;
              }
            }
            pDVar7 = pDVar7 + -8;
            lVar5 = lVar5 + 8;
          } while (lVar5 != 0);
        }
        QListData::dispose((Data *)uVar3);
      }
LAB_1001f8d71:
      if (*(int *)local_a8.field1 != -1) {
        if (*(int *)local_a8.field1 != 0) {
          LOCK();
          *(int *)local_a8.field1 = *(int *)local_a8.field1 + -1;
          local_29 = *(int *)local_a8.field1 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1001f9087;
        }
        QArrayData::deallocate((QArrayData *)local_a8.field1,2,8);
      }
    }
  }
  else {
    iVar1 = CMessageManager::instance();
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100188480(&local_160,uVar3);
    local_178._0_8_ = PTR_shared_null_1021e15e8;
    local_178._16_8_ = PTR_shared_null_1021e15e8;
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_10018d830(local_178 + 8,uVar3);
    FUN_1000341d0(local_178 + 0x10,local_178 + 8);
    FUN_100def650(&local_180,lVar5,1);
    FUN_1000341d0(local_178,&local_180);
    pCVar6 = (CSlotInfo *)0x0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (pCVar6 = (CSlotInfo *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      pCVar6 = *(CSlotInfo **)(param_1 + 0x30);
    }
    local_190 = 0x80000000;
    local_198.field7 = 0;
    local_188 = 1;
    CMessageManager::showMessageBox
              (iVar1,(QString *)0x3c21,(QStringList *)&local_160.field0,
               (QStringList *)(local_178 + 0x10),(CSlotInfo *)local_178,SUB81(local_88,0),
               (QWidget *)((ulong)in_stack_fffffffffffffe2c << 0x20),pCVar6);
    QVariant::~QVariant((QVariant *)&local_198);
    if (*(int *)local_180 != -1) {
      if (*(int *)local_180 != 0) {
        LOCK();
        *(int *)local_180 = *(int *)local_180 + -1;
        local_29 = *(int *)local_180 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001f88da;
      }
      QArrayData::deallocate(local_180,2,8);
    }
LAB_1001f88da:
    uVar3 = local_178._0_8_;
    if (*(int *)local_178._0_8_ != -1) {
      if (*(int *)local_178._0_8_ != 0) {
        LOCK();
        *(int *)local_178._0_8_ = *(int *)local_178._0_8_ + -1;
        local_29 = *(int *)local_178._0_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001f8971;
      }
      iVar1 = *(int *)(local_178._0_8_ + 0xc);
      if (iVar1 != *(int *)(local_178._0_8_ + 8)) {
        lVar5 = (long)*(int *)(local_178._0_8_ + 8) * 8 + (long)iVar1 * -8;
        pDVar7 = (Data *)(local_178._0_8_ + (long)iVar1 * 8 + 8);
        do {
          pQVar8 = *(QArrayData **)pDVar7;
          if (*(int *)pQVar8 == 0) {
LAB_1001f8950:
            QArrayData::deallocate(pQVar8,2,8);
          }
          else if (*(int *)pQVar8 != -1) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_29 = *(int *)pQVar8 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar8 = *(QArrayData **)pDVar7;
              goto LAB_1001f8950;
            }
          }
          pDVar7 = pDVar7 + -8;
          lVar5 = lVar5 + 8;
        } while (lVar5 != 0);
      }
      QListData::dispose((Data *)uVar3);
    }
LAB_1001f8971:
    if (*(int *)local_178._8_8_ != -1) {
      if (*(int *)local_178._8_8_ != 0) {
        LOCK();
        *(int *)local_178._8_8_ = *(int *)local_178._8_8_ + -1;
        local_29 = *(int *)local_178._8_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001f89a7;
      }
      QArrayData::deallocate((QArrayData *)local_178._8_8_,2,8);
    }
LAB_1001f89a7:
    uVar3 = local_178._16_8_;
    if (*(int *)local_178._16_8_ != -1) {
      if (*(int *)local_178._16_8_ != 0) {
        LOCK();
        *(int *)local_178._16_8_ = *(int *)local_178._16_8_ + -1;
        local_29 = *(int *)local_178._16_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001f8a41;
      }
      iVar1 = *(int *)(local_178._16_8_ + 0xc);
      if (iVar1 != *(int *)(local_178._16_8_ + 8)) {
        lVar5 = (long)*(int *)(local_178._16_8_ + 8) * 8 + (long)iVar1 * -8;
        pDVar7 = (Data *)(local_178._16_8_ + (long)iVar1 * 8 + 8);
        do {
          pQVar8 = *(QArrayData **)pDVar7;
          if (*(int *)pQVar8 == 0) {
LAB_1001f8a20:
            QArrayData::deallocate(pQVar8,2,8);
          }
          else if (*(int *)pQVar8 != -1) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_29 = *(int *)pQVar8 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar8 = *(QArrayData **)pDVar7;
              goto LAB_1001f8a20;
            }
          }
          pDVar7 = pDVar7 + -8;
          lVar5 = lVar5 + 8;
        } while (lVar5 != 0);
      }
      QListData::dispose((Data *)uVar3);
    }
LAB_1001f8a41:
    if (*(int *)local_160.field1 != -1) {
      if (*(int *)local_160.field1 != 0) {
        LOCK();
        *(int *)local_160.field1 = *(int *)local_160.field1 + -1;
        local_29 = *(int *)local_160.field1 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001f9087;
      }
      QArrayData::deallocate((QArrayData *)local_160.field1,2,8);
    }
  }
LAB_1001f9087:
  QVariant::~QVariant(local_68);
  if (local_88[0] != (int *)0x0) {
    LOCK();
    *local_88[0] = *local_88[0] + -1;
    local_29 = *local_88[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_88[0] != (int *)0x0)) {
      operator_delete(local_88[0]);
    }
  }
  uVar3 = 0;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001f9100;
    }
    if (*(long *)(local_48 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(local_48,(int)*(undefined8 *)(local_48 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_48);
  }
LAB_1001f9100:
  QVariant::~QVariant(&local_40);
  return uVar3;
}

