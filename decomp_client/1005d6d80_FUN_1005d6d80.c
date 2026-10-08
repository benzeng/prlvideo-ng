
undefined1 FUN_1005d6d80(long param_1)

{
  undefined *puVar1;
  ExternalRefCountData *pEVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  QStringList *pQVar8;
  long lVar9;
  Data *pDVar10;
  undefined8 uVar11;
  QArrayData *pQVar12;
  QObject *pQVar13;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  undefined1 local_110 [24];
  int *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  Data_conflict local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  CSlotInfo local_b8;
  Data_conflict local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined1 local_68 [48];
  undefined *local_38;
  undefined1 local_29;
  
  cVar4 = QAbstractButton::isChecked();
  if (cVar4 != '\0') {
    local_68._28_4_ = 0;
    cVar4 = FUN_1005d68b0(param_1,local_68 + 0x1c);
    if ((cVar4 == '\0') || (cVar4 = FUN_1005d6b70(param_1,local_68 + 0x1c), cVar4 == '\0')) {
      uVar3 = local_68._28_4_;
      iVar5 = CMessageManager::instance();
      CAbstractWizardPage::wizardCtrl();
      pQVar8 = (QStringList *)CWizardController::parentWidget();
      puVar1 = PTR_shared_null_1021e15e8;
      if (uVar3 != 0x80015176) {
        local_b8.field0_0x0.field0_0x0.field1_0x8 = (QObject *)PTR_shared_null_1021e15e8;
        local_b8.field0_0x0.field0_0x0.field0_0x0 =
             (ExternalRefCountData *)PTR_shared_null_1021e15e8;
        local_f8 = (int *)0x0;
        uStack_f0 = 0;
        local_e0 = 0;
        local_e8 = 0;
        local_d0 = 0x80000000;
        local_d8.field7 = 0;
        local_c8 = 1;
        CMessageManager::showMessageBox
                  (iVar5,(QWidget *)(ulong)(uint)uVar3,pQVar8,
                   (QStringList *)&local_b8.field0_0x0.field0_0x0.field1_0x8,&local_b8,
                   SUB81(&local_f8,0));
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
        pEVar2 = local_b8.field0_0x0.field0_0x0.field0_0x0;
        if (*(int *)local_b8.field0_0x0.field0_0x0.field0_0x0 != -1) {
          if (*(int *)local_b8.field0_0x0.field0_0x0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_b8.field0_0x0.field0_0x0.field0_0x0 =
                 *(int *)local_b8.field0_0x0.field0_0x0.field0_0x0 + -1;
            local_29 = *(int *)local_b8.field0_0x0.field0_0x0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005d74a1;
          }
          iVar5 = *(int *)(local_b8.field0_0x0.field0_0x0.field0_0x0 + 0xc);
          if (iVar5 != *(int *)(local_b8.field0_0x0.field0_0x0.field0_0x0 + 8)) {
            lVar9 = (long)*(int *)(local_b8.field0_0x0.field0_0x0.field0_0x0 + 8) * 8 +
                    (long)iVar5 * -8;
            pDVar10 = (Data *)(local_b8.field0_0x0.field0_0x0.field0_0x0 + (long)iVar5 * 8 + 8);
            do {
              pQVar12 = *(QArrayData **)pDVar10;
              if (*(int *)pQVar12 == 0) {
LAB_1005d7480:
                QArrayData::deallocate(pQVar12,2,8);
              }
              else if (*(int *)pQVar12 != -1) {
                LOCK();
                *(int *)pQVar12 = *(int *)pQVar12 + -1;
                local_29 = *(int *)pQVar12 != 0;
                UNLOCK();
                if (!(bool)local_29) {
                  pQVar12 = *(QArrayData **)pDVar10;
                  goto LAB_1005d7480;
                }
              }
              pDVar10 = pDVar10 + -8;
              lVar9 = lVar9 + 8;
            } while (lVar9 != 0);
          }
          QListData::dispose((Data *)pEVar2);
        }
LAB_1005d74a1:
        pQVar13 = local_b8.field0_0x0.field0_0x0.field1_0x8;
        if (*(int *)local_b8.field0_0x0.field0_0x0.field1_0x8 == -1) {
          return 0;
        }
        if (*(int *)local_b8.field0_0x0.field0_0x0.field1_0x8 != 0) {
          LOCK();
          *(int *)local_b8.field0_0x0.field0_0x0.field1_0x8 =
               *(int *)local_b8.field0_0x0.field0_0x0.field1_0x8 + -1;
          UNLOCK();
          if (*(int *)local_b8.field0_0x0.field0_0x0.field1_0x8 != 0) {
            return 0;
          }
          local_29 = 0;
        }
        iVar5 = *(int *)(local_b8.field0_0x0.field0_0x0.field1_0x8 + 0xc);
        if (iVar5 != *(int *)(local_b8.field0_0x0.field0_0x0.field1_0x8 + 8)) {
          lVar9 = (long)*(int *)(local_b8.field0_0x0.field0_0x0.field1_0x8 + 8) * 8 +
                  (long)iVar5 * -8;
          pDVar10 = (Data *)(local_b8.field0_0x0.field0_0x0.field1_0x8 + (long)iVar5 * 8 + 8);
          do {
            pQVar12 = *(QArrayData **)pDVar10;
            if (*(int *)pQVar12 == 0) {
LAB_1005d7510:
              QArrayData::deallocate(pQVar12,2,8);
            }
            else if (*(int *)pQVar12 != -1) {
              LOCK();
              *(int *)pQVar12 = *(int *)pQVar12 + -1;
              local_29 = *(int *)pQVar12 != 0;
              UNLOCK();
              if (!(bool)local_29) {
                pQVar12 = *(QArrayData **)pDVar10;
                goto LAB_1005d7510;
              }
            }
            pDVar10 = pDVar10 + -8;
            lVar9 = lVar9 + 8;
          } while (lVar9 != 0);
        }
        goto LAB_1005d7529;
      }
      local_68._16_8_ = PTR_shared_null_1021e15e8;
      lVar9 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
      iVar6 = FUN_1005cb7c0(*(undefined4 *)(lVar9 + 0x38));
      QString::number((int)local_68 + 8,iVar6);
      FUN_1000341d0(local_68 + 0x10,local_68 + 8);
      local_68._0_8_ = puVar1;
      local_b8.field1_0x10.field0_0x0 = (QMetaObject *)0x0;
      local_b8._24_8_ = 0;
      local_b8.field3_0x28 = 0;
      local_b8.field2_0x1c.field0_0x0._4_8_ = 0;
      local_80 = 0x80000000;
      local_88.field7 = 0;
      local_78 = 1;
      CMessageManager::showMessageBox
                (iVar5,(QWidget *)0x80015176,pQVar8,(QStringList *)(local_68 + 0x10),
                 (CSlotInfo *)local_68,(bool)((char)&local_b8 + '\x10'));
      QVariant::~QVariant((QVariant *)&local_88);
      if (local_b8.field1_0x10.field0_0x0 != (QMetaObject *)0x0) {
        LOCK();
        *(int *)local_b8.field1_0x10.field0_0x0 = *(int *)local_b8.field1_0x10.field0_0x0 + -1;
        local_29 = *(int *)local_b8.field1_0x10.field0_0x0 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (local_b8.field1_0x10.field0_0x0 != (QMetaObject *)0x0)) {
          operator_delete(local_b8.field1_0x10.field0_0x0);
        }
      }
      uVar7 = local_68._0_8_;
      if (*(int *)local_68._0_8_ != -1) {
        if (*(int *)local_68._0_8_ != 0) {
          LOCK();
          *(int *)local_68._0_8_ = *(int *)local_68._0_8_ + -1;
          local_29 = *(int *)local_68._0_8_ != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005d7291;
        }
        iVar5 = *(int *)(local_68._0_8_ + 0xc);
        if (iVar5 != *(int *)(local_68._0_8_ + 8)) {
          lVar9 = (long)*(int *)(local_68._0_8_ + 8) * 8 + (long)iVar5 * -8;
          pDVar10 = (Data *)(local_68._0_8_ + (long)iVar5 * 8 + 8);
          do {
            pQVar12 = *(QArrayData **)pDVar10;
            if (*(int *)pQVar12 == 0) {
LAB_1005d7270:
              QArrayData::deallocate(pQVar12,2,8);
            }
            else if (*(int *)pQVar12 != -1) {
              LOCK();
              *(int *)pQVar12 = *(int *)pQVar12 + -1;
              local_29 = *(int *)pQVar12 != 0;
              UNLOCK();
              if (!(bool)local_29) {
                pQVar12 = *(QArrayData **)pDVar10;
                goto LAB_1005d7270;
              }
            }
            pDVar10 = pDVar10 + -8;
            lVar9 = lVar9 + 8;
          } while (lVar9 != 0);
        }
        QListData::dispose((Data *)uVar7);
      }
LAB_1005d7291:
      if (*(int *)local_68._8_8_ != -1) {
        if (*(int *)local_68._8_8_ != 0) {
          LOCK();
          *(int *)local_68._8_8_ = *(int *)local_68._8_8_ + -1;
          local_29 = *(int *)local_68._8_8_ != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005d72c1;
        }
        QArrayData::deallocate((QArrayData *)local_68._8_8_,2,8);
      }
LAB_1005d72c1:
      pQVar13 = (QObject *)local_68._16_8_;
      if (*(int *)local_68._16_8_ == -1) {
        return 0;
      }
      if (*(int *)local_68._16_8_ != 0) {
        LOCK();
        *(int *)local_68._16_8_ = *(int *)local_68._16_8_ + -1;
        UNLOCK();
        if (*(int *)local_68._16_8_ != 0) {
          return 0;
        }
        local_29 = 0;
      }
      iVar5 = *(int *)(local_68._16_8_ + 0xc);
      if (iVar5 != *(int *)(local_68._16_8_ + 8)) {
        lVar9 = (long)*(int *)(local_68._16_8_ + 8) * 8 + (long)iVar5 * -8;
        pDVar10 = (Data *)(local_68._16_8_ + (long)iVar5 * 8 + 8);
        do {
          pQVar12 = *(QArrayData **)pDVar10;
          if (*(int *)pQVar12 == 0) {
LAB_1005d7340:
            QArrayData::deallocate(pQVar12,2,8);
          }
          else if (*(int *)pQVar12 != -1) {
            LOCK();
            *(int *)pQVar12 = *(int *)pQVar12 + -1;
            local_29 = *(int *)pQVar12 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar12 = *(QArrayData **)pDVar10;
              goto LAB_1005d7340;
            }
          }
          pDVar10 = pDVar10 + -8;
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0);
      }
LAB_1005d7529:
      QListData::dispose((Data *)pQVar13);
      return 0;
    }
    uVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
    QLineEdit::text();
    QString::trimmed();
    QLineEdit::text();
    QString::trimmed();
    QLineEdit::text();
    if (1 < *(int *)local_118 + 1U) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + 1;
      local_29 = *(int *)local_118 != 0;
      UNLOCK();
    }
    if (1 < *(int *)local_128 + 1U) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + 1;
      local_29 = *(int *)local_128 != 0;
      UNLOCK();
    }
    if (1 < *(int *)local_138 + 1U) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + 1;
      local_29 = *(int *)local_138 != 0;
      UNLOCK();
    }
    FUN_1005b98b0(uVar7,local_110);
    FUN_1001eb920(local_110);
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        local_29 = *(int *)local_138 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005d6efd;
      }
      QArrayData::deallocate(local_138,2,8);
    }
