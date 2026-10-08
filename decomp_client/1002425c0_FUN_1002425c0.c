
void FUN_1002425c0(long param_1,int param_2)

{
  undefined *puVar1;
  AnonymousUnion0 AVar2;
  int iVar3;
  undefined8 uVar4;
  QString *pQVar5;
  Data *pDVar6;
  undefined8 uVar7;
  QArrayData *pQVar8;
  long lVar9;
  uint in_stack_fffffffffffffdac;
  QArrayData *local_238;
  QUrl local_230 [8];
  int *local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined4 local_210;
  Data_conflict local_208;
  undefined4 local_200;
  undefined1 local_1f8;
  int *local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  Data_conflict local_1c8;
  undefined4 local_1c0;
  undefined1 local_1b8;
  AnonymousUnion0 local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  undefined1 local_190 [40];
  QVariant local_168;
  undefined1 local_158;
  int *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_130;
  Data_conflict local_128;
  undefined4 local_120;
  undefined1 local_118;
  undefined1 local_108 [24];
  AnonymousUnion0 local_f0;
  int *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  Data_conflict local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  int *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  Data_conflict local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined1 local_70 [32];
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar4 = FUN_100370280();
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_40,uVar7);
  FUN_1003705c0(uVar4,&local_40,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100242642;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100242642:
  puVar1 = PTR_shared_null_1021e15e8;
  if (param_2 == 0x18a8e) {
    pQVar5 = (QString *)0x3ae9;
    if (*(int *)(param_1 + 0x2c) != 0) {
      pQVar5 = (QString *)0x3aed;
    }
  }
  else {
    if (param_2 != 0x18a8d) {
      return;
    }
    if (*(char *)(param_1 + 0x68) != '\0') {
      local_50 = (QArrayData *)
                 QString::fromAscii_helper
                           ("http://www.parallels.com/products/desktop/pdfm12-p2v-apple-assistant-instructions-@LOCALE@"
                            ,0x5a);
      QLocale::QLocale((QLocale *)(local_70 + 0x18));
      FUN_100d3f730(&local_48,&local_50,local_70 + 0x18);
      QLocale::~QLocale((QLocale *)(local_70 + 0x18));
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100242994;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_100242994:
      iVar3 = CMessageManager::instance();
      uVar7 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar7 = *(undefined8 *)(param_1 + 0x20);
      }
      FUN_100188480(local_70 + 0x10,uVar7);
      local_70._8_8_ = PTR_shared_null_1021e15e8;
      local_70._0_8_ = PTR_shared_null_1021e15e8;
      FUN_1000341d0(local_70,&local_48);
      local_a8 = (int *)0x0;
      uStack_a0 = 0;
      local_90 = 0;
      local_98 = 0;
      local_80 = 0x80000000;
      local_88.field7 = 0;
      local_78 = 1;
      local_e8 = (int *)0x0;
      uStack_e0 = 0;
      local_d0 = 0;
      local_d8 = 0;
      local_c0 = 0x80000000;
      local_c8.field7 = 0;
      local_b8 = 1;
      CMessageManager::showMessageBox
                (iVar3,(QString *)0x3c9d,(QStringList *)(local_70 + 0x10),
                 (QStringList *)(local_70 + 8),(CSlotInfo *)local_70,SUB81(&local_a8,0),
                 (QWidget *)((ulong)in_stack_fffffffffffffdac << 0x20),(CSlotInfo *)0x0);
      QVariant::~QVariant((QVariant *)&local_c8);
      if (local_e8 != (int *)0x0) {
        LOCK();
        *local_e8 = *local_e8 + -1;
        local_31 = *local_e8 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (local_e8 != (int *)0x0)) {
          operator_delete(local_e8);
        }
      }
      QVariant::~QVariant((QVariant *)&local_88);
      if (local_a8 != (int *)0x0) {
        LOCK();
        *local_a8 = *local_a8 + -1;
        local_31 = *local_a8 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (local_a8 != (int *)0x0)) {
          operator_delete(local_a8);
        }
      }
      uVar7 = local_70._0_8_;
      if (*(int *)local_70._0_8_ != -1) {
        if (*(int *)local_70._0_8_ != 0) {
          LOCK();
          *(int *)local_70._0_8_ = *(int *)local_70._0_8_ + -1;
          local_31 = *(int *)local_70._0_8_ != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100242b81;
        }
        iVar3 = *(int *)(local_70._0_8_ + 0xc);
        if (iVar3 != *(int *)(local_70._0_8_ + 8)) {
          lVar9 = (long)*(int *)(local_70._0_8_ + 8) * 8 + (long)iVar3 * -8;
          pDVar6 = (Data *)(local_70._0_8_ + (long)iVar3 * 8 + 8);
          do {
            pQVar8 = *(QArrayData **)pDVar6;
            if (*(int *)pQVar8 == 0) {
LAB_100242b60:
              QArrayData::deallocate(pQVar8,2,8);
            }
            else if (*(int *)pQVar8 != -1) {
              LOCK();
              *(int *)pQVar8 = *(int *)pQVar8 + -1;
              local_31 = *(int *)pQVar8 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                pQVar8 = *(QArrayData **)pDVar6;
                goto LAB_100242b60;
              }
            }
            pDVar6 = pDVar6 + -8;
            lVar9 = lVar9 + 8;
          } while (lVar9 != 0);
        }
        QListData::dispose((Data *)uVar7);
      }
