
void FUN_100475910(long param_1)

{
  QString *pQVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  undefined1 local_40;
  undefined7 uStack_3f;
  undefined1 local_31;
  
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x68) + 0xd0);
  uVar5 = CNetLinkRateLimit::getRxBps();
  uVar3 = CNetLinkRateLimit::getGUIRxScale();
  FUN_100475e10(&local_50,uVar5,uVar3);
  QLabel::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100475991;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100475991:
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x68) + 0xe8);
  uVar3 = CNetLinkRateLimit::getRxLossPpm();
  FUN_100475f10(&local_58,uVar3);
  QLabel::setText(pQVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004759ed;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004759ed:
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x68) + 0xf8);
  iVar4 = CNetLinkRateLimit::getRxDelayMs();
  QString::number((uint)&local_48,iVar4);
  FUN_100473050(&local_60,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100475a4f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100475a4f:
  QLabel::setText(pQVar1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100475a8b;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100475a8b:
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x68) + 0x120);
  uVar5 = CNetLinkRateLimit::getTxBps();
  uVar3 = CNetLinkRateLimit::getGUITxScale();
  FUN_100475e10(&local_68,uVar5,uVar3);
  QLabel::setText(pQVar1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100475af5;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100475af5:
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x68) + 0x130);
  uVar3 = CNetLinkRateLimit::getTxLossPpm();
  FUN_100475f10(&local_70,uVar3);
  QLabel::setText(pQVar1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100475b51;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100475b51:
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x68) + 0x140);
  iVar4 = CNetLinkRateLimit::getTxDelayMs();
  QString::number((uint)&local_40,iVar4);
  FUN_100473050(&local_78,&local_40);
  piVar2 = (int *)CONCAT71(uStack_3f,local_40);
  if (*piVar2 != -1) {
    if (*piVar2 != 0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      local_31 = *piVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100475bb3;
    }
    QArrayData::deallocate((QArrayData *)CONCAT71(uStack_3f,local_40),2,8);
  }
LAB_100475bb3:
  QLabel::setText(pQVar1);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      UNLOCK();
      if (*(int *)local_78 != 0) {
        return;
      }
      local_40 = 0;
    }
    QArrayData::deallocate(local_78,2,8);
  }
  return;
}

