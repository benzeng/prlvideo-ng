
void FUN_100254f20(long *param_1,int param_2)

{
  ExternalRefCountData *pEVar1;
  AnonymousUnion0 AVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  QStringList *pQVar6;
  Data *pDVar7;
  Data *pDVar8;
  QArrayData *pQVar9;
  QObject *pQVar10;
  long lVar11;
  int *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_170;
  Data_conflict local_168;
  undefined4 local_160;
  undefined1 local_158;
  CSlotInfo local_148;
  Data_conflict local_118;
  undefined4 local_110;
  undefined1 local_108;
  CSlotInfo local_f8;
  Data_conflict local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined1 local_a8 [48];
  undefined8 local_78;
  undefined4 local_70;
  Data_conflict local_68;
  undefined4 local_60;
  undefined1 local_58;
  Data *local_48;
  AnonymousUnion0 local_40;
  undefined1 local_31;
  
  if (param_2 < 0) {
    iVar3 = CMessageManager::instance();
    pQVar6 = (QStringList *)0x0;
    if ((param_1[3] != 0) && (pQVar6 = (QStringList *)0x0, *(int *)(param_1[3] + 4) != 0)) {
      pQVar6 = (QStringList *)param_1[4];
    }
    local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_48 = (Data *)PTR_shared_null_1021e15e8;
    local_a8._32_8_ = (int *)0x0;
    local_a8._40_8_ = 0;
    local_70 = 0;
    local_78 = 0;
    local_60 = 0x80000000;
    local_68.field7 = 0;
    local_58 = 1;
    CMessageManager::showMessageBox
              (iVar3,(QWidget *)0x80015278,pQVar6,(QStringList *)&local_40.field0,
               (CSlotInfo *)&local_48,(bool)((char)local_a8 + ' '));
    QVariant::~QVariant((QVariant *)&local_68);
    if ((int *)local_a8._32_8_ != (int *)0x0) {
      LOCK();
      *(int *)local_a8._32_8_ = *(int *)local_a8._32_8_ + -1;
      local_31 = *(int *)local_a8._32_8_ != 0;
      UNLOCK();
      if ((!(bool)local_31) && ((int *)local_a8._32_8_ != (int *)0x0)) {
        operator_delete((void *)local_a8._32_8_);
      }
    }
    pDVar8 = local_48;
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002551b1;
      }
      iVar3 = *(int *)(local_48 + 0xc);
      if (iVar3 != *(int *)(local_48 + 8)) {
        lVar11 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar3 * -8;
        pDVar7 = local_48 + (long)iVar3 * 8 + 8;
        do {
          pQVar9 = *(QArrayData **)pDVar7;
          if (*(int *)pQVar9 == 0) {
LAB_100255190:
            QArrayData::deallocate(pQVar9,2,8);
          }
          else if (*(int *)pQVar9 != -1) {
            LOCK();
            *(int *)pQVar9 = *(int *)pQVar9 + -1;
            local_31 = *(int *)pQVar9 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar9 = *(QArrayData **)pDVar7;
              goto LAB_100255190;
            }
          }
          pDVar7 = pDVar7 + -8;
          lVar11 = lVar11 + 8;
        } while (lVar11 != 0);
      }
      QListData::dispose(pDVar8);
    }
LAB_1002551b1:
    AVar2 = local_40;
    if (*(int *)local_40.field1 != -1) {
      if (*(int *)local_40.field1 != 0) {
        LOCK();
        *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
        local_31 = *(int *)local_40.field1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100255241;
      }
      iVar3 = *(int *)(local_40.field1 + 0xc);
      if (iVar3 != *(int *)(local_40.field1 + 8)) {
        lVar11 = (long)*(int *)(local_40.field1 + 8) * 8 + (long)iVar3 * -8;
        pDVar8 = (Data *)(local_40.field1 + (long)iVar3 * 8 + 8);
        do {
          pQVar9 = *(QArrayData **)pDVar8;
          if (*(int *)pQVar9 == 0) {
LAB_100255220:
            QArrayData::deallocate(pQVar9,2,8);
          }
          else if (*(int *)pQVar9 != -1) {
            LOCK();
            *(int *)pQVar9 = *(int *)pQVar9 + -1;
            local_31 = *(int *)pQVar9 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar9 = *(QArrayData **)pDVar8;
              goto LAB_100255220;
            }
          }
          pDVar8 = pDVar8 + -8;
          lVar11 = lVar11 + 8;
        } while (lVar11 != 0);
      }
      QListData::dispose((Data *)AVar2.field1);
    }
