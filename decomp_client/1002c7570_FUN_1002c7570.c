
void FUN_1002c7570(long *param_1,int param_2)

{
  short sVar1;
  CSlotInfo *pCVar2;
  long lVar3;
  bool bVar4;
  QArrayData *local_88;
  Data_conflict local_80;
  undefined4 local_78;
  QArrayData *local_70;
  int *local_68 [4];
  QVariant local_48 [2];
  undefined1 local_29;
  
  if (((param_1[3] != 0) && (*(int *)(param_1[3] + 4) != 0)) && (param_1[4] != 0)) {
    pCVar2 = (CSlotInfo *)CSdkCommunicator::eventHandlers();
    local_70 = (QArrayData *)QString::fromAscii_helper("handleHttpProxyAuthRequired",0x1b);
    local_78 = 0x80000000;
    local_80.field7 = 0;
    FUN_100a1c6b0(local_68,&local_70,param_1,&local_80);
    CEventHandlerStorage::removeHandler(pCVar2);
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
    QVariant::~QVariant((QVariant *)&local_80);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_29 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002c765e;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
LAB_1002c765e:
  if (param_2 < 0) {
    QNetworkProxy::hostName();
    if (*(int *)(local_88 + 4) == 0) {
      bVar4 = false;
    }
    else {
      sVar1 = QNetworkProxy::port();
      bVar4 = sVar1 != 0;
    }
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_29 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002c76c0;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_1002c76c0:
    if (bVar4) {
      CAbstractTask::prependSubTask((int)param_1);
      lVar3 = *param_1;
      param_2 = 0;
      goto LAB_1002c76e6;
    }
  }
  lVar3 = *param_1;
LAB_1002c76e6:
  (**(code **)(lVar3 + 0xb0))(param_1,param_2);
  return;
}

