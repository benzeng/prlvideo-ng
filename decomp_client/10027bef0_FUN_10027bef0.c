
void FUN_10027bef0(long *param_1,undefined8 *param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  QString *pQVar3;
  QStringList *pQVar4;
  Data *pDVar5;
  undefined8 uVar6;
  QArrayData *pQVar7;
  long lVar8;
  undefined1 local_a0 [40];
  int *local_78 [4];
  QVariant local_58 [2];
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (1 < DAT_10230ffd0) {
    local_40 = (QArrayData *)*param_2;
    if (1 < *(int *)local_40 + 1U) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",2,"Downloaded file path = [%s]",
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10027bf9a;
      }
      QArrayData::deallocate(local_38,1,8);
    }
LAB_10027bf9a:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10027bfca;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_10027bfca:
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",2,"Process exit code = [%d]. Process exit status = [%d]",
                    param_3,param_4);
    }
  }
  if (param_4 == 0 && param_3 == 0) {
LAB_10027c2b0:
    lVar8 = *param_1;
    uVar6 = 0;
    goto LAB_10027c2b5;
  }
  cVar1 = CTaskDownloadFile::isCanceled();
  if (cVar1 != '\0') {
    lVar8 = *param_1;
    uVar6 = 0x80000275;
    goto LAB_10027c2b5;
  }
  if (param_4 == 0) {
    if (param_3 < 0x18) {
      if (param_3 == 6) {
        lVar8 = *param_1;
        uVar6 = 0x80015415;
        goto LAB_10027c2b5;
      }
    }
    else {
      switch(param_3) {
      case 0x18:
      case 0x1b:
        local_a0._32_8_ =
             QString::fromAscii_helper
                       ("1onRetryDownloadAnswered(PRL_RESULT, Messaging::ButtonID)",0x39);
        local_a0._24_4_ = 0x80000000;
        local_a0._16_8_ = (QMetaObject *)0x0;
        FUN_100a1c600(local_78,param_1,local_a0 + 0x20,local_a0 + 0x10);
        QVariant::~QVariant((QVariant *)(local_a0 + 0x10));
        if (*(int *)local_a0._32_8_ != -1) {
          if (*(int *)local_a0._32_8_ != 0) {
            LOCK();
            *(int *)local_a0._32_8_ = *(int *)local_a0._32_8_ + -1;
            local_29 = *(int *)local_a0._32_8_ != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_10027c0ed;
          }
          QArrayData::deallocate((QArrayData *)local_a0._32_8_,2,8);
        }
LAB_10027c0ed:
        iVar2 = CMessageManager::instance();
        pQVar3 = (QString *)CSearchParentHelper::instance();
        pQVar4 = (QStringList *)
                 CSearchParentHelper::getParentForMessage
                           (pQVar3,(bool)((char)param_1 + 'h'),(QWidget *)0x0);
        local_a0._8_8_ = PTR_shared_null_1021e15e8;
        local_a0._0_8_ = PTR_shared_null_1021e15e8;
        CMessageManager::showMessageBox
                  (iVar2,(QWidget *)0x3be4,pQVar4,(QStringList *)(local_a0 + 8),
                   (CSlotInfo *)local_a0,SUB81(local_78,0));
        uVar6 = local_a0._0_8_;
        if (*(int *)local_a0._0_8_ != -1) {
          if (*(int *)local_a0._0_8_ != 0) {
            LOCK();
            *(int *)local_a0._0_8_ = *(int *)local_a0._0_8_ + -1;
            local_29 = *(int *)local_a0._0_8_ != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_10027c1d5;
          }
          iVar2 = *(int *)(local_a0._0_8_ + 0xc);
          if (iVar2 != *(int *)(local_a0._0_8_ + 8)) {
            lVar8 = (long)*(int *)(local_a0._0_8_ + 8) * 8 + (long)iVar2 * -8;
            pDVar5 = (Data *)(local_a0._0_8_ + (long)iVar2 * 8 + 8);
            do {
              pQVar7 = *(QArrayData **)pDVar5;
              if (*(int *)pQVar7 == 0) {
LAB_10027c1b4:
                QArrayData::deallocate(pQVar7,2,8);
              }
              else if (*(int *)pQVar7 != -1) {
                LOCK();
                *(int *)pQVar7 = *(int *)pQVar7 + -1;
                local_29 = *(int *)pQVar7 != 0;
                UNLOCK();
                if (!(bool)local_29) {
                  pQVar7 = *(QArrayData **)pDVar5;
                  goto LAB_10027c1b4;
                }
              }
              pDVar5 = pDVar5 + -8;
              lVar8 = lVar8 + 8;
            } while (lVar8 != 0);
          }
          QListData::dispose((Data *)uVar6);
        }
LAB_10027c1d5:
        uVar6 = local_a0._8_8_;
        if (*(int *)local_a0._8_8_ != -1) {
          if (*(int *)local_a0._8_8_ != 0) {
            LOCK();
            *(int *)local_a0._8_8_ = *(int *)local_a0._8_8_ + -1;
            local_29 = *(int *)local_a0._8_8_ != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_10027c25f;
          }
          iVar2 = *(int *)(local_a0._8_8_ + 0xc);
          if (iVar2 != *(int *)(local_a0._8_8_ + 8)) {
            lVar8 = (long)*(int *)(local_a0._8_8_ + 8) * 8 + (long)iVar2 * -8;
            pDVar5 = (Data *)(local_a0._8_8_ + (long)iVar2 * 8 + 8);
            do {
              pQVar7 = *(QArrayData **)pDVar5;
              if (*(int *)pQVar7 == 0) {
LAB_10027c23e:
                QArrayData::deallocate(pQVar7,2,8);
              }
              else if (*(int *)pQVar7 != -1) {
                LOCK();
                *(int *)pQVar7 = *(int *)pQVar7 + -1;
                local_29 = *(int *)pQVar7 != 0;
                UNLOCK();
                if (!(bool)local_29) {
                  pQVar7 = *(QArrayData **)pDVar5;
                  goto LAB_10027c23e;
                }
              }
              pDVar5 = pDVar5 + -8;
              lVar8 = lVar8 + 8;
            } while (lVar8 != 0);
          }
          QListData::dispose((Data *)uVar6);
        }
LAB_10027c25f:
        QVariant::~QVariant(local_58);
        if (local_78[0] == (int *)0x0) {
          return;
        }
        LOCK();
        *local_78[0] = *local_78[0] + -1;
        local_29 = *local_78[0] != 0;
        UNLOCK();
        if ((bool)local_29) {
          return;
        }
        if (local_78[0] == (int *)0x0) {
          return;
        }
        operator_delete(local_78[0]);
        return;
      case 0x19:
        lVar8 = *param_1;
        uVar6 = 0x80015417;
        goto LAB_10027c2b5;
      case 0x1d:
        CAbstractTask::prependSubTask((int)param_1);
        goto LAB_10027c2b0;
      }
    }
  }
  lVar8 = *param_1;
  uVar6 = 0x80015413;
LAB_10027c2b5:
  (**(code **)(lVar8 + 0xb0))(param_1,uVar6);
  return;
}