LAB_100242b81:
      uVar7 = local_70._8_8_;
      if (*(int *)local_70._8_8_ != -1) {
        if (*(int *)local_70._8_8_ != 0) {
          LOCK();
          *(int *)local_70._8_8_ = *(int *)local_70._8_8_ + -1;
          local_31 = *(int *)local_70._8_8_ != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100242c11;
        }
        iVar3 = *(int *)(local_70._8_8_ + 0xc);
        if (iVar3 != *(int *)(local_70._8_8_ + 8)) {
          lVar9 = (long)*(int *)(local_70._8_8_ + 8) * 8 + (long)iVar3 * -8;
          pDVar6 = (Data *)(local_70._8_8_ + (long)iVar3 * 8 + 8);
          do {
            pQVar8 = *(QArrayData **)pDVar6;
            if (*(int *)pQVar8 == 0) {
LAB_100242bf0:
              QArrayData::deallocate(pQVar8,2,8);
            }
            else if (*(int *)pQVar8 != -1) {
              LOCK();
              *(int *)pQVar8 = *(int *)pQVar8 + -1;
              local_31 = *(int *)pQVar8 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                pQVar8 = *(QArrayData **)pDVar6;
                goto LAB_100242bf0;
              }
            }
            pDVar6 = pDVar6 + -8;
            lVar9 = lVar9 + 8;
          } while (lVar9 != 0);
        }
        QListData::dispose((Data *)uVar7);
      }
LAB_100242c11:
      if (*(int *)local_70._16_8_ != -1) {
        if (*(int *)local_70._16_8_ != 0) {
          LOCK();
          *(int *)local_70._16_8_ = *(int *)local_70._16_8_ + -1;
          local_31 = *(int *)local_70._16_8_ != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100242c41;
        }
        QArrayData::deallocate((QArrayData *)local_70._16_8_,2,8);
      }
LAB_100242c41:
      if (*(int *)local_48 == -1) {
        return;
      }
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        if (*(int *)local_48 != 0) {
          return;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_48,2,8);
      return;
    }
    pQVar5 = (QString *)0x3ae8;
    if (*(int *)(param_1 + 0x2c) != 0) {
      pQVar5 = (QString *)0x3aec;
    }
  }
  local_f0.field1 = (Data *)PTR_shared_null_1021e15e8;
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10018d830(local_108 + 0x10,uVar7);
  FUN_1000341d0(&local_f0,local_108 + 0x10);
  if (*(int *)local_108._16_8_ != -1) {
    if (*(int *)local_108._16_8_ != 0) {
      LOCK();
      *(int *)local_108._16_8_ = *(int *)local_108._16_8_ + -1;
      local_31 = *(int *)local_108._16_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002426da;
    }
    QArrayData::deallocate((QArrayData *)local_108._16_8_,2,8);
  }
