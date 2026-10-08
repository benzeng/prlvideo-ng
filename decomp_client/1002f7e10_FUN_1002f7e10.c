
void FUN_1002f7e10(long *param_1,int param_2,int param_3)

{
  AnonymousUnion0 AVar1;
  char cVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  Data *pDVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
  undefined1 local_f0 [40];
  int *local_c8 [4];
  QVariant local_a8 [2];
  Data_conflict local_90;
  undefined4 local_88;
  QArrayData *local_80;
  int *local_78 [4];
  QVariant local_58 [2];
  Data *local_40;
  AnonymousUnion0 local_38;
  undefined1 local_29;
  
  if (param_2 != 7) {
    return;
  }
  iVar3 = CAbstractTask::getCurrentSubTask();
  if (iVar3 != 0) {
    return;
  }
  if (-1 < param_3) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x98);
LAB_1002f7e4e:
    param_3 = 0;
LAB_1002f7e9a:
                    /* WARNING: Could not recover jumptable at 0x0001002f7ea9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_3);
    return;
  }
  cVar2 = FUN_100d80630(1);
  if (cVar2 != '\0') {
    uVar4 = FUN_100dddcf0(param_3);
    FUN_100df99c0("","prl_client_app",0,"Sandbox mode: now app will not call bundle init (error %s)"
                  ,uVar4);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    goto LAB_1002f7e9a;
  }
  if (param_3 != -0x7ffeab79) {
    if (param_3 != -0x7ffeab89) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
      if (param_3 != -0x7ffeac9a) goto LAB_1002f7e9a;
      goto LAB_1002f7e4e;
    }
    iVar3 = CMessageManager::instance();
    local_38.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_40 = (Data *)PTR_shared_null_1021e15e8;
    local_80 = (QArrayData *)QString::fromAscii_helper("1subTaskCompleted(PRL_RESULT)",0x1d);
    local_88 = 0x80000000;
    local_90.field7 = 0;
    FUN_100a1c600(local_78,param_1,&local_80,&local_90);
    CMessageManager::showMessageBox
              (iVar3,(QWidget *)0x80015477,(QStringList *)0x0,(QStringList *)&local_38.field0,
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
        if ((bool)local_29) goto LAB_1002f81d1;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_1002f81d1:
    pDVar5 = local_40;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002f8255;
      }
      iVar3 = *(int *)(local_40 + 0xc);
      if (iVar3 != *(int *)(local_40 + 8)) {
        lVar8 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar3 * -8;
        pDVar6 = local_40 + (long)iVar3 * 8 + 8;
        do {
          pQVar7 = *(QArrayData **)pDVar6;
          if (*(int *)pQVar7 == 0) {
LAB_1002f8234:
            QArrayData::deallocate(pQVar7,2,8);
          }
          else if (*(int *)pQVar7 != -1) {
            LOCK();
            *(int *)pQVar7 = *(int *)pQVar7 + -1;
            local_29 = *(int *)pQVar7 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar7 = *(QArrayData **)pDVar6;
              goto LAB_1002f8234;
            }
          }
          pDVar6 = pDVar6 + -8;
          lVar8 = lVar8 + 8;
        } while (lVar8 != 0);
      }
      QListData::dispose(pDVar5);
    }
LAB_1002f8255:
    AVar1 = local_38;
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
    iVar3 = *(int *)(local_38.field1 + 0xc);
    if (iVar3 != *(int *)(local_38.field1 + 8)) {
      lVar8 = (long)*(int *)(local_38.field1 + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = (Data *)(local_38.field1 + (long)iVar3 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar7 == 0) {
LAB_1002f82b8:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_29 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar7 = *(QArrayData **)pDVar5;
            goto LAB_1002f82b8;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar1.field1);
    return;
  }
  local_f0._32_8_ =
       QString::fromAscii_helper
                 ("1onRestartToCompleteIstallMessageClosed(PRL_RESULT, Messaging::ButtonID)",0x48);
  local_f0._24_4_ = 0x80000000;
  local_f0._16_8_ = (QMetaObject *)0x0;
  FUN_100a1c600(local_c8,param_1,local_f0 + 0x20,local_f0 + 0x10);
  QVariant::~QVariant((QVariant *)(local_f0 + 0x10));
  if (*(int *)local_f0._32_8_ != -1) {
    if (*(int *)local_f0._32_8_ != 0) {
      LOCK();
      *(int *)local_f0._32_8_ = *(int *)local_f0._32_8_ + -1;
      local_29 = *(int *)local_f0._32_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f7f43;
    }
    QArrayData::deallocate((QArrayData *)local_f0._32_8_,2,8);
  }
LAB_1002f7f43:
  iVar3 = CMessageManager::instance();
  local_f0._8_8_ = PTR_shared_null_1021e15e8;
  local_f0._0_8_ = PTR_shared_null_1021e15e8;
  CMessageManager::showMessageBox
            (iVar3,(QWidget *)0x80015487,(QStringList *)0x0,(QStringList *)(local_f0 + 8),
             (CSlotInfo *)local_f0,SUB81(local_c8,0));
  uVar4 = local_f0._0_8_;
  if (*(int *)local_f0._0_8_ != -1) {
    if (*(int *)local_f0._0_8_ != 0) {
      LOCK();
      *(int *)local_f0._0_8_ = *(int *)local_f0._0_8_ + -1;
      local_29 = *(int *)local_f0._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f8012;
    }
    iVar3 = *(int *)(local_f0._0_8_ + 0xc);
    if (iVar3 != *(int *)(local_f0._0_8_ + 8)) {
      lVar8 = (long)*(int *)(local_f0._0_8_ + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = (Data *)(local_f0._0_8_ + (long)iVar3 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar7 == 0) {
LAB_1002f7ff1:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_29 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar7 = *(QArrayData **)pDVar5;
            goto LAB_1002f7ff1;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)uVar4);
  }
LAB_1002f8012:
  uVar4 = local_f0._8_8_;
  if (*(int *)local_f0._8_8_ != -1) {
    if (*(int *)local_f0._8_8_ != 0) {
      LOCK();
      *(int *)local_f0._8_8_ = *(int *)local_f0._8_8_ + -1;
      local_29 = *(int *)local_f0._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f809c;
    }
    iVar3 = *(int *)(local_f0._8_8_ + 0xc);
    if (iVar3 != *(int *)(local_f0._8_8_ + 8)) {
      lVar8 = (long)*(int *)(local_f0._8_8_ + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = (Data *)(local_f0._8_8_ + (long)iVar3 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar7 == 0) {
LAB_1002f807b:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_29 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar7 = *(QArrayData **)pDVar5;
            goto LAB_1002f807b;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)uVar4);
  }
LAB_1002f809c:
  QVariant::~QVariant(local_a8);
  if (local_c8[0] != (int *)0x0) {
    LOCK();
    *local_c8[0] = *local_c8[0] + -1;
    local_29 = *local_c8[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_c8[0] != (int *)0x0)) {
      operator_delete(local_c8[0]);
    }
  }
  return;
}

