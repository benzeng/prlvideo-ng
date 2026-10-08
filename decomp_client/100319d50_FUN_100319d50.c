
int FUN_100319d50(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  QArrayData *pQVar4;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (2 < DAT_10230ffd0) {
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_100188480(&local_40,uVar3);
    QString::toLocal8Bit();
    pQVar4 = local_38 + *(long *)(local_38 + 0x10);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_1001884b0(&local_50,uVar3);
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",3,"this=%p Disconnecting from VM %s, server %s",param_1,pQVar4
                  ,local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100319e39;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_100319e39:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100319e69;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100319e69:
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100319e99;
      }
      QArrayData::deallocate(local_38,1,8);
    }
LAB_100319e99:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100319ec9;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_100319ec9:
  FUN_100327ff0(*(undefined8 *)(param_1 + 0x90));
  FUN_100327ff0(*(undefined8 *)(param_1 + 0x88));
  FUN_100327ff0(*(undefined8 *)(param_1 + 0x80));
  FUN_100327ff0(*(undefined8 *)(param_1 + 0x78));
  FUN_100327ff0(*(undefined8 *)(param_1 + 0x68));
  iVar2 = FUN_100327ff0(*(undefined8 *)(param_1 + 0x60));
  if (-1 < iVar2) goto LAB_100319fd8;
  pQVar4 = *(QArrayData **)(param_1 + 0x28);
  if (1 < *(int *)pQVar4 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    local_29 = *(int *)pQVar4 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  lVar1 = *(long *)(local_58 + 0x10);
  uVar3 = FUN_100dddcf0(iVar2);
  FUN_100df99c0("","prl_client_app",0,
                "(!)Error while disconnecting from VM [%s]. Failed to close IO gate. RC = %.8X [%s]"
                ,local_58 + lVar1,iVar2,uVar3);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100319fa8;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100319fa8:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100319fd8;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100319fd8:
  FUN_100321d40(param_1 + 0x38);
  FUN_10035b1b0(*(undefined8 *)(param_1 + 0x148),0x17,0);
  FUN_10035bab0(*(undefined8 *)(param_1 + 0x148));
  return iVar2;
}

