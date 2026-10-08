
void FUN_1002ef420(long param_1,int param_2)

{
  int iVar1;
  Data *pDVar2;
  Data *pDVar3;
  undefined8 uVar4;
  QArrayData *pQVar5;
  long *plVar6;
  AnonymousUnion0 AVar7;
  long lVar8;
  Data_conflict local_100;
  undefined4 local_f8;
  QArrayData *local_f0;
  int *local_e8 [4];
  QVariant local_c8 [2];
  undefined1 local_b0 [24];
  QString local_98;
  Data_conflict local_90;
  bool local_88;
  QArrayData *local_80;
  int *local_78 [4];
  QVariant local_58 [2];
  Data *local_40;
  AnonymousUnion0 local_38;
  undefined1 local_29;
  
  FUN_100df99c0("","prl_client_app",0,"Package name request finished with 0x%x",param_2);
  if (param_2 < 0) {
    *(int *)(param_1 + 0x60) = param_2;
    if ((*(byte *)(param_1 + 0x18) & 2) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001002ef9d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x10) + 0xb0))(*(long **)(param_1 + 0x10),param_2);
      return;
    }
    iVar1 = CMessageManager::instance();
    local_38.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_40 = (Data *)PTR_shared_null_1021e15e8;
    local_80 = (QArrayData *)QString::fromAscii_helper("1onErrorMsgClosed()",0x13);
    local_88 = 0x80000000;
    local_90.field7 = 0;
    FUN_100a1c600(local_78,param_1,&local_80,&local_90);
    CMessageManager::showMessageBox
              (iVar1,(QWidget *)0x80015437,(QStringList *)0x0,(QStringList *)&local_38.field0,
               (CSlotInfo *)&local_40,SUB81(local_78,0));
    QVariant::~QVariant(local_58);
    if (local_78[0] != (int *)0x0) {
      LOCK();
      *local_78[0] = *local_78[0] + -1;
      local_29 = *local_78[0] != 0;
      UNLOCK();
      if ((!(bool)local_29) && (local_78[0] != (int *)0x0)) {
        operator_delete(local_78[0]);
      }
    }
    QVariant::~QVariant((QVariant *)&local_90);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_29 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002ef635;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_1002ef635:
    pDVar3 = local_40;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002ef6c1;
      }
      iVar1 = *(int *)(local_40 + 0xc);
      if (iVar1 != *(int *)(local_40 + 8)) {
        lVar8 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
        pDVar2 = local_40 + (long)iVar1 * 8 + 8;
        do {
          pQVar5 = *(QArrayData **)pDVar2;
          if (*(int *)pQVar5 == 0) {
LAB_1002ef6a0:
            QArrayData::deallocate(pQVar5,2,8);
          }
          else if (*(int *)pQVar5 != -1) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + -1;
            local_29 = *(int *)pQVar5 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar5 = *(QArrayData **)pDVar2;
              goto LAB_1002ef6a0;
            }
          }
          pDVar2 = pDVar2 + -8;
          lVar8 = lVar8 + 8;
        } while (lVar8 != 0);
      }
      QListData::dispose(pDVar3);
    }