LAB_1005d6efd:
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        local_29 = *(int *)local_128 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005d6f33;
      }
      QArrayData::deallocate(local_128,2,8);
    }
LAB_1005d6f33:
    if (*(int *)local_130 != -1) {
      if (*(int *)local_130 != 0) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + -1;
        local_29 = *(int *)local_130 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005d6f69;
      }
      QArrayData::deallocate(local_130,2,8);
    }
LAB_1005d6f69:
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_29 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005d6f9f;
      }
      QArrayData::deallocate(local_118,2,8);
    }
LAB_1005d6f9f:
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_29 = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005d6fd5;
      }
      QArrayData::deallocate(local_120,2,8);
    }
LAB_1005d6fd5:
    uVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
    uVar11 = 2;
    goto LAB_1005d70f9;
  }
  uVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
  puVar1 = PTR_shared_null_1021e1288;
  local_68._32_8_ = PTR_shared_null_1021e1288;
  iVar5 = *(int *)PTR_shared_null_1021e1288;
  if (1 < iVar5 + 1U) {
    LOCK();
    *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + 1;
    local_29 = *(int *)puVar1 != 0;
    UNLOCK();
    iVar5 = *(int *)puVar1;
  }
  local_68._40_8_ = puVar1;
  if (1 < iVar5 + 1U) {
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + 1;
    local_29 = *(int *)puVar1 != 0;
    UNLOCK();
    iVar5 = *(int *)puVar1;
  }
  local_38 = puVar1;
  if (1 < iVar5 + 1U) {
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + 1;
    local_29 = *(int *)puVar1 != 0;
    UNLOCK();
  }
  FUN_1005b98b0(uVar7,local_68 + 0x20);
  FUN_1001eb920(local_68 + 0x20);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 == 0) {
LAB_1005d7075:
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
    else {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_29 = *(int *)puVar1 != 0;
      UNLOCK();
      if (!(bool)local_29) goto LAB_1005d7075;
    }
    if (*(int *)puVar1 != -1) {
      if (*(int *)puVar1 == 0) {
LAB_1005d70a4:
        QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
      }
      else {
        LOCK();
        *(int *)puVar1 = *(int *)puVar1 + -1;
        local_29 = *(int *)puVar1 != 0;
        UNLOCK();
        if (!(bool)local_29) goto LAB_1005d70a4;
      }
      if (*(int *)puVar1 != -1) {
        if (*(int *)puVar1 != 0) {
          LOCK();
          *(int *)puVar1 = *(int *)puVar1 + -1;
          local_29 = *(int *)puVar1 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005d70e9;
        }
        QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
      }
    }
  }
LAB_1005d70e9:
  uVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
  uVar11 = 0;
LAB_1005d70f9:
  FUN_1005b9810(uVar7,uVar11);
  return 1;
}

