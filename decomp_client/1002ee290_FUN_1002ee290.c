
int FUN_1002ee290(QObject *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  QObject *pQVar4;
  Data *pDVar5;
  QArrayData *pQVar6;
  long lVar7;
  undefined1 local_98 [40];
  int *local_70 [4];
  QVariant local_50 [2];
  long local_38;
  undefined1 local_29;
  
  if (DAT_102310930 == (QObject *)0x0) {
    pQVar4 = operator_new(0x18);
    FUN_1001e5440(pQVar4);
    DAT_102273630 = 1;
    DAT_102310930 = pQVar4;
  }
  pQVar4 = DAT_102310930;
  iVar3 = FUN_1001e5550(DAT_102310930,4);
  if (iVar3 < 0) {
    return 0x3bfa;
  }
  cVar2 = FUN_1001e4c30(pQVar4);
  if ((cVar2 == '\0') && (iVar3 = FUN_1001e5550(pQVar4,7), iVar3 == -0x7fffffed)) {
    return -0x7fffffff;
  }
  QObject::connect(&local_38,pQVar4,"2stepFinished(int, PRL_RESULT)",param_1,
                   "1onInitThreadStepFinished(int, PRL_RESULT)",2);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  iVar3 = FUN_1001e5550(pQVar4,7);
  if (iVar3 == -0x7fffffed) {
    CAbstractTask::setWaitForSubTaskCompletion();
    return 0;
  }
  QObject::disconnect(pQVar4,"2stepFinished(int, PRL_RESULT)",param_1,
                      "1onInitThreadStepFinished(int, PRL_RESULT)");
  if (-1 < iVar3) {
    (**(code **)(*(long *)param_1 + 0x98))(param_1,0x3bfa);
    return 0x3bfa;
  }
  if (iVar3 == -0x7ffeac9a) {
    return 0;
  }
  if (iVar3 != -0x7ffeab79) {
    return iVar3;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  local_98._32_8_ =
       QString::fromAscii_helper
                 ("1onRestartToCompleteIstallMessageClosed(PRL_RESULT, Messaging::ButtonID)",0x48);
  local_98._24_4_ = 0x80000000;
  local_98._16_8_ = (QMetaObject *)0x0;
  FUN_100a1c600(local_70,param_1,local_98 + 0x20,local_98 + 0x10);
  QVariant::~QVariant((QVariant *)(local_98 + 0x10));
  if (*(int *)local_98._32_8_ != -1) {
    if (*(int *)local_98._32_8_ != 0) {
      LOCK();
      *(int *)local_98._32_8_ = *(int *)local_98._32_8_ + -1;
      local_29 = *(int *)local_98._32_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002ee443;
    }
    QArrayData::deallocate((QArrayData *)local_98._32_8_,2,8);
  }
LAB_1002ee443:
  iVar3 = CMessageManager::instance();
  local_98._8_8_ = PTR_shared_null_1021e15e8;
  local_98._0_8_ = PTR_shared_null_1021e15e8;
  CMessageManager::showMessageBox
            (iVar3,(QWidget *)0x80015487,(QStringList *)0x0,(QStringList *)(local_98 + 8),
             (CSlotInfo *)local_98,SUB81(local_70,0));
  uVar1 = local_98._0_8_;
  if (*(int *)local_98._0_8_ != -1) {
    if (*(int *)local_98._0_8_ != 0) {
      LOCK();
      *(int *)local_98._0_8_ = *(int *)local_98._0_8_ + -1;
      local_29 = *(int *)local_98._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002ee50f;
    }
    iVar3 = *(int *)(local_98._0_8_ + 0xc);
    if (iVar3 != *(int *)(local_98._0_8_ + 8)) {
      lVar7 = (long)*(int *)(local_98._0_8_ + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = (Data *)(local_98._0_8_ + (long)iVar3 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar6 == 0) {
LAB_1002ee4ee:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar5;
            goto LAB_1002ee4ee;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_1002ee50f:
  uVar1 = local_98._8_8_;
  if (*(int *)local_98._8_8_ != -1) {
    if (*(int *)local_98._8_8_ != 0) {
      LOCK();
      *(int *)local_98._8_8_ = *(int *)local_98._8_8_ + -1;
      local_29 = *(int *)local_98._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002ee599;
    }
    iVar3 = *(int *)(local_98._8_8_ + 0xc);
    if (iVar3 != *(int *)(local_98._8_8_ + 8)) {
      lVar7 = (long)*(int *)(local_98._8_8_ + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = (Data *)(local_98._8_8_ + (long)iVar3 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar6 == 0) {
LAB_1002ee578:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar5;
            goto LAB_1002ee578;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_1002ee599:
  QVariant::~QVariant(local_50);
  if (local_70[0] != (int *)0x0) {
    LOCK();
    *local_70[0] = *local_70[0] + -1;
    local_29 = *local_70[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_70[0] != (int *)0x0)) {
      operator_delete(local_70[0]);
    }
  }
  return 0;
}

