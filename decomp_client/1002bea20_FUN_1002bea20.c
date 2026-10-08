
void FUN_1002bea20(long *param_1,int param_2)

{
  int iVar1;
  CSdkRequest *pCVar2;
  long lVar3;
  QString *pQVar4;
  undefined1 local_88 [16];
  undefined4 local_78;
  QArrayData *local_70;
  int *local_68 [4];
  QVariant local_48 [2];
  undefined1 local_29;
  
  if (-1 < param_2) {
    return;
  }
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (iVar1 != 2) {
    return;
  }
  if (param_2 == -0x7ffbbdb8) {
                    /* WARNING: Could not recover jumptable at 0x0001002bea74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0x80044248);
    return;
  }
  local_70 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onEnablePasswordProtectionRequestErrorMessageClosed()",0x36);
  local_78 = 0x80000000;
  local_88._8_8_ = (QObject *)0x0;
  FUN_100a1c600(local_68,param_1,&local_70,local_88 + 8);
  QVariant::~QVariant((QVariant *)(local_88 + 8));
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002beae7;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1002beae7:
  pCVar2 = (CSdkRequest *)CMessageManager::instance();
  pQVar4 = (QString *)0x0;
  if ((param_1[10] != 0) && (pQVar4 = (QString *)0x0, *(int *)(param_1[10] + 4) != 0)) {
    pQVar4 = (QString *)param_1[0xb];
  }
  lVar3 = 0;
  if ((param_1[5] != 0) && (lVar3 = 0, *(int *)(param_1[5] + 4) != 0)) {
    lVar3 = param_1[6];
  }
  FUN_100188480(local_88,lVar3);
  CMessageManager::showMessageBoxForRequest(pCVar2,pQVar4,(CSlotInfo *)local_88);
  if (*(int *)local_88._0_8_ != -1) {
    if (*(int *)local_88._0_8_ != 0) {
      LOCK();
      *(int *)local_88._0_8_ = *(int *)local_88._0_8_ + -1;
      local_29 = *(int *)local_88._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002beb6f;
    }
    QArrayData::deallocate((QArrayData *)local_88._0_8_,2,8);
  }
LAB_1002beb6f:
  QVariant::~QVariant(local_48);
  if (local_68[0] != (int *)0x0) {
    LOCK();
    *local_68[0] = *local_68[0] + -1;
    local_29 = *local_68[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_68[0] != (int *)0x0)) {
      operator_delete(local_68[0]);
    }
  }
  return;
}