LAB_100255241:
    uVar5 = FUN_100dddcf0(param_2);
    FUN_100df99c0("","prl_client_app",0,
                  "[Task Retrieve Password] Retrieve password has failed with RC = %.8X [%s]",
                  param_2,uVar5);
    goto LAB_100255828;
  }
  QVariant::QVariant((QVariant *)(local_a8 + 0x10),(QVariant *)(*(long *)(param_1[7] + 0x28) + 0x18)
                    );
  iVar3 = QVariant::toInt((bool *)(local_a8 + 0x10));
  QVariant::~QVariant((QVariant *)(local_a8 + 0x10));
  if (iVar3 == -1) {
    iVar4 = CMessageManager::instance();
    pQVar6 = (QStringList *)0x0;
    if ((param_1[3] != 0) && (pQVar6 = (QStringList *)0x0, *(int *)(param_1[3] + 4) != 0)) {
      pQVar6 = (QStringList *)param_1[4];
    }
    local_a8._8_8_ = PTR_shared_null_1021e15e8;
    local_a8._0_8_ = PTR_shared_null_1021e15e8;
    local_f8.field1_0x10.field0_0x0 = (QMetaObject *)0x0;
    local_f8._24_8_ = 0;
    local_f8.field3_0x28 = 0;
    local_f8.field2_0x1c.field0_0x0._4_8_ = 0;
    local_c0 = 0x80000000;
    local_c8.field7 = 0;
    local_b8 = 1;
    CMessageManager::showMessageBox
              (iVar4,(QWidget *)0x80015279,pQVar6,(QStringList *)(local_a8 + 8),
               (CSlotInfo *)local_a8,(bool)((char)&local_f8 + '\x10'));
    QVariant::~QVariant((QVariant *)&local_c8);
    if (local_f8.field1_0x10.field0_0x0 != (QMetaObject *)0x0) {
      LOCK();
      *(int *)local_f8.field1_0x10.field0_0x0 = *(int *)local_f8.field1_0x10.field0_0x0 + -1;
      local_31 = *(int *)local_f8.field1_0x10.field0_0x0 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_f8.field1_0x10.field0_0x0 != (QMetaObject *)0x0)) {
        operator_delete(local_f8.field1_0x10.field0_0x0);
      }
    }
    uVar5 = local_a8._0_8_;
    if (*(int *)local_a8._0_8_ != -1) {
      if (*(int *)local_a8._0_8_ != 0) {
        LOCK();
        *(int *)local_a8._0_8_ = *(int *)local_a8._0_8_ + -1;
        local_31 = *(int *)local_a8._0_8_ != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100255587;
      }
      iVar4 = *(int *)(local_a8._0_8_ + 0xc);
      if (iVar4 != *(int *)(local_a8._0_8_ + 8)) {
        lVar11 = (long)*(int *)(local_a8._0_8_ + 8) * 8 + (long)iVar4 * -8;
        pDVar8 = (Data *)(local_a8._0_8_ + (long)iVar4 * 8 + 8);
        do {
          pQVar9 = *(QArrayData **)pDVar8;
          if (*(int *)pQVar9 == 0) {
LAB_100255560:
            QArrayData::deallocate(pQVar9,2,8);
          }
          else if (*(int *)pQVar9 != -1) {
            LOCK();
            *(int *)pQVar9 = *(int *)pQVar9 + -1;
            local_31 = *(int *)pQVar9 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar9 = *(QArrayData **)pDVar8;
              goto LAB_100255560;
            }
          }
          pDVar8 = pDVar8 + -8;
          lVar11 = lVar11 + 8;
        } while (lVar11 != 0);
      }
      QListData::dispose((Data *)uVar5);
    }