LAB_1002426da:
  if (param_2 != 0x18a8d) {
    local_190._0_8_ = puVar1;
    if (*(int *)(param_1 + 0x2c) == 0) {
      FUN_100116020(&local_198);
      FUN_1000341d0(local_190,&local_198);
      if (*(int *)local_198 != -1) {
        if (*(int *)local_198 != 0) {
          LOCK();
          *(int *)local_198 = *(int *)local_198 + -1;
          local_31 = *(int *)local_198 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100242d3e;
        }
        QArrayData::deallocate(local_198,2,8);
      }
    }
    else {
      FUN_1001160f0(&local_1a0);
      FUN_1000341d0(local_190,&local_1a0);
      if (*(int *)local_1a0 != -1) {
        if (*(int *)local_1a0 != 0) {
          LOCK();
          *(int *)local_1a0 = *(int *)local_1a0 + -1;
          local_31 = *(int *)local_1a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100242d3e;
        }
        QArrayData::deallocate(local_1a0,2,8);
      }
    }
LAB_100242d3e:
    iVar3 = CMessageManager::instance();
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100188480(&local_1a8,uVar7);
    local_1e8 = (int *)0x0;
    uStack_1e0 = 0;
    local_1d0 = 0;
    local_1d8 = 0;
    local_1c0 = 0x80000000;
    local_1c8.field7 = 0;
    local_1b8 = 1;
    local_228 = (int *)0x0;
    uStack_220 = 0;
    local_210 = 0;
    local_218 = 0;
    local_200 = 0x80000000;
    local_208.field7 = 0;
    local_1f8 = 1;
    CMessageManager::showMessageBox
              (iVar3,pQVar5,(QStringList *)&local_1a8.field0,(QStringList *)&local_f0.field0,
               (CSlotInfo *)local_190,SUB81(&local_1e8,0),
               (QWidget *)((ulong)in_stack_fffffffffffffdac << 0x20),(CSlotInfo *)0x0);
    QVariant::~QVariant((QVariant *)&local_208);
    if (local_228 != (int *)0x0) {
      LOCK();
      *local_228 = *local_228 + -1;
      local_31 = *local_228 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_228 != (int *)0x0)) {
        operator_delete(local_228);
      }
    }
    QVariant::~QVariant((QVariant *)&local_1c8);
    if (local_1e8 != (int *)0x0) {
      LOCK();
      *local_1e8 = *local_1e8 + -1;
      local_31 = *local_1e8 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_1e8 != (int *)0x0)) {
        operator_delete(local_1e8);
      }
    }
    if (*(int *)local_1a8.field1 != -1) {
      if (*(int *)local_1a8.field1 != 0) {
        LOCK();
        *(int *)local_1a8.field1 = *(int *)local_1a8.field1 + -1;
        local_31 = *(int *)local_1a8.field1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100242ecc;
      }
      QArrayData::deallocate((QArrayData *)local_1a8.field1,2,8);
    }
LAB_100242ecc:
    if (param_2 == 0x18a8e) {
      if (*(int *)(param_1 + 0x2c) == 0) {
        FUN_100116020(&local_238);
      }
      else {
        FUN_1001160f0(&local_238);
      }
      QUrl::QUrl(local_230,&local_238,0);
      QDesktopServices::openUrl(local_230);
      QUrl::~QUrl(local_230);
      if (*(int *)local_238 != -1) {
        if (*(int *)local_238 != 0) {
          LOCK();
          *(int *)local_238 = *(int *)local_238 + -1;
          local_31 = *(int *)local_238 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100242f77;
        }
        QArrayData::deallocate(local_238,2,8);
      }
    }
