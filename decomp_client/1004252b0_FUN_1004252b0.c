
void FUN_1004252b0(QStringList *param_1)

{
  ExternalRefCountData *pEVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  Data *pDVar7;
  Data *pDVar8;
  AnonymousUnion0 AVar9;
  QArrayData *pQVar10;
  long lVar11;
  int *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  Data_conflict local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  CSlotInfo local_98;
  Data_conflict local_68;
  undefined4 local_60;
  undefined1 local_58;
  Data *local_50;
  AnonymousUnion0 local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (((param_1[0xd].field0_0x0.field1 == (Data *)0x0) ||
      (*(int *)((long)param_1[0xd].field0_0x0.field1 + 4) == 0)) ||
     (param_1[0xe].field0_0x0.field1 == (Data *)0x0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Hard Disk instance is null.");
    return;
  }
  cVar2 = CVmHardDisk::isEncrypted();
  if (cVar2 != '\0') {
    FUN_100424c30(param_1);
    return;
  }
  CPrlFileDevSelectorWidget::getCurrentSystemName();
  QString::trimmed();
  iVar4 = *(int *)(local_38 + 4);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10042537e;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10042537e:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004253ae;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004253ae:
  uVar3 = QComboBox::currentIndex();
  iVar6 = 0;
  if (uVar3 < 3) {
    iVar6 = uVar3 + 1;
  }
  if (iVar4 != 0) {
    if (iVar6 == 1) {
      plVar5 = (long *)QDialogButtonBox::button
                                 (*(undefined8 *)((long)param_1[0xc].field0_0x0.field1 + 0xd8),0x400
                                 );
      (**(code **)(*plVar5 + 0x68))(plVar5,0);
      QWidget::setEnabled(SUB81(*(undefined8 *)((long)param_1[0xc].field0_0x0.field1 + 8),0));
      QProgressBar::setValue((int)*(undefined8 *)((long)param_1[0xc].field0_0x0.field1 + 200));
      (**(code **)(**(long **)((long)param_1[0xc].field0_0x0.field1 + 200) + 0x68))
                (*(long **)((long)param_1[0xc].field0_0x0.field1 + 200),1);
    }
    iVar4 = QComboBox::currentIndex();
    if (iVar4 == 2) {
      AVar9.field1 = (Data *)0x0;
      if ((param_1[0xd].field0_0x0.field1 != (Data *)0x0) &&
         (AVar9.field1 = (Data *)0x0, *(int *)((long)param_1[0xd].field0_0x0.field1 + 4) != 0)) {
        AVar9 = (AnonymousUnion0)param_1[0xe].field0_0x0.field1;
      }
      FUN_10013bd60(*(undefined8 *)((long)param_1[0xc].field0_0x0.field1 + 0x90),AVar9.field1);
    }
    FUN_100838050(param_1,0);
    FUN_1008380a0(param_1);
    return;
  }
  iVar4 = CMessageManager::instance();
  if (iVar6 != 3) {
    local_98.field0_0x0.field0_0x0.field1_0x8 = (QObject *)PTR_shared_null_1021e15e8;
    local_98.field0_0x0.field0_0x0.field0_0x0 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
    local_d8 = (int *)0x0;
    uStack_d0 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_b0 = 0x80000000;
    local_b8.field7 = 0;
    local_a8 = 1;
    CMessageManager::showMessageBox
              (iVar4,(QWidget *)0x3ab4,param_1,
               (QStringList *)&local_98.field0_0x0.field0_0x0.field1_0x8,&local_98,
               SUB81(&local_d8,0));
    QVariant::~QVariant((QVariant *)&local_b8);
    if (local_d8 != (int *)0x0) {
      LOCK();
      *local_d8 = *local_d8 + -1;
      local_29 = *local_d8 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (local_d8 != (int *)0x0)) {
        operator_delete(local_d8);
      }
    }
    pEVar1 = local_98.field0_0x0.field0_0x0.field0_0x0;
    if (*(int *)local_98.field0_0x0.field0_0x0.field0_0x0 != -1) {
      if (*(int *)local_98.field0_0x0.field0_0x0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_98.field0_0x0.field0_0x0.field0_0x0 =
             *(int *)local_98.field0_0x0.field0_0x0.field0_0x0 + -1;
        local_29 = *(int *)local_98.field0_0x0.field0_0x0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10042576a;
      }
      iVar4 = *(int *)(local_98.field0_0x0.field0_0x0.field0_0x0 + 0xc);
      if (iVar4 != *(int *)(local_98.field0_0x0.field0_0x0.field0_0x0 + 8)) {
        lVar11 = (long)*(int *)(local_98.field0_0x0.field0_0x0.field0_0x0 + 8) * 8 +
                 (long)iVar4 * -8;
        pDVar8 = (Data *)(local_98.field0_0x0.field0_0x0.field0_0x0 + (long)iVar4 * 8 + 8);
        do {
          pQVar10 = *(QArrayData **)pDVar8;
          if (*(int *)pQVar10 == 0) {
LAB_100425749:
            QArrayData::deallocate(pQVar10,2,8);
          }
          else if (*(int *)pQVar10 != -1) {
            LOCK();
            *(int *)pQVar10 = *(int *)pQVar10 + -1;
            local_29 = *(int *)pQVar10 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar10 = *(QArrayData **)pDVar8;
              goto LAB_100425749;
            }
          }
          pDVar8 = pDVar8 + -8;
          lVar11 = lVar11 + 8;
        } while (lVar11 != 0);
      }
      QListData::dispose((Data *)pEVar1);
    }
LAB_10042576a:
    AVar9 = (AnonymousUnion0)local_98.field0_0x0.field0_0x0.field1_0x8;
    if (*(int *)local_98.field0_0x0.field0_0x0.field1_0x8 == -1) {
      return;
    }
    if (*(int *)local_98.field0_0x0.field0_0x0.field1_0x8 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0.field0_0x0.field1_0x8 =
           *(int *)local_98.field0_0x0.field0_0x0.field1_0x8 + -1;
      UNLOCK();
      if (*(int *)local_98.field0_0x0.field0_0x0.field1_0x8 != 0) {
        return;
      }
      local_29 = 0;
    }
    iVar4 = *(int *)(local_98.field0_0x0.field0_0x0.field1_0x8 + 0xc);
    if (iVar4 != *(int *)(local_98.field0_0x0.field0_0x0.field1_0x8 + 8)) {
      lVar11 = (long)*(int *)(local_98.field0_0x0.field0_0x0.field1_0x8 + 8) * 8 + (long)iVar4 * -8;
      pDVar8 = (Data *)(local_98.field0_0x0.field0_0x0.field1_0x8 + (long)iVar4 * 8 + 8);
      do {
        pQVar10 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar10 == 0) {
LAB_1004257db:
          QArrayData::deallocate(pQVar10,2,8);
        }
        else if (*(int *)pQVar10 != -1) {
          LOCK();
          *(int *)pQVar10 = *(int *)pQVar10 + -1;
          local_29 = *(int *)pQVar10 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar10 = *(QArrayData **)pDVar8;
            goto LAB_1004257db;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    goto LAB_1004257f4;
  }
  local_48.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_50 = (Data *)PTR_shared_null_1021e15e8;
  local_98.field1_0x10.field0_0x0 = (QMetaObject *)0x0;
  local_98._24_8_ = 0;
  local_98.field3_0x28 = 0;
  local_98.field2_0x1c.field0_0x0._4_8_ = 0;
  local_60 = 0x80000000;
  local_68.field7 = 0;
  local_58 = 1;
  CMessageManager::showMessageBox
            (iVar4,(QWidget *)0x80015170,param_1,(QStringList *)&local_48.field0,
             (CSlotInfo *)&local_50,(bool)((char)&local_98 + '\x10'));
  QVariant::~QVariant((QVariant *)&local_68);
  if (local_98.field1_0x10.field0_0x0 != (QMetaObject *)0x0) {
    LOCK();
    *(int *)local_98.field1_0x10.field0_0x0 = *(int *)local_98.field1_0x10.field0_0x0 + -1;
    local_29 = *(int *)local_98.field1_0x10.field0_0x0 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_98.field1_0x10.field0_0x0 != (QMetaObject *)0x0)) {
      operator_delete(local_98.field1_0x10.field0_0x0);
    }
  }
  pDVar8 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004255a4;
    }
    iVar4 = *(int *)(local_50 + 0xc);
    if (iVar4 != *(int *)(local_50 + 8)) {
      lVar11 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar4 * -8;
      pDVar7 = local_50 + (long)iVar4 * 8 + 8;
      do {
        pQVar10 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar10 == 0) {
LAB_100425583:
          QArrayData::deallocate(pQVar10,2,8);
        }
        else if (*(int *)pQVar10 != -1) {
          LOCK();
          *(int *)pQVar10 = *(int *)pQVar10 + -1;
          local_29 = *(int *)pQVar10 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar10 = *(QArrayData **)pDVar7;
            goto LAB_100425583;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose(pDVar8);
  }
LAB_1004255a4:
  AVar9 = local_48;
  if (*(int *)local_48.field1 == -1) {
    return;
  }
  if (*(int *)local_48.field1 != 0) {
    LOCK();
    *(int *)local_48.field1 = *(int *)local_48.field1 + -1;
    UNLOCK();
    if (*(int *)local_48.field1 != 0) {
      return;
    }
    local_29 = 0;
  }
  iVar4 = *(int *)(local_48.field1 + 0xc);
  if (iVar4 != *(int *)(local_48.field1 + 8)) {
    lVar11 = (long)*(int *)(local_48.field1 + 8) * 8 + (long)iVar4 * -8;
    pDVar8 = (Data *)(local_48.field1 + (long)iVar4 * 8 + 8);
    do {
      pQVar10 = *(QArrayData **)pDVar8;
      if (*(int *)pQVar10 == 0) {
LAB_100425613:
        QArrayData::deallocate(pQVar10,2,8);
      }
      else if (*(int *)pQVar10 != -1) {
        LOCK();
        *(int *)pQVar10 = *(int *)pQVar10 + -1;
        local_29 = *(int *)pQVar10 != 0;
        UNLOCK();
        if (!(bool)local_29) {
          pQVar10 = *(QArrayData **)pDVar8;
          goto LAB_100425613;
        }
      }
      pDVar8 = pDVar8 + -8;
      lVar11 = lVar11 + 8;
    } while (lVar11 != 0);
  }
LAB_1004257f4:
  QListData::dispose((Data *)AVar9.field1);
  return;
}

