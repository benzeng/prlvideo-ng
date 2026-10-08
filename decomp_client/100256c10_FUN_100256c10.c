
int FUN_100256c10(undefined8 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  Data *pDVar5;
  QArrayData *pQVar6;
  Data_conflict local_b8;
  undefined4 local_b0;
  QArrayData *local_a8;
  int *local_a0 [4];
  QVariant local_80 [2];
  undefined1 local_68 [16];
  QVariant local_58;
  QVariant local_48;
  undefined1 local_31;
  
  if (param_2 < 0) {
    return param_2;
  }
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001554a0(uVar3);
  if (lVar4 == 0) {
    return -0x7ffffff7;
  }
  uVar3 = FUN_10016f500(lVar4);
  FUN_10061abe0(local_68 + 0x20,uVar3,0);
  iVar2 = QVariant::toInt((bool *)(local_68 + 0x20));
  if (iVar2 == 0) {
    QVariant::~QVariant((QVariant *)(local_68 + 0x20));
  }
  else {
    FUN_10061abe0(local_68 + 0x10,uVar3,0);
    iVar2 = QVariant::toInt((bool *)(local_68 + 0x10));
    QVariant::~QVariant((QVariant *)(local_68 + 0x10));
    QVariant::~QVariant((QVariant *)(local_68 + 0x20));
    if (iVar2 != -0x7ffeefa8) {
      return -0x7ffffff7;
    }
  }
  cVar1 = FUN_10061b500(uVar3,4);
  if (cVar1 == '\0') {
    return 0;
  }
  cVar1 = CTaskCheckForProductUpdate::isCheckInBackground();
  if (cVar1 != '\0') {
    return -0x7ffeadad;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  iVar2 = CMessageManager::instance();
  local_68._8_8_ = PTR_shared_null_1021e15e8;
  local_68._0_8_ = PTR_shared_null_1021e15e8;
  local_a8 = (QArrayData *)QString::fromAscii_helper("1subTaskCompleted(PRL_RESULT)",0x1d);
  local_b0 = 0x80000000;
  local_b8.field7 = 0;
  FUN_100a1c600(local_a0,param_1,&local_a8,&local_b8);
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x80015253,(QStringList *)0x0,(QStringList *)(local_68 + 8),
             (CSlotInfo *)local_68,SUB81(local_a0,0));
  QVariant::~QVariant(local_80);
  if (local_a0[0] != (int *)0x0) {
    LOCK();
    *local_a0[0] = *local_a0[0] + -1;
    local_31 = *local_a0[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_a0[0] != (int *)0x0)) {
      operator_delete(local_a0[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_b8);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100256df1;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100256df1:
  uVar3 = local_68._0_8_;
  if (*(int *)local_68._0_8_ != -1) {
    if (*(int *)local_68._0_8_ != 0) {
      LOCK();
      *(int *)local_68._0_8_ = *(int *)local_68._0_8_ + -1;
      local_31 = *(int *)local_68._0_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100256e80;
    }
    iVar2 = *(int *)(local_68._0_8_ + 0xc);
    if (iVar2 != *(int *)(local_68._0_8_ + 8)) {
      lVar4 = (long)*(int *)(local_68._0_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar5 = (Data *)(local_68._0_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar6 == 0) {
LAB_100256e5f:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_31 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar6 = *(QArrayData **)pDVar5;
            goto LAB_100256e5f;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose((Data *)uVar3);
  }
LAB_100256e80:
  uVar3 = local_68._8_8_;
  if (*(int *)local_68._8_8_ != -1) {
    if (*(int *)local_68._8_8_ != 0) {
      LOCK();
      *(int *)local_68._8_8_ = *(int *)local_68._8_8_ + -1;
      UNLOCK();
      if (*(int *)local_68._8_8_ != 0) {
        return 0;
      }
      local_31 = 0;
    }
    iVar2 = *(int *)(local_68._8_8_ + 0xc);
    if (iVar2 != *(int *)(local_68._8_8_ + 8)) {
      lVar4 = (long)*(int *)(local_68._8_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar5 = (Data *)(local_68._8_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar6 == 0) {
LAB_100256ef0:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_31 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar6 = *(QArrayData **)pDVar5;
            goto LAB_100256ef0;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose((Data *)uVar3);
  }
  return 0;
}