LAB_1002ef6c1:
    AVar7 = local_38;
    if (*(int *)local_38.field1 == -1) {
      return;
    }
    if (*(int *)local_38.field1 != 0) {
      LOCK();
      *(int *)local_38.field1 = *(int *)local_38.field1 + -1;
      UNLOCK();
      if (*(int *)local_38.field1 != 0) {
        return;
      }
      local_29 = 0;
    }
    iVar1 = *(int *)(local_38.field1 + 0xc);
    if (iVar1 != *(int *)(local_38.field1 + 8)) {
      lVar8 = (long)*(int *)(local_38.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar3 = (Data *)(local_38.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar5 = *(QArrayData **)pDVar3;
        if (*(int *)pQVar5 == 0) {
LAB_1002ef740:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar5 = *(QArrayData **)pDVar3;
            goto LAB_1002ef740;
          }
        }
        pDVar3 = pDVar3 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
LAB_1002ef9a9:
    QListData::dispose((Data *)AVar7.field1);
  }
  else {
    FUN_1002ef170(&local_98);
    QString::operator=((QString *)(param_1 + 0x30),&local_98);
    if (*(int *)local_98.field0_0x0 != -1) {
      if (*(int *)local_98.field0_0x0 != 0) {
        LOCK();
        *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
        local_29 = *(int *)local_98.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002ef4bc;
      }
      QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
    }
LAB_1002ef4bc:
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,"Package URL \'%s\'",
                  (QArrayData *)(local_b0._16_8_ + *(long *)(local_b0._16_8_ + 0x10)));
    if (*(int *)local_b0._16_8_ != -1) {
      if (*(int *)local_b0._16_8_ != 0) {
        LOCK();
        *(int *)local_b0._16_8_ = *(int *)local_b0._16_8_ + -1;
        local_29 = *(int *)local_b0._16_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002ef52a;
      }
      QArrayData::deallocate((QArrayData *)local_b0._16_8_,1,8);
    }
LAB_1002ef52a:
    if (*(int *)(((QString *)(param_1 + 0x30))->field0_0x0 + 4) == 0) {
      *(undefined4 *)(param_1 + 0x60) = 0x80000009;
      if ((*(byte *)(param_1 + 0x18) & 2) == 0) {
        iVar1 = CMessageManager::instance();
        local_b0._8_8_ = PTR_shared_null_1021e15e8;
        local_b0._0_8_ = PTR_shared_null_1021e15e8;
        local_f0 = (QArrayData *)QString::fromAscii_helper("1onErrorMsgClosed()",0x13);
        local_f8 = 0x80000000;
        local_100.field7 = 0;
        FUN_100a1c600(local_e8,param_1,&local_f0,&local_100);
        CMessageManager::showMessageBox
                  (iVar1,(QWidget *)0x80015438,(QStringList *)0x0,(QStringList *)(local_b0 + 8),
                   (CSlotInfo *)local_b0,SUB81(local_e8,0));
        QVariant::~QVariant(local_c8);
        if (local_e8[0] != (int *)0x0) {
          LOCK();
          *local_e8[0] = *local_e8[0] + -1;
          local_29 = *local_e8[0] != 0;
          UNLOCK();
          if ((!(bool)local_29) && (local_e8[0] != (int *)0x0)) {
            operator_delete(local_e8[0]);
          }
        }
        QVariant::~QVariant((QVariant *)&local_100);
        if (*(int *)local_f0 != -1) {
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            local_29 = *(int *)local_f0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1002ef87c;
          }
          QArrayData::deallocate(local_f0,2,8);
        }
LAB_1002ef87c:
        uVar4 = local_b0._0_8_;
        if (*(int *)local_b0._0_8_ != -1) {
          if (*(int *)local_b0._0_8_ != 0) {
            LOCK();
            *(int *)local_b0._0_8_ = *(int *)local_b0._0_8_ + -1;
            local_29 = *(int *)local_b0._0_8_ != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1002ef911;
          }
          iVar1 = *(int *)(local_b0._0_8_ + 0xc);
          if (iVar1 != *(int *)(local_b0._0_8_ + 8)) {
            lVar8 = (long)*(int *)(local_b0._0_8_ + 8) * 8 + (long)iVar1 * -8;
            pDVar3 = (Data *)(local_b0._0_8_ + (long)iVar1 * 8 + 8);
            do {
              pQVar5 = *(QArrayData **)pDVar3;
              if (*(int *)pQVar5 == 0) {
LAB_1002ef8f0:
                QArrayData::deallocate(pQVar5,2,8);
              }
              else if (*(int *)pQVar5 != -1) {
                LOCK();
                *(int *)pQVar5 = *(int *)pQVar5 + -1;
                local_29 = *(int *)pQVar5 != 0;
                UNLOCK();
                if (!(bool)local_29) {
                  pQVar5 = *(QArrayData **)pDVar3;
                  goto LAB_1002ef8f0;
                }
              }
              pDVar3 = pDVar3 + -8;
              lVar8 = lVar8 + 8;
            } while (lVar8 != 0);
          }
          QListData::dispose((Data *)uVar4);
        }
LAB_1002ef911:
        AVar7 = (AnonymousUnion0)local_b0._8_8_;
        if (*(int *)local_b0._8_8_ == -1) {
          return;
        }
        if (*(int *)local_b0._8_8_ != 0) {
          LOCK();
          *(int *)local_b0._8_8_ = *(int *)local_b0._8_8_ + -1;
          UNLOCK();
          if (*(int *)local_b0._8_8_ != 0) {
            return;
          }
          local_29 = 0;
        }
        iVar1 = *(int *)(local_b0._8_8_ + 0xc);
        if (iVar1 != *(int *)(local_b0._8_8_ + 8)) {
          lVar8 = (long)*(int *)(local_b0._8_8_ + 8) * 8 + (long)iVar1 * -8;
          pDVar3 = (Data *)(local_b0._8_8_ + (long)iVar1 * 8 + 8);
          do {
            pQVar5 = *(QArrayData **)pDVar3;
            if (*(int *)pQVar5 == 0) {
LAB_1002ef990:
              QArrayData::deallocate(pQVar5,2,8);
            }
            else if (*(int *)pQVar5 != -1) {
              LOCK();
              *(int *)pQVar5 = *(int *)pQVar5 + -1;
              local_29 = *(int *)pQVar5 != 0;
              UNLOCK();
              if (!(bool)local_29) {
                pQVar5 = *(QArrayData **)pDVar3;
                goto LAB_1002ef990;
              }
            }
            pDVar3 = pDVar3 + -8;
            lVar8 = lVar8 + 8;
          } while (lVar8 != 0);
        }
        goto LAB_1002ef9a9;
      }
      plVar6 = *(long **)(param_1 + 0x10);
      lVar8 = *plVar6;
      uVar4 = 0x80000009;
    }
    else {
      plVar6 = *(long **)(param_1 + 0x10);
      lVar8 = *plVar6;
      uVar4 = 0;
    }
    (**(code **)(lVar8 + 0xb0))(plVar6,uVar4);
  }
  return;
}