LAB_100255587:
    pQVar10 = (QObject *)local_a8._8_8_;
    if (*(int *)local_a8._8_8_ != -1) {
      if (*(int *)local_a8._8_8_ != 0) {
        LOCK();
        *(int *)local_a8._8_8_ = *(int *)local_a8._8_8_ + -1;
        local_31 = *(int *)local_a8._8_8_ != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100255807;
      }
      iVar4 = *(int *)(local_a8._8_8_ + 0xc);
      if (iVar4 != *(int *)(local_a8._8_8_ + 8)) {
        lVar11 = (long)*(int *)(local_a8._8_8_ + 8) * 8 + (long)iVar4 * -8;
        pDVar8 = (Data *)(local_a8._8_8_ + (long)iVar4 * 8 + 8);
        do {
          pQVar9 = *(QArrayData **)pDVar8;
          if (*(int *)pQVar9 == 0) {
LAB_1002556b0:
            QArrayData::deallocate(pQVar9,2,8);
          }
          else if (*(int *)pQVar9 != -1) {
            LOCK();
            *(int *)pQVar9 = *(int *)pQVar9 + -1;
            local_31 = *(int *)pQVar9 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar9 = *(QArrayData **)pDVar8;
              goto LAB_1002556b0;
            }
          }
          pDVar8 = pDVar8 + -8;
          lVar11 = lVar11 + 8;
        } while (lVar11 != 0);
      }
      goto LAB_1002557f9;
    }
  }
  else {
    iVar4 = CMessageManager::instance();
    pQVar6 = (QStringList *)0x0;
    if ((param_1[3] != 0) && (pQVar6 = (QStringList *)0x0, *(int *)(param_1[3] + 4) != 0)) {
      pQVar6 = (QStringList *)param_1[4];
    }
    if (iVar3 == 0) {
      local_f8.field0_0x0.field0_0x0.field1_0x8 = (QObject *)PTR_shared_null_1021e15e8;
      local_f8.field0_0x0.field0_0x0.field0_0x0 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
      local_148.field1_0x10.field0_0x0 = (QMetaObject *)0x0;
      local_148._24_8_ = 0;
      local_148.field3_0x28 = 0;
      local_148.field2_0x1c.field0_0x0._4_8_ = 0;
      local_110 = 0x80000000;
      local_118.field7 = 0;
      local_108 = 1;
      CMessageManager::showMessageBox
                (iVar4,(QWidget *)0x3bb6,pQVar6,
                 (QStringList *)&local_f8.field0_0x0.field0_0x0.field1_0x8,&local_f8,
                 (bool)((char)&local_148 + '\x10'));
      QVariant::~QVariant((QVariant *)&local_118);
      if (local_148.field1_0x10.field0_0x0 != (QMetaObject *)0x0) {
        LOCK();
        *(int *)local_148.field1_0x10.field0_0x0 = *(int *)local_148.field1_0x10.field0_0x0 + -1;
        local_31 = *(int *)local_148.field1_0x10.field0_0x0 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (local_148.field1_0x10.field0_0x0 != (QMetaObject *)0x0)) {
          operator_delete(local_148.field1_0x10.field0_0x0);
        }
      }
      pEVar1 = local_f8.field0_0x0.field0_0x0.field0_0x0;
      if (*(int *)local_f8.field0_0x0.field0_0x0.field0_0x0 != -1) {
        if (*(int *)local_f8.field0_0x0.field0_0x0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_f8.field0_0x0.field0_0x0.field0_0x0 =
               *(int *)local_f8.field0_0x0.field0_0x0.field0_0x0 + -1;
          local_31 = *(int *)local_f8.field0_0x0.field0_0x0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100255757;
        }
        iVar4 = *(int *)(local_f8.field0_0x0.field0_0x0.field0_0x0 + 0xc);
        if (iVar4 != *(int *)(local_f8.field0_0x0.field0_0x0.field0_0x0 + 8)) {
          lVar11 = (long)*(int *)(local_f8.field0_0x0.field0_0x0.field0_0x0 + 8) * 8 +
                   (long)iVar4 * -8;
          pDVar8 = (Data *)(local_f8.field0_0x0.field0_0x0.field0_0x0 + (long)iVar4 * 8 + 8);
          do {
            pQVar9 = *(QArrayData **)pDVar8;
            if (*(int *)pQVar9 == 0) {
LAB_100255730:
              QArrayData::deallocate(pQVar9,2,8);
            }
            else if (*(int *)pQVar9 != -1) {
              LOCK();
              *(int *)pQVar9 = *(int *)pQVar9 + -1;
              local_31 = *(int *)pQVar9 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                pQVar9 = *(QArrayData **)pDVar8;
                goto LAB_100255730;
              }
            }
            pDVar8 = pDVar8 + -8;
            lVar11 = lVar11 + 8;
          } while (lVar11 != 0);
        }
        QListData::dispose((Data *)pEVar1);
      }
