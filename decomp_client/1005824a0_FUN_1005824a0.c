
void FUN_1005824a0(QStringList *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  AnonymousUnion0 AVar4;
  char cVar5;
  int iVar6;
  Data *pDVar7;
  Data *pDVar8;
  QArrayData *pQVar9;
  long lVar10;
  int *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  Data_conflict local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined1 local_b8 [32];
  QMetaObject *local_98;
  bool local_90;
  int *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  Data_conflict local_68;
  undefined4 local_60;
  undefined1 local_58;
  Data *local_50;
  AnonymousUnion0 local_48;
  QString local_40 [2];
  
  FUN_1005823f0(local_40,param_1);
  if (*(int *)(local_40[0].field0_0x0 + 4) == 0) {
    iVar6 = CMessageManager::instance();
    local_48.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_50 = (Data *)PTR_shared_null_1021e15e8;
    local_88 = (int *)0x0;
    uStack_80 = 0;
    local_70 = 0;
    local_78 = 0;
    local_60 = 0x80000000;
    local_68.field7 = 0;
    local_58 = 1;
    CMessageManager::showMessageBox
              (iVar6,(QWidget *)0x80015249,param_1,(QStringList *)&local_48.field0,
               (CSlotInfo *)&local_50,SUB81(&local_88,0));
    QVariant::~QVariant((QVariant *)&local_68);
    if (local_88 != (int *)0x0) {
      LOCK();
      *local_88 = *local_88 + -1;
      local_40[1].field0_0x0._7_1_ = *local_88 != 0;
      UNLOCK();
      if ((!(bool)local_40[1].field0_0x0._7_1_) && (local_88 != (int *)0x0)) {
        operator_delete(local_88);
      }
    }
    pDVar8 = local_50;
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_40[1].field0_0x0._7_1_ = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_40[1].field0_0x0._7_1_) goto LAB_100582691;
      }
      iVar6 = *(int *)(local_50 + 0xc);
      if (iVar6 != *(int *)(local_50 + 8)) {
        lVar10 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar6 * -8;
        pDVar7 = local_50 + (long)iVar6 * 8 + 8;
        do {
          pQVar9 = *(QArrayData **)pDVar7;
          if (*(int *)pQVar9 == 0) {
LAB_100582670:
            QArrayData::deallocate(pQVar9,2,8);
          }
          else if (*(int *)pQVar9 != -1) {
            LOCK();
            *(int *)pQVar9 = *(int *)pQVar9 + -1;
            local_40[1].field0_0x0._7_1_ = *(int *)pQVar9 != 0;
            UNLOCK();
            if (!(bool)local_40[1].field0_0x0._7_1_) {
              pQVar9 = *(QArrayData **)pDVar7;
              goto LAB_100582670;
            }
          }
          pDVar7 = pDVar7 + -8;
          lVar10 = lVar10 + 8;
        } while (lVar10 != 0);
      }
      QListData::dispose(pDVar8);
    }
