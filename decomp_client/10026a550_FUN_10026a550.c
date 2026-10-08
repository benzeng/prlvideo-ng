
undefined8 FUN_10026a550(long param_1)

{
  AnonymousUnion0 AVar1;
  int iVar2;
  QString *pQVar3;
  QStringList *pQVar4;
  void *pvVar5;
  Data *pDVar6;
  Data *pDVar7;
  QArrayData *pQVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 local_f8 [40];
  int *local_d0 [4];
  QVariant local_b0 [2];
  int *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  Data_conflict local_78;
  undefined4 local_70;
  undefined1 local_68;
  QArrayData *local_58;
  Data *local_50;
  AnonymousUnion0 local_48;
  QArrayData *local_40;
  QArrayData *local_38 [2];
  
  pQVar3 = (QString *)CSearchParentHelper::instance();
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(local_38,uVar10);
  pQVar4 = (QStringList *)
           CSearchParentHelper::getParentForMessage(pQVar3,SUB81(local_38,0),(QWidget *)0x0);
  if (*(int *)local_38[0] != -1) {
    if (*(int *)local_38[0] != 0) {
      LOCK();
      *(int *)local_38[0] = *(int *)local_38[0] + -1;
      local_38[1]._7_1_ = *(int *)local_38[0] != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_10026a5d2;
    }
    QArrayData::deallocate(local_38[0],2,8);
  }
LAB_10026a5d2:
  pvVar5 = operator_new(0x38);
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1007b3640(pvVar5,pQVar4,uVar10,param_1,1);
  FUN_1007a1300(&local_40,pvVar5);
  if (*(int *)(local_40 + 4) == 0) {
    iVar2 = CMessageManager::instance();
    local_48.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_50 = (Data *)PTR_shared_null_1021e15e8;
    uVar10 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar10 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_10018d830(&local_58,uVar10);
    FUN_1000341d0(&local_50,&local_58);
    local_98 = (int *)0x0;
    uStack_90 = 0;
    local_80 = 0;
    local_88 = 0;
    local_70 = 0x80000000;
    local_78.field7 = 0;
    local_68 = 1;
    CMessageManager::showMessageBox
              (iVar2,(QWidget *)0x80015188,pQVar4,(QStringList *)&local_48.field0,
               (CSlotInfo *)&local_50,SUB81(&local_98,0));
    QVariant::~QVariant((QVariant *)&local_78);
    if (local_98 != (int *)0x0) {
      LOCK();
      *local_98 = *local_98 + -1;
      local_38[1]._7_1_ = *local_98 != 0;
      UNLOCK();
      if ((!(bool)local_38[1]._7_1_) && (local_98 != (int *)0x0)) {
        operator_delete(local_98);
      }
    }
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_38[1]._7_1_ = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_38[1]._7_1_) goto LAB_10026a965;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_10026a965:
    pDVar6 = local_50;
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_38[1]._7_1_ = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_38[1]._7_1_) goto LAB_10026a9f1;
      }
      iVar2 = *(int *)(local_50 + 0xc);
      if (iVar2 != *(int *)(local_50 + 8)) {
        lVar9 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar2 * -8;
        pDVar7 = local_50 + (long)iVar2 * 8 + 8;
        do {
          pQVar8 = *(QArrayData **)pDVar7;
          if (*(int *)pQVar8 == 0) {
LAB_10026a9d0:
            QArrayData::deallocate(pQVar8,2,8);
          }
          else if (*(int *)pQVar8 != -1) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_38[1]._7_1_ = *(int *)pQVar8 != 0;
            UNLOCK();
            if (!(bool)local_38[1]._7_1_) {
              pQVar8 = *(QArrayData **)pDVar7;
              goto LAB_10026a9d0;
            }
          }
          pDVar7 = pDVar7 + -8;
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0);
      }
      QListData::dispose(pDVar6);
    }
