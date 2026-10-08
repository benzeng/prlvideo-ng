
void FUN_10018e970(long param_1,int param_2)

{
  undefined4 uVar1;
  QArrayData *pQVar2;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (((*(long *)(param_1 + 0x30) == 0) || (*(int *)(*(long *)(param_1 + 0x30) + 4) == 0)) ||
     (*(long *)(param_1 + 0x38) == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get server instance to renew VM state.");
    return;
  }
  if (*(int *)(param_1 + 0x68) == param_2) {
    return;
  }
  EnumUtils::enumToString(&local_40);
  QString::toUpper();
  QString::toLocal8Bit();
  pQVar2 = local_30 + *(long *)(local_30 + 0x10);
  EnumUtils::enumToString(&local_58,param_2);
  QString::toUpper();
  QString::toLocal8Bit();
  FUN_100df99c0("","prl_client_app",0,"Updating Tools state: %s >>> %s",pQVar2,
                local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10018ea60;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10018ea60:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10018ea90;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10018ea90:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10018eac0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10018eac0:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10018eaf0;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_10018eaf0:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10018eb20;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10018eb20:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10018eb50;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10018eb50:
  uVar1 = *(undefined4 *)(param_1 + 0x68);
  *(int *)(param_1 + 0x68) = param_2;
  FUN_100804c60(param_1,param_2,uVar1);
  return;
}

