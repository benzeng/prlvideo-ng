
void FUN_10033f580(long param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  QObject *pQVar5;
  QArrayData *pQVar6;
  QArrayData *pQVar7;
  QArrayData *pQVar8;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if ((((*(long *)(param_1 + 0x20) == 0) || (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0)) ||
      (*(long *)(param_1 + 0x28) == 0)) || (cVar1 = CAbstractTask::isFinished(), cVar1 != '\0')) {
    FUN_100340370(param_1,param_2,param_3);
    return;
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
  }
  iVar2 = FUN_1002308e0(uVar4);
  cVar1 = CAbstractTask::canBeTerminated();
  if ((iVar2 == param_2) || (cVar1 != '\x01')) goto LAB_10033f9a7;
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193e0(&local_48,uVar4);
  QString::toLocal8Bit();
  pQVar6 = local_40 + *(long *)(local_40 + 0x10);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar3 = FUN_100319ae0(uVar4);
  EnumUtils::enumToString(&local_60,uVar3,1);
  QString::toUpper();
  QString::toLocal8Bit();
  pQVar8 = local_50 + *(long *)(local_50 + 0x10);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
  }
  uVar3 = FUN_1002308e0(uVar4);
  EnumUtils::enumToString(&local_78,uVar3,1);
  QString::toUpper();
  QString::toLocal8Bit();
  pQVar7 = local_68 + *(long *)(local_68 + 0x10);
  EnumUtils::enumToString(&local_90,param_2,1);
  QString::toUpper();
  QString::toLocal8Bit();
  FUN_100df99c0("","prl_client_app",0,
                "Terminate to switch VM\'s [%s] desktop from %s to %s mode. New mode is %s",pQVar6,
                pQVar8,pQVar7,local_80 + *(long *)(local_80 + 0x10));
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10033f79c;
    }
    QArrayData::deallocate(local_80,1,8);
  }
LAB_10033f79c:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10033f7cc;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10033f7cc:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10033f802;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10033f802:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10033f832;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_10033f832:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10033f862;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10033f862:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10033f892;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10033f892:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10033f8c2;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10033f8c2:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10033f8f2;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10033f8f2:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10033f922;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10033f922:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10033f952;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10033f952:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10033f982;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10033f982:
  pQVar5 = (QObject *)0x0;
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (pQVar5 = (QObject *)0x0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
    pQVar5 = *(QObject **)(param_1 + 0x28);
  }
  QTimer::singleShot(0,pQVar5,"1terminate()");
LAB_10033f9a7:
  FUN_10033fcf0(param_1,param_2,param_3);
  return;
}