LAB_100242f77:
    uVar7 = local_190._0_8_;
    if (*(int *)local_190._0_8_ != -1) {
      if (*(int *)local_190._0_8_ != 0) {
        LOCK();
        *(int *)local_190._0_8_ = *(int *)local_190._0_8_ + -1;
        local_31 = *(int *)local_190._0_8_ != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100243011;
      }
      iVar3 = *(int *)(local_190._0_8_ + 0xc);
      if (iVar3 != *(int *)(local_190._0_8_ + 8)) {
        lVar9 = (long)*(int *)(local_190._0_8_ + 8) * 8 + (long)iVar3 * -8;
        pDVar6 = (Data *)(local_190._0_8_ + (long)iVar3 * 8 + 8);
        do {
          pQVar8 = *(QArrayData **)pDVar6;
          if (*(int *)pQVar8 == 0) {
LAB_100242ff0:
            QArrayData::deallocate(pQVar8,2,8);
          }
          else if (*(int *)pQVar8 != -1) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_31 = *(int *)pQVar8 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar8 = *(QArrayData **)pDVar6;
              goto LAB_100242ff0;
            }
          }
          pDVar6 = pDVar6 + -8;
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0);
      }
      QListData::dispose((Data *)uVar7);
    }
    goto LAB_100243011;
  }
  iVar3 = CMessageManager::instance();
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(local_108 + 8,uVar7);
  local_108._0_8_ = puVar1;
  local_148 = (int *)0x0;
  uStack_140 = 0;
  local_130 = 0;
  local_138 = 0;
  local_120 = 0x80000000;
  local_128.field7 = 0;
  local_118 = 1;
  local_190._8_8_ = (QObject *)0x0;
  local_190._16_8_ = (QMetaObject *)0x0;
  local_190._32_4_ = 0;
  local_190._24_8_ = 0;
  local_168.field0_0x0.field1_0x8.bitField0_30 = 0x80000000;
  local_168.field0_0x0.field0_0x0.field7 = 0;
  local_158 = 1;
  CMessageManager::showMessageBox
            (iVar3,pQVar5,(QStringList *)(local_108 + 8),(QStringList *)&local_f0.field0,
             (CSlotInfo *)local_108,SUB81(&local_148,0),
             (QWidget *)((ulong)in_stack_fffffffffffffdac << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant(&local_168);
  if ((QObject *)local_190._8_8_ != (QObject *)0x0) {
    LOCK();
    *(int *)local_190._8_8_ = *(int *)local_190._8_8_ + -1;
    local_31 = *(int *)local_190._8_8_ != 0;
    UNLOCK();
    if ((!(bool)local_31) && ((QObject *)local_190._8_8_ != (QObject *)0x0)) {
      operator_delete((void *)local_190._8_8_);
    }
  }
  QVariant::~QVariant((QVariant *)&local_128);
  if (local_148 != (int *)0x0) {
    LOCK();
    *local_148 = *local_148 + -1;
    local_31 = *local_148 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_148 != (int *)0x0)) {
      operator_delete(local_148);
    }
  }
  uVar7 = local_108._0_8_;
  if (*(int *)local_108._0_8_ != -1) {
    if (*(int *)local_108._0_8_ != 0) {
      LOCK();
      *(int *)local_108._0_8_ = *(int *)local_108._0_8_ + -1;
      local_31 = *(int *)local_108._0_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002428d1;
    }
    iVar3 = *(int *)(local_108._0_8_ + 0xc);
    if (iVar3 != *(int *)(local_108._0_8_ + 8)) {
      lVar9 = (long)*(int *)(local_108._0_8_ + 8) * 8 + (long)iVar3 * -8;
      pDVar6 = (Data *)(local_108._0_8_ + (long)iVar3 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar8 == 0) {
LAB_1002428b0:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar6;
            goto LAB_1002428b0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)uVar7);
  }
LAB_1002428d1:
  if (*(int *)local_108._8_8_ != -1) {
    if (*(int *)local_108._8_8_ != 0) {
      LOCK();
      *(int *)local_108._8_8_ = *(int *)local_108._8_8_ + -1;
      local_31 = *(int *)local_108._8_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100243011;
    }
    QArrayData::deallocate((QArrayData *)local_108._8_8_,2,8);
  }
LAB_100243011:
  AVar2 = local_f0;
  if (*(int *)local_f0.field1 != -1) {
    if (*(int *)local_f0.field1 != 0) {
      LOCK();
      *(int *)local_f0.field1 = *(int *)local_f0.field1 + -1;
      UNLOCK();
      if (*(int *)local_f0.field1 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar3 = *(int *)(local_f0.field1 + 0xc);
    if (iVar3 != *(int *)(local_f0.field1 + 8)) {
      lVar9 = (long)*(int *)(local_f0.field1 + 8) * 8 + (long)iVar3 * -8;
      pDVar6 = (Data *)(local_f0.field1 + (long)iVar3 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar8 == 0) {
LAB_100243080:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar6;
            goto LAB_100243080;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)AVar2.field1);
  }
  return;
}

