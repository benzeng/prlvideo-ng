
int FUN_100329180(long param_1)

{
  long lVar1;
  QArrayData *pQVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  int local_54;
  long local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return -0x7fffffff;
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0) {
    return -0x7fffffff;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return -0x7fffffff;
  }
  uVar5 = FUN_100319390();
  lVar6 = FUN_10018d490(uVar5);
  if (lVar6 == 0) {
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_1003193e0(&local_48,uVar5);
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: failed to open desktop IO gate for a VM [%s]. Server object is not found."
                  ,local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003293d3;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_1003293d3:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        if (*(int *)local_48 != 0) {
          return -0x7ffffff7;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_48,2,8);
    }
    return -0x7ffffff7;
  }
  CSdkCommunicator::startCommunication();
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193b0(&local_50,uVar5);
  lVar1 = local_50;
  uVar3 = FUN_10015ab70(lVar6);
  lVar6 = _PrlDevDisplay_ConnectToVm(lVar1,uVar3);
  if (local_50 != 0) {
    _PrlHandle_Free();
  }
  iVar4 = _PrlJob_GetRetCode(lVar6,&local_54);
  if (iVar4 < 0) {
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_1003193e0(&local_68,uVar5);
    QString::toLocal8Bit();
    pQVar2 = local_60;
    lVar1 = *(long *)(local_60 + 0x10);
    uVar5 = FUN_100dddcf0(iVar4);
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: failed to open desktop IO gate for a VM [%s]. Failed to get ConnectToVm job result. RC = %.8X [%s]"
                  ,pQVar2 + lVar1,iVar4,uVar5);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003294b2;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_1003294b2:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003294e2;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1003294e2:
    FUN_100327ff0(param_1);
    iVar7 = iVar4;
    goto LAB_1003294ed;
  }
  iVar7 = 0;
  if (((-1 < local_54) || (local_54 == -0x7fffffed)) || (local_54 == -0x7ffffc6f))
  goto LAB_1003294ed;
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193e0(&local_78,uVar5);
  QString::toLocal8Bit();
  pQVar2 = local_70;
  lVar1 = *(long *)(local_70 + 0x10);
  uVar5 = FUN_100dddcf0(local_54);
  FUN_100df99c0("","prl_client_app",0,"(!)Error: failed to connect to a VM [%s]. RC = %.8X [%s]",
                pQVar2 + lVar1,local_54,uVar5);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10032930c;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_10032930c:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10032933c;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10032933c:
  FUN_100327ff0(param_1);
  iVar7 = iVar4;
LAB_1003294ed:
  if (lVar6 == 0) {
    return iVar7;
  }
  _PrlHandle_Free(lVar6);
  return iVar7;
}