LAB_10026a9f1:
    AVar1 = local_48;
    uVar10 = 0x80000009;
    if (*(int *)local_48.field1 != -1) {
      if (*(int *)local_48.field1 != 0) {
        LOCK();
        *(int *)local_48.field1 = *(int *)local_48.field1 + -1;
        local_38[1]._7_1_ = *(int *)local_48.field1 != 0;
        UNLOCK();
        if ((bool)local_38[1]._7_1_) goto LAB_10026aa81;
      }
      iVar2 = *(int *)(local_48.field1 + 0xc);
      if (iVar2 != *(int *)(local_48.field1 + 8)) {
        lVar9 = (long)*(int *)(local_48.field1 + 8) * 8 + (long)iVar2 * -8;
        pDVar6 = (Data *)(local_48.field1 + (long)iVar2 * 8 + 8);
        do {
          pQVar8 = *(QArrayData **)pDVar6;
          if (*(int *)pQVar8 == 0) {
LAB_10026aa60:
            QArrayData::deallocate(pQVar8,2,8);
          }
          else if (*(int *)pQVar8 != -1) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_38[1]._7_1_ = *(int *)pQVar8 != 0;
            UNLOCK();
            if (!(bool)local_38[1]._7_1_) {
              pQVar8 = *(QArrayData **)pDVar6;
              goto LAB_10026aa60;
            }
          }
          pDVar6 = pDVar6 + -8;
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0);
      }
      QListData::dispose((Data *)AVar1.field1);
    }
    goto LAB_10026aa81;
  }
  local_f8._32_8_ =
       QString::fromAscii_helper("1onMessageAnswered(PRL_RESULT,Messaging::ButtonID)",0x32);
  local_f8._24_4_ = 0x80000000;
  local_f8._16_8_ = (QMetaObject *)0x0;
  FUN_100a1c600(local_d0,param_1,local_f8 + 0x20,local_f8 + 0x10);
  QVariant::~QVariant((QVariant *)(local_f8 + 0x10));
  if (*(int *)local_f8._32_8_ != -1) {
    if (*(int *)local_f8._32_8_ != 0) {
      LOCK();
      *(int *)local_f8._32_8_ = *(int *)local_f8._32_8_ + -1;
      local_38[1]._7_1_ = *(int *)local_f8._32_8_ != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_10026a6b0;
    }
    QArrayData::deallocate((QArrayData *)local_f8._32_8_,2,8);
  }
LAB_10026a6b0:
  iVar2 = CMessageManager::instance();
  local_f8._8_8_ = PTR_shared_null_1021e15e8;
  local_f8._0_8_ = PTR_shared_null_1021e15e8;
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x36c0,pQVar4,(QStringList *)(local_f8 + 8),(CSlotInfo *)local_f8,
             SUB81(local_d0,0));
  uVar10 = local_f8._0_8_;
  if (*(int *)local_f8._0_8_ != -1) {
    if (*(int *)local_f8._0_8_ != 0) {
      LOCK();
      *(int *)local_f8._0_8_ = *(int *)local_f8._0_8_ + -1;
      local_38[1]._7_1_ = *(int *)local_f8._0_8_ != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_10026a791;
    }
    iVar2 = *(int *)(local_f8._0_8_ + 0xc);
    if (iVar2 != *(int *)(local_f8._0_8_ + 8)) {
      lVar9 = (long)*(int *)(local_f8._0_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar6 = (Data *)(local_f8._0_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar8 == 0) {
LAB_10026a770:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_38[1]._7_1_ = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar8 = *(QArrayData **)pDVar6;
            goto LAB_10026a770;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)uVar10);
  }
LAB_10026a791:
  uVar10 = local_f8._8_8_;
  if (*(int *)local_f8._8_8_ != -1) {
    if (*(int *)local_f8._8_8_ != 0) {
      LOCK();
      *(int *)local_f8._8_8_ = *(int *)local_f8._8_8_ + -1;
      local_38[1]._7_1_ = *(int *)local_f8._8_8_ != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_10026a821;
    }
    iVar2 = *(int *)(local_f8._8_8_ + 0xc);
    if (iVar2 != *(int *)(local_f8._8_8_ + 8)) {
      lVar9 = (long)*(int *)(local_f8._8_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar6 = (Data *)(local_f8._8_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar8 == 0) {
LAB_10026a800:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_38[1]._7_1_ = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar8 = *(QArrayData **)pDVar6;
            goto LAB_10026a800;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)uVar10);
  }
LAB_10026a821:
  CAbstractTask::setWaitForSubTaskCompletion();
  QVariant::~QVariant(local_b0);
  if (local_d0[0] != (int *)0x0) {
    LOCK();
    *local_d0[0] = *local_d0[0] + -1;
    local_38[1]._7_1_ = *local_d0[0] != 0;
    UNLOCK();
    if ((!(bool)local_38[1]._7_1_) && (local_d0[0] != (int *)0x0)) {
      operator_delete(local_d0[0]);
    }
  }
  uVar10 = 0;
LAB_10026aa81:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar10;
      }
      local_38[1]._7_1_ = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return uVar10;
}

