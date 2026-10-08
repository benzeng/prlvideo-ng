
int FUN_1002f73f0(QObject *param_1)

{
  AnonymousUnion0 AVar1;
  char cVar2;
  int iVar3;
  QObject *pQVar4;
  undefined8 uVar5;
  Data *pDVar6;
  Data *pDVar7;
  QArrayData *pQVar8;
  long lVar9;
  undefined1 local_f8 [40];
  int *local_d0 [4];
  QVariant local_b0 [2];
  Data_conflict local_98;
  undefined4 local_90;
  QArrayData *local_88;
  int *local_80 [4];
  QVariant local_60 [2];
  Data *local_48;
  AnonymousUnion0 local_40;
  QMetaObject *local_38 [2];
  
  if (DAT_102310930 == (QObject *)0x0) {
    pQVar4 = operator_new(0x18);
    FUN_1001e5440(pQVar4);
    DAT_102273630 = 1;
    DAT_102310930 = pQVar4;
  }
  pQVar4 = DAT_102310930;
  cVar2 = FUN_1001e4c30(DAT_102310930);
  if ((cVar2 == '\0') && (iVar3 = FUN_1001e5550(pQVar4,7), iVar3 == -0x7fffffed)) {
    return -0x7fffffff;
  }
  QObject::connect(local_38,pQVar4,"2stepFinished(int, PRL_RESULT)",param_1,
                   "1onInitThreadStepFinished(int, PRL_RESULT)",2);
  if (local_38[0] != (QMetaObject *)0x0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)local_38);
  iVar3 = FUN_1001e5550(pQVar4,7);
  if (iVar3 == -0x7fffffed) {
    CAbstractTask::setWaitForSubTaskCompletion();
    return 0;
  }
  QObject::disconnect(pQVar4,"2stepFinished(int, PRL_RESULT)",param_1,
                      "1onInitThreadStepFinished(int, PRL_RESULT)");
  if (-1 < iVar3) {
    CAbstractTask::clearSubTaskList();
    return 0;
  }
  cVar2 = FUN_100d80630(1);
  if (cVar2 != '\0') {
    uVar5 = FUN_100dddcf0(iVar3);
    FUN_100df99c0("","prl_client_app",0,
                  "Sandbox mode: now app will not call bundle init ( error %s )",uVar5);
    return iVar3;
  }
  if (iVar3 == -0x7ffeac9a) {
    return 0;
  }
  if (iVar3 != -0x7ffeab79) {
    if (iVar3 != -0x7ffeab89) {
      return iVar3;
    }
    CAbstractTask::setWaitForSubTaskCompletion();
    iVar3 = CMessageManager::instance();
    local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_48 = (Data *)PTR_shared_null_1021e15e8;
    local_88 = (QArrayData *)QString::fromAscii_helper("1subTaskCompleted(PRL_RESULT)",0x1d);
    local_90 = 0x80000000;
    local_98.field7 = 0;
    FUN_100a1c600(local_80,param_1,&local_88,&local_98);
    CMessageManager::showMessageBox
              (iVar3,(QWidget *)0x80015477,(QStringList *)0x0,(QStringList *)&local_40.field0,
               (CSlotInfo *)&local_48,SUB81(local_80,0));
    QVariant::~QVariant(local_60);
    if (local_80[0] != (int *)0x0) {
      LOCK();
      *local_80[0] = *local_80[0] + -1;
      local_38[1]._7_1_ = *local_80[0] != 0;
      UNLOCK();
      if ((!(bool)local_38[1]._7_1_) && (local_80[0] != (int *)0x0)) {
        operator_delete(local_80[0]);
      }
    }
    QVariant::~QVariant((QVariant *)&local_98);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_38[1]._7_1_ = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_38[1]._7_1_) goto LAB_1002f7878;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_1002f7878:
    pDVar6 = local_48;
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_38[1]._7_1_ = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_38[1]._7_1_) goto LAB_1002f78fc;
      }
      iVar3 = *(int *)(local_48 + 0xc);
      if (iVar3 != *(int *)(local_48 + 8)) {
        lVar9 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar3 * -8;
        pDVar7 = local_48 + (long)iVar3 * 8 + 8;
        do {
          pQVar8 = *(QArrayData **)pDVar7;
          if (*(int *)pQVar8 == 0) {
LAB_1002f78db:
            QArrayData::deallocate(pQVar8,2,8);
          }
          else if (*(int *)pQVar8 != -1) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_38[1]._7_1_ = *(int *)pQVar8 != 0;
            UNLOCK();
            if (!(bool)local_38[1]._7_1_) {
              pQVar8 = *(QArrayData **)pDVar7;
              goto LAB_1002f78db;
            }
          }
          pDVar7 = pDVar7 + -8;
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0);
      }
      QListData::dispose(pDVar6);
    }