LAB_100582691:
    AVar4 = local_48;
    if (*(int *)local_48.field1 != -1) {
      if (*(int *)local_48.field1 != 0) {
        LOCK();
        *(int *)local_48.field1 = *(int *)local_48.field1 + -1;
        local_40[1].field0_0x0._7_1_ = *(int *)local_48.field1 != 0;
        UNLOCK();
        if ((bool)local_40[1].field0_0x0._7_1_) goto LAB_10058294b;
      }
      iVar6 = *(int *)(local_48.field1 + 0xc);
      if (iVar6 != *(int *)(local_48.field1 + 8)) {
        lVar10 = (long)*(int *)(local_48.field1 + 8) * 8 + (long)iVar6 * -8;
        pDVar8 = (Data *)(local_48.field1 + (long)iVar6 * 8 + 8);
        do {
          pQVar9 = *(QArrayData **)pDVar8;
          if (*(int *)pQVar9 == 0) {
LAB_100582700:
            QArrayData::deallocate(pQVar9,2,8);
          }
          else if (*(int *)pQVar9 != -1) {
            LOCK();
            *(int *)pQVar9 = *(int *)pQVar9 + -1;
            local_40[1].field0_0x0._7_1_ = *(int *)pQVar9 != 0;
            UNLOCK();
            if (!(bool)local_40[1].field0_0x0._7_1_) {
              pQVar9 = *(QArrayData **)pDVar8;
              goto LAB_100582700;
            }
          }
          pDVar8 = pDVar8 + -8;
          lVar10 = lVar10 + 8;
        } while (lVar10 != 0);
      }
      QListData::dispose((Data *)AVar4.field1);
    }
    goto LAB_10058294b;
  }
  FUN_10055a620(local_b8 + 0x10,param_1 + 0xd);
  local_b8._24_8_ = local_b8._16_8_ + (long)*(int *)(local_b8._16_8_ + 8) * 8 + 0x10;
  local_98 = (QMetaObject *)(local_b8._16_8_ + (long)*(int *)(local_b8._16_8_ + 0xc) * 8 + 0x10);
  local_90 = 1;
  iVar6 = 2;
  if (*(int *)(local_b8._16_8_ + 8) != *(int *)(local_b8._16_8_ + 0xc)) {
    do {
      local_90 = 1;
      cVar5 = operator==(*(QString **)local_b8._24_8_,local_40);
      if (cVar5 != '\0') {
        iVar6 = CMessageManager::instance();
        puVar2 = PTR_shared_null_1021e15e8;
        local_b8._8_8_ = PTR_shared_null_1021e15e8;
        FUN_1000341d0(local_b8 + 8,local_40);
        local_b8._0_8_ = puVar2;
        local_f8 = (int *)0x0;
        uStack_f0 = 0;
        local_e0 = 0;
        local_e8 = 0;
        local_d0 = 0x80000000;
        local_d8.field7 = 0;
        local_c8 = 1;
        CMessageManager::showMessageBox
                  (iVar6,(QWidget *)0x80015250,param_1,(QStringList *)(local_b8 + 8),
                   (CSlotInfo *)local_b8,SUB81(&local_f8,0));
        QVariant::~QVariant((QVariant *)&local_d8);
        if (local_f8 != (int *)0x0) {
          LOCK();
          *local_f8 = *local_f8 + -1;
          local_40[1].field0_0x0._7_1_ = *local_f8 != 0;
          UNLOCK();
          if ((!(bool)local_40[1].field0_0x0._7_1_) && (local_f8 != (int *)0x0)) {
            operator_delete(local_f8);
          }
        }
        uVar3 = local_b8._0_8_;
        if (*(int *)local_b8._0_8_ == -1) goto LAB_100582891;
        if (*(int *)local_b8._0_8_ != 0) {
          LOCK();
          *(int *)local_b8._0_8_ = *(int *)local_b8._0_8_ + -1;
          local_40[1].field0_0x0._7_1_ = *(int *)local_b8._0_8_ != 0;
          UNLOCK();
          if ((bool)local_40[1].field0_0x0._7_1_) goto LAB_100582891;
        }
        iVar6 = *(int *)(local_b8._0_8_ + 0xc);
        if (iVar6 == *(int *)(local_b8._0_8_ + 8)) goto LAB_100582889;
        lVar10 = (long)*(int *)(local_b8._0_8_ + 8) * 8 + (long)iVar6 * -8;
        pDVar8 = (Data *)(local_b8._0_8_ + (long)iVar6 * 8 + 8);
        goto LAB_100582850;
      }
      local_b8._24_8_ = local_b8._24_8_ + 8;
      local_90 = 1;
    } while ((QMetaObject *)local_b8._24_8_ != local_98);
  }
  goto LAB_100582931;
LAB_100582850:
  do {
    pQVar9 = *(QArrayData **)pDVar8;
    if (*(int *)pQVar9 == 0) {
LAB_100582870:
      QArrayData::deallocate(pQVar9,2,8);
    }
    else if (*(int *)pQVar9 != -1) {
      LOCK();
      *(int *)pQVar9 = *(int *)pQVar9 + -1;
      local_40[1].field0_0x0._7_1_ = *(int *)pQVar9 != 0;
      UNLOCK();
      if (!(bool)local_40[1].field0_0x0._7_1_) {
        pQVar9 = *(QArrayData **)pDVar8;
        goto LAB_100582870;
      }
    }
    pDVar8 = pDVar8 + -8;
    lVar10 = lVar10 + 8;
  } while (lVar10 != 0);
LAB_100582889:
  QListData::dispose((Data *)uVar3);
LAB_100582891:
  uVar3 = local_b8._8_8_;
  iVar6 = 1;
  if (*(int *)local_b8._8_8_ != -1) {
    if (*(int *)local_b8._8_8_ != 0) {
      LOCK();
      *(int *)local_b8._8_8_ = *(int *)local_b8._8_8_ + -1;
      local_40[1].field0_0x0._7_1_ = *(int *)local_b8._8_8_ != 0;
      UNLOCK();
      if ((bool)local_40[1].field0_0x0._7_1_) goto LAB_100582931;
    }
    iVar1 = *(int *)(local_b8._8_8_ + 0xc);
    if (iVar1 != *(int *)(local_b8._8_8_ + 8)) {
      lVar10 = (long)*(int *)(local_b8._8_8_ + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_b8._8_8_ + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100582910:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_40[1].field0_0x0._7_1_ = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_40[1].field0_0x0._7_1_) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100582910;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)uVar3);
  }
LAB_100582931:
  FUN_1000fe670(local_b8 + 0x10);
  if (iVar6 == 2) {
    QDialog::accept();
  }
LAB_10058294b:
  if (*(int *)local_40[0].field0_0x0 != -1) {
    if (*(int *)local_40[0].field0_0x0 != 0) {
      LOCK();
      *(int *)local_40[0].field0_0x0 = *(int *)local_40[0].field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40[0].field0_0x0 != 0) {
        return;
      }
      local_40[1].field0_0x0._7_1_ = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40[0].field0_0x0,2,8);
  }
  return;
}

