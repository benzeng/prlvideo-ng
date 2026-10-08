
void FUN_1002be080(long param_1,int param_2)

{
  CSdkRequest *pCVar1;
  QString *pQVar2;
  undefined8 uVar3;
  undefined1 local_88 [16];
  undefined4 local_78;
  QArrayData *local_70;
  int *local_68 [4];
  QVariant local_48 [2];
  undefined1 local_29;
  
  if ((-1 < param_2) || (param_2 == -0x7ffbbdb8)) goto LAB_1002be1d0;
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
      if ((bool)local_29) goto LAB_1002be11c;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1002be11c:
  pCVar1 = (CSdkRequest *)CMessageManager::instance();
  pQVar2 = (QString *)0x0;
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (pQVar2 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) {
    pQVar2 = *(QString **)(param_1 + 0x58);
  }
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  FUN_100188480(local_88,uVar3);
  CMessageManager::showMessageBoxForRequest(pCVar1,pQVar2,(CSlotInfo *)local_88);
  if (*(int *)local_88._0_8_ != -1) {
    if (*(int *)local_88._0_8_ != 0) {
      LOCK();
      *(int *)local_88._0_8_ = *(int *)local_88._0_8_ + -1;
      local_29 = *(int *)local_88._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002be1a2;
    }
    QArrayData::deallocate((QArrayData *)local_88._0_8_,2,8);
  }
LAB_1002be1a2:
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
LAB_1002be1d0:
  FUN_100822760(param_1,-1 < param_2);
  return;
}