LAB_1002f78fc:
    AVar1 = local_40;
    if (*(int *)local_40.field1 == -1) {
      return 0;
    }
    if (*(int *)local_40.field1 != 0) {
      LOCK();
      *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
      UNLOCK();
      if (*(int *)local_40.field1 != 0) {
        return 0;
      }
      local_38[1]._7_1_ = 0;
    }
    iVar3 = *(int *)(local_40.field1 + 0xc);
    if (iVar3 != *(int *)(local_40.field1 + 8)) {
      lVar9 = (long)*(int *)(local_40.field1 + 8) * 8 + (long)iVar3 * -8;
      pDVar6 = (Data *)(local_40.field1 + (long)iVar3 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar8 == 0) {
LAB_1002f7967:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_38[1]._7_1_ = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar8 = *(QArrayData **)pDVar6;
            goto LAB_1002f7967;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)AVar1.field1);
    return 0;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  local_f8._32_8_ =
       QString::fromAscii_helper
                 ("1onRestartToCompleteIstallMessageClosed(PRL_RESULT, Messaging::ButtonID)",0x48);
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
      if ((bool)local_38[1]._7_1_) goto LAB_1002f75de;
    }
    QArrayData::deallocate((QArrayData *)local_f8._32_8_,2,8);
  }
LAB_1002f75de:
  iVar3 = CMessageManager::instance();
  local_f8._8_8_ = PTR_shared_null_1021e15e8;
  local_f8._0_8_ = PTR_shared_null_1021e15e8;
  CMessageManager::showMessageBox
            (iVar3,(QWidget *)0x80015487,(QStringList *)0x0,(QStringList *)(local_f8 + 8),
             (CSlotInfo *)local_f8,SUB81(local_d0,0));
  uVar5 = local_f8._0_8_;
  if (*(int *)local_f8._0_8_ != -1) {
    if (*(int *)local_f8._0_8_ != 0) {
      LOCK();
      *(int *)local_f8._0_8_ = *(int *)local_f8._0_8_ + -1;
      local_38[1]._7_1_ = *(int *)local_f8._0_8_ != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002f76ad;
    }
    iVar3 = *(int *)(local_f8._0_8_ + 0xc);
    if (iVar3 != *(int *)(local_f8._0_8_ + 8)) {
      lVar9 = (long)*(int *)(local_f8._0_8_ + 8) * 8 + (long)iVar3 * -8;
      pDVar6 = (Data *)(local_f8._0_8_ + (long)iVar3 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar8 == 0) {
LAB_1002f768c:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_38[1]._7_1_ = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar8 = *(QArrayData **)pDVar6;
            goto LAB_1002f768c;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)uVar5);
  }
LAB_1002f76ad:
  uVar5 = local_f8._8_8_;
  if (*(int *)local_f8._8_8_ != -1) {
    if (*(int *)local_f8._8_8_ != 0) {
      LOCK();
      *(int *)local_f8._8_8_ = *(int *)local_f8._8_8_ + -1;
      local_38[1]._7_1_ = *(int *)local_f8._8_8_ != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002f7737;
    }
    iVar3 = *(int *)(local_f8._8_8_ + 0xc);
    if (iVar3 != *(int *)(local_f8._8_8_ + 8)) {
      lVar9 = (long)*(int *)(local_f8._8_8_ + 8) * 8 + (long)iVar3 * -8;
      pDVar6 = (Data *)(local_f8._8_8_ + (long)iVar3 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar8 == 0) {
LAB_1002f7716:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_38[1]._7_1_ = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar8 = *(QArrayData **)pDVar6;
            goto LAB_1002f7716;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)uVar5);
  }
LAB_1002f7737:
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
  return 0;
}