LAB_100255757:
      pQVar10 = local_f8.field0_0x0.field0_0x0.field1_0x8;
      if (*(int *)local_f8.field0_0x0.field0_0x0.field1_0x8 != -1) {
        if (*(int *)local_f8.field0_0x0.field0_0x0.field1_0x8 != 0) {
          LOCK();
          *(int *)local_f8.field0_0x0.field0_0x0.field1_0x8 =
               *(int *)local_f8.field0_0x0.field0_0x0.field1_0x8 + -1;
          local_31 = *(int *)local_f8.field0_0x0.field0_0x0.field1_0x8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100255807;
        }
        iVar4 = *(int *)(local_f8.field0_0x0.field0_0x0.field1_0x8 + 0xc);
        if (iVar4 != *(int *)(local_f8.field0_0x0.field0_0x0.field1_0x8 + 8)) {
          lVar11 = (long)*(int *)(local_f8.field0_0x0.field0_0x0.field1_0x8 + 8) * 8 +
                   (long)iVar4 * -8;
          pDVar8 = (Data *)(local_f8.field0_0x0.field0_0x0.field1_0x8 + (long)iVar4 * 8 + 8);
          do {
            pQVar9 = *(QArrayData **)pDVar8;
            if (*(int *)pQVar9 == 0) {
LAB_1002557e0:
              QArrayData::deallocate(pQVar9,2,8);
            }
            else if (*(int *)pQVar9 != -1) {
              LOCK();
              *(int *)pQVar9 = *(int *)pQVar9 + -1;
              local_31 = *(int *)pQVar9 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                pQVar9 = *(QArrayData **)pDVar8;
                goto LAB_1002557e0;
              }
            }
            pDVar8 = pDVar8 + -8;
            lVar11 = lVar11 + 8;
          } while (lVar11 != 0);
        }
        goto LAB_1002557f9;
      }
    }
    else {
      local_148.field0_0x0.field0_0x0.field1_0x8 = (QObject *)PTR_shared_null_1021e15e8;
      local_148.field0_0x0.field0_0x0.field0_0x0 = (ExternalRefCountData *)PTR_shared_null_1021e15e8
      ;
      local_188 = (int *)0x0;
      uStack_180 = 0;
      local_170 = 0;
      local_178 = 0;
      local_160 = 0x80000000;
      local_168.field7 = 0;
      local_158 = 1;
      CMessageManager::showMessageBox
                (iVar4,(QWidget *)0x80015278,pQVar6,
                 (QStringList *)&local_148.field0_0x0.field0_0x0.field1_0x8,&local_148,
                 SUB81(&local_188,0));
      QVariant::~QVariant((QVariant *)&local_168);
      if (local_188 != (int *)0x0) {
        LOCK();
        *local_188 = *local_188 + -1;
        local_31 = *local_188 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (local_188 != (int *)0x0)) {
          operator_delete(local_188);
        }
      }
      pEVar1 = local_148.field0_0x0.field0_0x0.field0_0x0;
      if (*(int *)local_148.field0_0x0.field0_0x0.field0_0x0 != -1) {
        if (*(int *)local_148.field0_0x0.field0_0x0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_148.field0_0x0.field0_0x0.field0_0x0 =
               *(int *)local_148.field0_0x0.field0_0x0.field0_0x0 + -1;
          local_31 = *(int *)local_148.field0_0x0.field0_0x0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002554d7;
        }
        iVar4 = *(int *)(local_148.field0_0x0.field0_0x0.field0_0x0 + 0xc);
        if (iVar4 != *(int *)(local_148.field0_0x0.field0_0x0.field0_0x0 + 8)) {
          lVar11 = (long)*(int *)(local_148.field0_0x0.field0_0x0.field0_0x0 + 8) * 8 +
                   (long)iVar4 * -8;
          pDVar8 = (Data *)(local_148.field0_0x0.field0_0x0.field0_0x0 + (long)iVar4 * 8 + 8);
          do {
            pQVar9 = *(QArrayData **)pDVar8;
            if (*(int *)pQVar9 == 0) {
LAB_1002554b0:
              QArrayData::deallocate(pQVar9,2,8);
            }
            else if (*(int *)pQVar9 != -1) {
              LOCK();
              *(int *)pQVar9 = *(int *)pQVar9 + -1;
              local_31 = *(int *)pQVar9 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                pQVar9 = *(QArrayData **)pDVar8;
                goto LAB_1002554b0;
              }
            }
            pDVar8 = pDVar8 + -8;
            lVar11 = lVar11 + 8;
          } while (lVar11 != 0);
        }
        QListData::dispose((Data *)pEVar1);
      }
LAB_1002554d7:
      pQVar10 = local_148.field0_0x0.field0_0x0.field1_0x8;
      if (*(int *)local_148.field0_0x0.field0_0x0.field1_0x8 != -1) {
        if (*(int *)local_148.field0_0x0.field0_0x0.field1_0x8 != 0) {
          LOCK();
          *(int *)local_148.field0_0x0.field0_0x0.field1_0x8 =
               *(int *)local_148.field0_0x0.field0_0x0.field1_0x8 + -1;
          local_31 = *(int *)local_148.field0_0x0.field0_0x0.field1_0x8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100255807;
        }
        iVar4 = *(int *)(local_148.field0_0x0.field0_0x0.field1_0x8 + 0xc);
        if (iVar4 != *(int *)(local_148.field0_0x0.field0_0x0.field1_0x8 + 8)) {
          lVar11 = (long)*(int *)(local_148.field0_0x0.field0_0x0.field1_0x8 + 8) * 8 +
                   (long)iVar4 * -8;
          pDVar8 = (Data *)(local_148.field0_0x0.field0_0x0.field1_0x8 + (long)iVar4 * 8 + 8);
          do {
            pQVar9 = *(QArrayData **)pDVar8;
            if (*(int *)pQVar9 == 0) {
LAB_100255620:
              QArrayData::deallocate(pQVar9,2,8);
            }
            else if (*(int *)pQVar9 != -1) {
              LOCK();
              *(int *)pQVar9 = *(int *)pQVar9 + -1;
              local_31 = *(int *)pQVar9 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                pQVar9 = *(QArrayData **)pDVar8;
                goto LAB_100255620;
              }
            }
            pDVar8 = pDVar8 + -8;
            lVar11 = lVar11 + 8;
          } while (lVar11 != 0);
        }
LAB_1002557f9:
        QListData::dispose((Data *)pQVar10);
      }
    }
  }
LAB_100255807:
  FUN_100df99c0("","prl_client_app",0,
                "[Task Retrieve Password] Retrieve password completed with result [%d]",iVar3);
LAB_100255828:
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  return;
}

